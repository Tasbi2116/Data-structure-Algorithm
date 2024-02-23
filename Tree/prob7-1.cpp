#include <iostream>

using namespace std;

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_row(int arr[], int n, int start_index, int end_index) {
    for (int i = start_index; i <= end_index && i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_children(int arr[], int n, int index) {
    int left_child_index = 2 * index + 1;
    int right_child_index = 2 * index + 2;
    if (left_child_index < n) {
        cout << "Left child of " << arr[index] << ": " << arr[left_child_index] << endl;
    }
    if (right_child_index < n) {
        cout << "Right child of " << arr[index] << ": " << arr[right_child_index] << endl;
    }
}

void print_parent(int arr[], int n, int index) {
    if (index > 0 && index < n) {
        int parent_index = (index - 1) / 2;
        cout << "Parent of " << arr[index] << ": " << arr[parent_index] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array data in rows:" << endl;
    int start_index = 0;
    int end_index = 0;
    int level = 0;
    while (end_index < n) {
        cout << "Level " << level << ": ";
        print_row(arr, n, start_index, end_index);
        start_index = end_index + 1;
        end_index = (2 * end_index) + 2;
        level++;
    }
    cout << endl;
    int index = 3;
    cout << "Data of index " << index << ": " << arr[index] << endl;
    print_children(arr, n, index);
    print_parent(arr, n, index);
    cout << endl;
    return 0;
}
