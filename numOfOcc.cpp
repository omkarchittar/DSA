/*number of occurrances in an array*/

// ----------------------------------------------------------------
// linear search
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 2, 3, 3, 3, 3, 5};
//     int key = 2;
//     // int n = arr.size();
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int count = 0;
//     for(int i = 0; i <= n; i++) {
//         if(arr[i] == key) {
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }
// ----------------------------------------------------------------

// binary search
#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
    int start = 0, end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid] < key) {
            start = mid + 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end) {
        if(arr[mid] ==key) {
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid] < key) {
            start = mid + 1;
        }

        else if(arr[mid] > key) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;        
    }
    return ans;
}

int main() {
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 5};
    int key = 1;
    int n = sizeof(arr)/sizeof(arr[0]);

    int f = firstOcc(arr, n, key);
    int l = lastOcc(arr, n, key);

    int occ = l - f + 1;

    cout<<occ<<endl;
    return 0; 
}