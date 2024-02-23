#include <iostream>
#include <vector>

using namespace std;

void print_leftmost_path(int arr[], int n) {
    vector<int> path;
    int index = 0;
    path.push_back(arr[index]);
    while (2 * index + 1 < n) {
        index = 2 * index + 1;
        path.push_back(arr[index]);
    }
    cout << "Leftmost path: ";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }
    cout << endl;
}

void print_rightmost_path(int arr[], int n) {
    vector<int> path;
    int index = 0;
    path.push_back(arr[index]);
    while (2 * index + 2 < n) {
        index = 2 * index + 2;
        path.push_back(arr[index]);
    }
    cout << "Rightmost path: ";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i] << " ";
    }
    cout << endl;
}

void print_paths_helper(int arr[], int n, int index, vector<int>& path) {
    if (index >= n) {
        return;
    }
    path.push_back(arr[index]);
    if (2 * index + 1 >= n && 2 * index + 2 >= n) {
        cout << "Path: ";
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    } else {
        print_paths_helper(arr, n, 2 * index + 1, path);
        print_paths_helper(arr, n, 2 * index + 2, path);
    }
    path.pop_back();
}

void print_all_paths(int arr[], int n) {
    vector<int> path;
    print_paths_helper(arr, n, 0, path);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_leftmost_path(arr, n);
    print_rightmost_path(arr, n);
    print_all_paths(arr, n);
    return 0;
}
