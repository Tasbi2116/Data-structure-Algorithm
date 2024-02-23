#include<iostream>
using namespace std;
/*The program will take a two dimentional array as input and find out 
the summation of the boundary elements*/
int main()
{
   int array[50][50],i,j,sum =0,Rows,Coloumns;
   cout << "Enter the number of Rows and Coloumns\n";
   cin >> Rows >> Coloumns;
   //Read the array
   for(i=0;i<Rows;i++)
   {
      for(j=0;j<Coloumns;j++)
      {
        cin >> array[i][j];
        //for the boundary indicies the logic will add the elements.
        if(i==0 || j==0 || i==Rows-1 || j == Coloumns-1)
        {
           sum = sum + array[i][j];
        }
      }
   }
   cout <<"The summation of boundary elements is "<< sum;
   return 0;
}