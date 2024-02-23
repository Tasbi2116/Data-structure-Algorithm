#include<iostream>
using namespace std;
/*The program will take an integer array as input and 
find out the summation of even and odd elements.*/
int main(){
    int array[100], i, N, SumOfEven = 0, SumOfOdd = 0 ;
    cout << "Enter the size of array\n";
    cin >> N;
    cout << "Enter the elements for the array\n";
    //read the array from user
    for(i=0; i<N; i++){
        cin >> array[i];
    }

    //Summation of the even numbers
    for(i=0; i<N; i++){
        if(array[i]%2 == 0)
        {
            SumOfEven = SumOfEven + array[i];
        }
        //summation of odd numbers
        else
        {
            SumOfOdd = SumOfOdd + array[i];
        }
    }
    //Display Part
    cout << "The sum of even elements : "<< SumOfEven <<"\n";
    cout << "The sum of odd numbers : " << SumOfOdd;
    return 0;
}
