#include <iostream>
using namespace std;

void printBoard(int **board,int rows, int columns){ //pass the appropriate arguments in the function
 
    for (int i = 0; i < rows; i++) {   // for each row
          for (int j = 0; j < columns; j++) { // for each column
              board[i][j] = 1;
              cout << board[i][j]<<" ";
          }
          cout<<endl;
      }
}

void makeBoard(int rows, int columns) {
    
    // creat a pointer to a pointer
    int **board;
    board = new int*[rows]; 

    for (int i = 0; i < rows; i++) {
        board[i] = new int[columns];
    }

    printBoard(board, rows, columns);
    
}

int main ()
{
    makeBoard(5,4); 
}