#include <iostream>
using namespace std;

int main() {
   int row, col, i, j;
   cout << "Enter no of rows : ";
   cin >> row;
   cout << "Enter no of columns : ";
   cin >> col;
   cout << "\nEnter elements of matrix: " << endl;
   int matrix[row][col], transpose[col][row]; 

   // Storing matrix elements
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << "Enter element " << "[" << i + 1 << j + 1 << "] : ";
         cin >> matrix[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < col; ++j) {
         cout << " " << matrix[i][j];
         if (j == col - 1)
            cout << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         transpose[j][i] = matrix[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl;
      }

   return 0;
}