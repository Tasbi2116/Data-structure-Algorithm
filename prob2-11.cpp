#include <iostream>
using namespace std;

int main() {
   int Matrix[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter rows and columns of matrix: \n";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   // Storing matrix elements
   for (int i = 0; i < row; i++)
   {
      for (int j = 0; j < column; j++) 
      {
         cout << "Enter element Matrix " << i + 1 << j + 1 << ": ";
         cin >> Matrix[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; i++) 
   {
      for (int j = 0; j < column; j++) 
      {
         cout << " " << Matrix[i][j];
         if (j == column - 1)
         {
            cout << endl << endl;
         }
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; i++)
      for (int j = 0; j < column; j++) 
      {
         transpose[j][i] = Matrix[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}