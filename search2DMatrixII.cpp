// search 2d matrix II

// integers in each row are sorted in ascending order from left to right
// integers in each column are sorted in ascending order from top to bottom

// CASES:
//  Case 1: arr[mid] == target -> return ans;
//  Case 2: arr[mid] < target -> row++;
//  Case 3: arr[mid] > target -> col--; 

#include<iostream>
#include<vector>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    // int start = 0;
    // int end = row*col - 1;               // ye hum nahi kar sakte kyuki linear form me agar aap dekho toh matrix sorted nahi hai
    // int mid = start + (end-start)/2; 
    
    // Therefore -> Isilie
    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex>=0) {
        int element = matrix[rowIndex][colIndex];

        if(element == target) {
            return 1;
        }

        if(element < target) {
            rowIndex++;
        }
        else {
            colIndex--;
        }
    }
    return 0;
}

int main() {
    std::vector<std::vector<int>> v{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target;

    std::cout<<"Enter target: ";
    std::cin>>target;

    if(searchMatrix(v, target)) {
        std::cout<<"Element found!"<<std::endl;
    }
    else {
        std::cout<<"Not found :("<<std::endl;
    }
}