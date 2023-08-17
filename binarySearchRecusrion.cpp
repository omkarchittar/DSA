// Binary search using Recursion

// basic condition is that the array is sorted

#include<iostream>

using namespace std;

void print(int arr[], int s, int e) {
    for(int i = s; i<=e; i++) {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int binarySearch(int *arr, int s, int e, int k) {
    
    print(arr, s, e);
    
    // base case 
    // element not founf
    if(s>e) {
        return false;
    }
    int mid = s + (e-s)/2;
    // element found
    if(arr[mid] == k) {
        return true;
    }
    

    if(arr[mid]<k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int key = 7;

    cout<<"Present or Not? "<<binarySearch(arr, 0, 7, key)<<endl;

    return 0;

}