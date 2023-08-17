// Bubble Sort
/*  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
    This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

    In this algorithm, 
    - traverse from left and compare adjacent elements and the higher one is placed at right side. 
    - In this way, the largest element is moved to the rightmost end at first. 
    - This process is then continued to find the second largest and place it and so on until the data is sorted.

    every ith round me ith largest element ko uske right placeme pohocha dete hai
*/

// time complexity: O(n^2)
// Auxiliary Space: O(1)

#include<iostream>
using namespace std;

vector<int> bubbleSort(vector<int>& arr, int n) {
    bool swapped = false;
    for(int i = 1; i<arr.size(); i++) { // fo rrounf 1 to n-1
        for (int j = 0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
    return arr;
}
// OPTIMIZATION: a round where there are no swaps you need to break out of the loop
// thereby making the best case complexity O(n) from O(n^2)

int main() {
    vector<int> arr {10, 1, 7, 6, 14, 9};
    vector<int> v;

    v = bubbleSort(arr, arr.size());

    for(int i : v) {
        cout<<i<<", ";
    }
}

/* 
Advantages of Bubble Sort:
Bubble sort is easy to understand and implement.
It does not require any additional memory space.
It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.
Disadvantages of Bubble Sort:
Bubble sort has a time complexity of O(N2) which makes it very slow for large data sets.
Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.
Some FAQs related to Bubble Sort:
What is the Boundary Case for Bubble sort? 
Bubble sort takes minimum time (Order of n) when elements are already sorted. Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.

Does sorting happen in place in Bubble sort?
Yes, Bubble sort performs the swapping of adjacent pairs without the use of any major data structure. Hence Bubble sort algorithm is an in-place algorithm.

Is the Bubble sort algorithm stable?
Yes, the bubble sort algorithm is stable.

Where is the Bubble sort algorithm used?
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. In computer graphics, it is popular for its capability to detect a tiny error (like a swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). 

Example: It is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate at a specific scan line (a line parallel to the x-axis), and with incrementing y their order changes (two elements are swapped) only at intersections of two lines (Source: Wikipedia)

*/