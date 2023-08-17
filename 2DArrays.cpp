// 2D arrays

// mapping a 2D array to a 1D array   
// memory me iss prakar se store hoga   |   |   |   |   |   |   |   |   |   |
// mathematica formula -> c*i + j (i-row j-column)
// (c x row) + column  (c - total number of columns)

#include<iostream>
#include<array>

int main() {

    // 2Darray with 4 rows and 3 columns
    // std::array<std::array<int, 3>, 4> arr = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}};  

    std::array<std::array<int, 3>, 4> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout<<std::endl;
    }

    std::cout<<"Enter the new elements of the array: ";
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout<<std::endl;
    std::cout<<"The new matrix is: "<<std::endl;
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout<<std::endl;
    }

}
