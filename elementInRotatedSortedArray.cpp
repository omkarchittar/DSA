// Find element in a sorted and a rotated array
//complexity O(logn)
// there are three different approaches to this problem

#include<iostream>
using namespace std;

int binarySearch(int a[], int start, int end, int key) {
    int s = start, e = end;
    int mid = (s+e)/2;

    while(s <= e) {
        if(key == a[mid]) {
            return mid;
        }

        if (key > a[mid]) {
            s = mid + 1 ;
        }
        else {
            e = mid - 1;
        }

        mid = (s + e)/2;
    }
    return -1;
}

int getPivot(int arr[], int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while(start<end) {
        if(arr[0] <= arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int findPosition(int arr[], int n, int k) {
    int pivot = getPivot(arr, n);
    if(arr[pivot] <= k && k <= arr[n-1]) { // Binary search on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else { // Binary search on first line
        return binarySearch(arr, 0, pivot-1, k);
    }
}

int main() {
    int arr[] = {7, 9, 1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    
    cout<<"The key is at index: "<<findPosition(arr, n, key)<<endl;
    return 0;
}