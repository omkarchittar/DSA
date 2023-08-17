// bubble sort using recursion

// ith round me ith element ko uski sahi jagah pe jaake rakh dete the

#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {

    // base case - already sorted array
    if( n == 0 || n == 1) {
        return ;
    }

    // ek case solve kardo - largest element ko end me jaake rakhdo
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    // baaki recursion sambhaal lega
    // recursive call
    sortArray(arr, n-1);
}

int main() {
    int arr[5] = {2,5,1,6,9};
    sortArray(arr, 5);

    for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}