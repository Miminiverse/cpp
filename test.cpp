#include <iostream>
using namespace std;

void callFunc(int* arr , int size) {
    
    cout << "array " << arr << endl;
    cout << "array index 1 " << arr[0] << endl;
    cout << "array index 2 " << arr[1] << endl;
    cout << "array index 3 " << arr[2] << endl;
    cout << "array check " << *arr << endl;
    // cout << "arg2" << arg2 << endl;
    
}

int main ()
{
    int arr[5] = {9,2,3,4,5};
    callFunc(arr,5); 
}