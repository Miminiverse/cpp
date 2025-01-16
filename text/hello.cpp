#include <iostream>
using namespace std;

void display(int size) {
    
    // Write your code here
    int matrix[5][5];
    for (int i=0; i<5; i++){
      for (int j=0; j<=5; j++){
        if (i == j){
          matrix[i][j] = 0;
        } else if (j>i){
          matrix[i][j] = 1;
        } else {
          matrix[i][j] = -1;
        }
      }
    }
    for (int i =0; i<5; i++){
      for (int j = 0; j<5; j++){
        cout << matrix[i][j] << " ";
      }
      cout<<endl;
    }
}

int main ()
{
    display(5); 
}