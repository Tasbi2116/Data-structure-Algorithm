#include<iostream>

using namespace std;

/* The program will take som integers using an array and it will print the elements separately and
 display the sum, average of the elements.*/

int main() {
    int i, count, sum = 0, array[100];
    float average = 0;

    cout << "Enter number of elements\n";
    cin >> count;
    cout << "Enter " << count << " elements\n";
    // Read "Count" elements from user.
    for (i = 0; i < count; i++) {
        cin >> array[i];
    }

    //Find the sum of the elements
    for (i = 0; i < count; i++) {
        sum = sum + array[i];
    }

    //find out the average
    average = (float) sum / count;

    //Display part
    for (i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average;

    return 0;
}