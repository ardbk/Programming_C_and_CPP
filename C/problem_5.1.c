/*
CH-230-A
a5 p1.[c]
Aidyn Ardabek
a.ardabek@jacobs-university.de
*/
#include <stdio.h>

void pyramid(int n, char a); //function for print

int main() {
	int num;
	char c;
	scanf("%d", &num);
	getchar();
	scanf("%c", &c);
	pyramid(num, c);
	return 0;
}

void pyramid(int n, char a) {
	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++) {  //loop for pyramid
			printf("%c", a);
		}
		printf("\n"); //1 step
	}
}
