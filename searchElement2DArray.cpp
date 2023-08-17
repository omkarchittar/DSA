// Search an element in a 2D array
// read why it is important to specify the no. of col while passing an array to a function

// time - O(row x column)
// O(n^2) for a square matrix

//  LINEAR SEARCH

#include<iostream>
#include<array>

// while passing an array you should atleast specify the no of columns
bool isPresent(const std::array<std::array<int, 3>, 4>& arr, int target) {
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }    
    return 0;
}

int main() {
    int target, row, col;
    // 2Darray with 4 rows and 3 columns
    // std::array<std::array<int, 3>, 4> arr = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}};  

    std::array<std::array<int, 3>, 4> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"Enter the target element: ";
    std::cin>>target;

    if(isPresent(arr, target)) {
        std::cout<<"The target element is present in the array!"<<std::endl;
    }
    else {
        std::cout<<"Nahie bhai!"<<std::endl;
    }
    return 0;
}
