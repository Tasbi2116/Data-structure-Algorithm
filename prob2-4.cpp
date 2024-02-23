#include<iostream>
using namespace std;
/* The program will take an integer array from user and 
find out the summation of the elements that are stored in even and odd indices*/
int main(){
    int array[100], i, N , SumOfEVEN = 0, SumOfODD = 0;
    cout << "Enter the size of the array\n";
    cin >> N;
    cout << "Enter the elements \n";
    // Read the array from User.
    for(i=0; i<N; i++){
        cin >> array[i];
    }
    //Finding out the summation of the elements individually
    //that are stored in even and odd indices.
    for(i=0; i<N; i++){
        if(i%2 == 0)
        {
            SumOfEVEN = SumOfEVEN + array[i];
        }
        else
        {
            SumOfODD = SumOfODD + array [i];
        }
    }
    //Display Part
    cout << "Summation of the elements stored in even indices = " << SumOfEVEN << "\n";
    cout << "summation of the elements stored in odd indices = " << SumOfODD; 
    return 0;
}
