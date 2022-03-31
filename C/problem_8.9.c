/*
 * CH-230-A
 * a8_p9.c
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    FILE *output = fopen("output.txt", "w");
    if (output == NULL)
    {
        printf("Some  error  occurred !\n");
        return 0;
    }

    char buffer[64];
    char fileName[255];
    
    printf("Concating the content of %d files ...\n", n);
    // Iterate n times
    for (int i=0; i<n; i++){
        //read the name of the file
        scanf(" %s", fileName);
        // Open the file
        FILE *input = fopen(fileName, "r");
        //if it is not opened, stop the program
        if (input == NULL)
        {
            printf("Some  error  occurred !\n");
            return 0;
        }
        //initialize and assign a variable to the size of the file
        fseek(input, 0, SEEK_END);
        int fileSize = ftell(input);
        rewind(input);
        for(int j=0; j<64; j++){
            buffer[j] = '\0';
        }
        //initializing a variable to check if we reached the end of the file
        int check = 0;
        //while the end is not reached
        while (!check)
        {
            int count = 64;
            int currentPos = ftell(input);
            //check if there is less than 64 elements
            if (fileSize - currentPos < 64){
                //if yes, assign check to 1
                check = 1;
                //and count number of remaining elements
                count = fileSize - currentPos;
            }
            //read the 64 elements from the input file
            fread(buffer, 1, count, input);

            //print these 64 elements to stand. output and output file
            printf("%s", buffer);
            fprintf(output, "%s", buffer);
        }
        //print \n
        printf("\n");
        fprintf(output, "\n");
        fclose(input);
    }

    fclose(output);

    return 0;
}