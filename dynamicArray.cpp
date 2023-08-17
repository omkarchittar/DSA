// DYNAMIC MEMORY ALLOCATION

// Reference variable

// heap memory is a variable size memory unlike stack
// use the keyword 'new' while allocating memory on the heap
// this is called as dynamic memory allocation

// allocating memory on the stack is called static memory allocation

// heap ke memory ko hum naam nahi de sakte
// "new char" returns a memory location
// to access this memory location/ to perform operations on this memory loc we make use of the pointer
//  char* ch = new char;        // the pointer ch is pointing to the newly created memory on the heap

// the pointer is always created on the stack

// .'. stack -> heap

// pointer always takes 8 bytes of the memory

// creating an array on the heap - int* arr = new int[5];

// it is bad practice to create a array on the stack and to take the size of th earray as a user input
// the solution to this problem or rather to dynamically allocate an array during runtime (to take its size as an input from the user)

#include<iostream>
#include<array>

int getSum (int* arr, int n) {

    int sum = 0;
    for( int i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    std::cout<<"Enter the size of the array: ";
    std::cin>>n;

    // variable size array
    int* arr = new int[n];

    // takin input n in array
    std::cout<<"Enter the elements of the array: "<<std::endl;
    for(int i = 0; i<n; i++) {
        std::cin >> arr[i];         // we could write this because -> arr[i] = *(arr + i)
    }

    int ans = getSum(arr, n);

    std::cout<<"Answer is: "<< ans<<std::endl;

    delete []arr;
    return 0;
}

// difference between static and dynamic array
// memory release happens automatically in static allocation
// it doesn't happen in dynamic memory allocation
// to tackle this problem we use the keyword 'delele'

// int* i = new int;
// delete i;

// int* arr = new int[50];
// delete []arr;