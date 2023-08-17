// BINARY SEARCH IN A 2D MATRIX

// SEARCH IN A 2D MATRIX    (sorted - all integers are sorted row wise 
                        //   first integer of current row is greater than the last integer of the previous row)

/*  1   3   5   7
    10  11  16  20
    23  30  34  60
    
    linear form : 1   3   5   7   10  11  16  20  23  30  34  60
    
    start = 0 
    end = row * col -1
    
*/

/*  finding where an element lies in the matrix memory (row x col)
    Divide the linear location(index) by the TOTAL NUMBER OF COLUMNS which is 4 in this case to get the row index
    Modulo operate the linear index by the TOTAL NUMBER OF COLUMNS which is 4 in this case to get the column index

    e.g 60 is at index 11 in the linear array
    .'. 11/4 = 2 is its row index   
    .'. 11%4 = 3 is its col index
*/

/* time - O(log n)
    where n = size of the linear form 
            = row*col 
    .'. time = O(log(row*col))
*/

#include<iostream>
#include<vector>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col - 1;
    int mid = start + (end-start)/2;

    while (start<=end) {
        int element = matrix[mid/col][mid%col];
 
        if(element == target) {
            return 1;
        }
        
        if(element < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}

int main() {
    std::vector<std::vector<int>> v {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target;

    std::cout<<"Enter the element you want to search: ";
    std::cin>>target;

    if(searchMatrix(v, target)) {
        std::cout<<"The Element was found!"<<std::endl;
    }
    else {
        std::cout<<"Error!"<<std::endl;
    }
}