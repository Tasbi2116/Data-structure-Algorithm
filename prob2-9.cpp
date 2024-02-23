#include <iostream>
#define SIZE 3
using namespace std;

/*The program will take a two dimentional array as input and find out the
summation of diagonal elements.*/
 
int main()
{
  int matrix[SIZE][SIZE];
  int sum_left =0, sum_right = 0;
  cout << "Enter elements into the matrix \n";

  //Taking input into the Matrix and 
  //Adding if they are diagonal elements
  for(int i=0; i<SIZE ; i++)
  {
    for(int j=0; j<SIZE; j++)
    {
      cin >> matrix[i][j];
      if(i==j)
      {
        sum_left += matrix[i][j];
      }
      if((i+j) == SIZE-1)
      {
        sum_right += matrix[i][j];
      }
    }
  }

  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;

  return 0;
}