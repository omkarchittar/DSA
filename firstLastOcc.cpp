// first and last position of an element in an sorted array
/* Divide the problem into two parts:
    1. leftmost occurrance
    2. rightmost occurrance
    Trying to utilize binary search for finding the solution
    STEPS: find mid


    pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) 
*/

#include<iostream>
using namespace std;

// for leftmost occurrance
int firstOcc(int arr[], int n, int k) {
    // int size = arr.size();
    // we are checking for the leftmost occ therefore everytime we move to the left part
    int start = 0, end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end) {
        
        if(arr[mid] == k) {
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid] > k) {
            end = mid - 1;
        }

        else if(arr[mid] < k) { //else
            start = mid + 1;
        } 
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc (int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == k) {
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid] > k) {
            end = mid - 1;
        }

        else if(arr[mid] < k) { //else
            start = mid + 1;
        }
        mid = start + (end - start)/2; 
    }
    return ans;
}

int main() {
    int a[16] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5};
    int key = 3;

    cout<<"first occ: "<<firstOcc(a, 16, key)<<endl;
    cout<<"last occ: "<<lastOcc(a, 16, key)<<endl;

    return 0;
}