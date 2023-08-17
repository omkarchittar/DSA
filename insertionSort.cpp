// Insertion sort
// remember using card example
/* example you have 4 cards which you have to arrange in ascendiing order 
    insertion sort me hum swap nahi kar rahe hai, shift kar rahe hai

    Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
    The array is virtually split into a sorted and an unsorted part. 
    Values from the unsorted part are picked and placed at the correct position in the sorted part.

    To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, 
    if the key element is smaller than its predecessor, compare it to the elements before. 
    Move the greater elements one position up to make space for the swapped element.
    
    Time Complexity: O(N^2) 
    Auxiliary Space: O(1)

    Complexity Analysis of Insertion Sort:
    Time Complexity of Insertion Sort
    The worst-case time complexity of the Insertion sort is O(N^2)
    The average case time complexity of the Insertion sort is O(N^2)
    The time complexity of the best case is O(N).
    Space Complexity of Insertion Sort
    The auxiliary space complexity of Insertion Sort is O(1)
*/

#include<iostream>
using namespace std;

vector<int> insertionSort(vector<int>& arr, int n) {
    for(int i = 1; i<n ; i++) {
        int temp = arr[i];
        int j = i-1;
        for(/* writing this outside int j = i-1*/; j>=0; j--) {
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { 
                //ruk jao
                break;
            }
        }
        arr[j+1] = temp; // but scope of j is only till above for loops end
    }
    return arr;
}

int main() {
    vector<int> arr {10, 1, 7, 4, 8, 2, 11};
    vector<int> v;

    v = insertionSort(arr, arr.size());

    for(int i : v) {
        cout<< i <<", ";
    }
}

// HW: write using while loop

// Characteristics of Insertion Sort
// This algorithm is one of the simplest algorithms with a simple implementation
// Basically, Insertion sort is efficient for small data values
// Insertion sort is adaptive in nature, i.e. it is appropriate for data sets that are already partially sorted.
// Frequently Asked Questions on Insertion Sort
// Q1. What are the Boundary Cases of the Insertion Sort algorithm?

// Insertion sort takes the maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted. 

// Q2. What is the Algorithmic Paradigm of the Insertion Sort algorithm?

// The Insertion Sort algorithm follows an incremental approach.

// Q3. Is Insertion Sort an in-place sorting algorithm?

// Yes, insertion sort is an in-place sorting algorithm.

// Q4. Is Insertion Sort a stable algorithm?

// Yes, insertion sort is a stable sorting algorithm.

// Q5. When is the Insertion Sort algorithm used?

// Insertion sort is used when number of elements is small. It can also be useful when the input array is almost sorted, and only a few elements are misplaced in a complete big array.


// C++ program for insertion sort
// -------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// // Function to sort an array using
// // insertion sort
// void insertionSort(int arr[], int n)
// {
// 	int i, key, j;
// 	for (i = 1; i < n; i++) {
// 		key = arr[i];
// 		j = i - 1;

// 		// Move elements of arr[0..i-1],
// 		// that are greater than key,
// 		// to one position ahead of their
// 		// current position
// 		while (j >= 0 && arr[j] > key) {
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }

// // A utility function to print an array
// // of size n
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 12, 11, 13, 5, 6 };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, N);
// 	printArray(arr, N);

// 	return 0;
// }
// // This is code is contributed by rathbhupendra
