// Find Pivot in an array

#include<iostream>
using namespace std;

int pivotElement(int arr[], int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while (start<end) {
        if (arr[0] <= arr[mid]) {       // always compare with arr[0] 
            start = mid + 1;
        }

        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start; // OR return end;
}

int main() {

    // int arr[] = {1, 2, 3, 7, 9} is a sorted array
    int arr[] = {7, 9, 1, 2, 3}; // is a sorted rotated array
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"pivot is at index "<<pivotElement(arr, n)<<endl;
    return 0;
}