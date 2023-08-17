// Quicksort - 1. Partition kardo
            // 2. Recursion se sort kardena

// take a pivot
// count number of elements less than the pivot
// place the pivot at s + count

// | <a | a | >a |

// <a waale part par quicksort lagaado
// >a waale part par quiclsort lagaado

// time -> O(nlogn)
        // average case -> O(nlogn)
        // best case -> O(nlogn)
        // worst case -> O(n^2)
        // n -> size of array
// space -> O(n)

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivot) {
            cnt++;
        }
    }

    // place pivot in the right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right waala part sambhal lete hai
    int i=s, j=e;

    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    // base case
    if(s >= e) {
        return ;
    }

    //partition karenge
    // response me hume ek endex milega
    int p = partition(arr, s, e);

    // left part sort kardo
    quickSort(arr, s, p-1);

    //right waala part sort kardo
    quickSort(arr, p+1, e); 
}

int main() {
    int arr[8] = {2,4,1,6,9,0,-1,-2};
    int n = 8;

    quickSort(arr, 0, n-1);

    for(int i = 0; i<n; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;

    return 0;
}

// check if inplace
// check if stable
// why do we prefer quicksort over mergesort for sorting arrays
// why mergesort over quicksort for linkedlist
