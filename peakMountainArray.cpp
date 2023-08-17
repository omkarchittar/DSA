// LEETCODE
/*Peak index in a mountain array*/

// ------------------------------------------------------
// linear search
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 5, 7, 11, 2, 2, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int peak;
//     // cout<<n;
//     peak = arr[0];

//     for(int i = 0; i<n; i++) {
//         if(peak<=arr[i]) {
//             peak = arr[i];
//         }
//         else {
//             cout<<peak;
//             break;
//         }
//     }
//     return 0;
// }
// ------------------------------------------------------

// binary search
#include<iostream>
using namespace std;

int peak(int arr[], int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    
    while(start<end) { //*******
        if(arr[mid] < arr[mid+1]) {
            start = mid + 1;
        }

        else {
            end = mid;      // ******
        }
        mid = start + (end - start)/2;
    }
    return start; //*****
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 4, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<peak(arr, n)<<endl;
    return 0;
}