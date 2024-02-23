#include<iostream>

using namespace std;
/* The program will take an integer array from user and 
find out the smallest and the largest element*/
int main(){
    int array[100], N, i, maximum, minimum;
    cout << "Enter the size of the array\n";
    cin >> N;
    cout << "Enter the elements\n";
    //read the array from user
    for(i =0; i<N; i++){
        cin >> array[i];
    }
    //Finding out the maximum value.

    maximum = array[0];
    for(i=0; i<N; i++){
        if(maximum < array[i])
        {
            maximum = array[i];
        }
    }
    //finding out the minimum value.

        minimum = array[0];
    for(i=0; i<N; i++){
        if(minimum > array[i])
        {
            minimum = array[i];
        }
    }
    //Display part
    cout << "Largest element: "<< maximum << "\n";
    cout << "Smallest element:" << minimum;
    return 0;
}
