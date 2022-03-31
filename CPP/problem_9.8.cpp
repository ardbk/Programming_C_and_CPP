/*
 * CH-230-A
 * a9_p8.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;
//creating a function to find maximum value
int maximum(int *arr, int size){
    //assign first element as a maximum element
    int max = arr[0];
    //using loop check if other elements are higher
    for(int i=1; i<size; i++){
        //if there is an element higher, assign it as a maximum element
        if(arr[i] > max) max =arr[i];
    }
    //return maximum element
    return max;
}
//create a function
void subtract_max(int *arr, int size){
    //find maximum element
    int max = maximum(arr, size);
    //using loop subtract maximum value from all elements
    for(int i=0; i<size; i++){
        arr[i] = arr[i] - max;
    }
}
//create a function to deallocate
void deallocate(int *arr){
    //deallocate memory
    delete[] arr;
}

int main() {
    //initialize and read input for n
    int n;
    cin >> n;
    //initialize array and allocate memory
    int *a = new(nothrow) int[n];
    if (!a) {
        cout << "Memory allocation failed" << endl;
    }
    //read input for every element of array
    for(int i=0; i<n; i++){
        cout << "[" << i+1 <<"] = ";
        cin >> a[i];
    }
    //print array
    for(int i=0; i<n; i++){
        cout << "[" << i+1 <<"]=" << a[i] << " ";
    }
    cout << endl;
    //call the function
    subtract_max(a, n);
    //print the result
    for(int i=0; i<n; i++){
        cout << "[" << i+1 <<"]=" << a[i] << " ";
    }
    cout << endl;
    //call the function to deallocate
    deallocate(a);
    return 0;
}
