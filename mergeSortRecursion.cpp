// merge sort using Recursion -> fastest amongst the sorting algorithms

// count inversion is a type of question asked in interviews 

// input me arrray diya hoga usko sort karna hai

// array ko do parts me divide kar lena hai
// mid = s + e/2
// repeatedly divide the array into further parts till you are left with single blocks 
// combine two adjacent blocks at a time whilst sorting them 

// two approaches -> 
// 1. create new arrays and copy values
// 2. play with indices (s, e)

// space - O(n)
// time - O(nlogn)
// read geeks4geeks
#include<iostream>
#include<array>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2]; 

    // copy values
    int mainArrayIndex = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
        // mainArrayIndex++;
    }

    mainArrayIndex = mid+1;
    for(int i = 0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
        // mainArrayIndex++;
    }

    //REFER TO MERGE TWO SORTED ARRAYS
    //merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++]; 
        }
        else {
            arr[mainArrayIndex++] = second[index2++]; 
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int* arr, int s, int e) {
    //base case
    if(s >= e) {
        return ;
    }
    // cout<<"hi";
    int mid = s + (e - s)/2;

    // left part sort karna hai
    mergeSort(arr, s, mid);

    // right part sort karna hai
    mergeSort(arr, mid+1, e);

    merge(arr, s, e); 
}

int main() {
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0; 
}