// Selection sort
// what? multpile rounds/passes -> check for smallest element and place in the right place
// time complexity: O(n^2)
// space complexity: constant = O(1)

// best acse complexity : O(n^2)
// worst case complexity : O(n^2)

// when to us? whenever the array/vector size is small/ memory constraints 

// please draw flowcharts of learned concepts 

// Is selection sort stable?

#include<iostream>
using namespace std;

vector<int> selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i<n-1; i++) {   // dont consider last position cos already sorted
        int minIndex = i;

        for(int j=i+1; j<n; j++) {      // consider elements which come after the current position
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    return arr;
}

int main(){
    vector<int> arr {7, 9, 2, 1, 3, 0};
    vector<int> sorted = selectionSort(arr, arr.size());

    for (int i : sorted) {
        cout<<i<<", ";
    }
}

// int main() {
//     int arr[] = {1, 7, 9, 2, 3, 0};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int temp = 0;

//     for(int i = 0; i<size; i++) {  // iterating through the positions
//         for(int j = i+1; j<size; j++) {  // itereting through the elements
//             if(arr[i]>arr[j]) {     // checking for minimum element by comapring element at a position and elements after that 
//                 // swapping the elements
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     cout<<"sorted array is: ";
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<", ";
//     }
// }

/* Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element 
   from the unsorted portion of the list and moving it to the sorted portion of the list. 
   
   The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. 
   This process is repeated for the remaining unsorted portion until the entire list is sorted. 
   
   
   Complexity Analysis of Selection Sort
Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. The selection sort never makes more than O(N) swaps and can be useful when memory writing is costly. 

Advantages of Selection Sort Algorithm
Simple and easy to understand.
Works well with small datasets.
Disadvantages of the Selection Sort Algorithm
Selection sort has a time complexity of O(n^2) in the worst and average case.
Does not work well on large datasets.
Does not preserve the relative order of items with equal keys which means it is not stable.
Frequently Asked Questions on Selection Sort
Q1. Is Selection Sort Algorithm stable?

The default implementation of the Selection Sort Algorithm is not stable. However, it can be made stable. Please see the stable Selection Sort for details.

Q2. Is Selection Sort Algorithm in-place?

Yes, Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.

*/