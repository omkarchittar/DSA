// Print like a wave

/*  input:
    1   2   3
    4   5   6
    7   8   9
    
    output:
    1   4   7   8   5   2   3   6   9   
*/

// play with column ka index
// column ka INDEX (not number) is odd -> bottom se top jaao
// column ka INDEX (not number) is even -> top se bottom jaao

// In the given code, `if (col & 1)` is a condition that checks whether the value of the variable `col` is odd or even using bitwise AND (`&`) operation.

// In C++, when you perform the bitwise AND operation on two integers, 
// it evaluates each corresponding bit of the two numbers and sets the corresponding bit in the result to 1 if both bits are 1; 
// otherwise, it sets it to 0.

// Let's see how this condition works in more detail:

// - `col` is an integer representing the column index in a 2D array.
// - `col & 1` performs a bitwise AND operation between `col` and `1`.

// Since `1` is represented in binary as `0001`, the bitwise AND with `col` will yield `0` for even columns and `1` for odd columns. 
// This is because if the least significant bit (rightmost bit) of `col` is `1`, then the result of the bitwise AND will be `1`; otherwise, it will be `0`.

// Therefore, the condition `if (col & 1)` evaluates to `true` when the column index is odd and `false` when it is even. 
// The code uses this condition to determine whether to traverse the elements of a specific column from top to bottom (for even columns) or from bottom to top (for odd columns) in the 2D array.

// For example, when `col` is `0` (even), `col & 1` is `0`, so the loop will traverse the column from top to bottom. 
// When `col` is `1` (odd), `col & 1` is `1`, so the loop will traverse the column from bottom to top. 
// This creates the "wave" pattern in the `wavePrint` function, where the elements of the 2D array are printed in an alternating direction 
// based on the column index.

//  time - O(n x m)
// n = rows; m = columns

#include<iostream>
#include<vector>

std::vector<int> wavePrint(std::vector<std::vector<int>> arr, int nRows, int mCols) {
    std::vector<int> ans;
    for(int col = 0; col<mCols; col++) {
    
        // odd index -> bottom to top;
        if( col&1 ) {
            for(int row = nRows-1 /*imp*/; row>=0; row--) {
                // std::cout<< arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }

        // even index -> top to bottom
        else {
            for(int row = 0; row<nRows; row++) {
                // std::cout<< arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
    std::vector<std::vector<int>> v {{1,2,3},{4,5,6},{7,8,9}};
    std::vector<int> ans;

    ans = wavePrint(v, 3, 3);

    for(int i = 0; i<9; i++) {
        std::cout<<ans[i]<<" ";
    }
    std::cout<<std::endl;
}



// The wavePrint function in your code is trying to print the elements of a 2D vector arr in a "wave" pattern. 
// The function is almost correct, but there's an issue with how you are pushing elements to the ans vector. 
// You should be pushing the elements as vectors of single elements, not individual elements. 
// Here's the corrected version of the wavePrint function:

// cpp
// Copy code
// #include<iostream>
// #include<vector>

// std::vector<std::vector<int>> wavePrint(std::vector<std::vector<int>> arr, int nRows, int mCols) {

//     std::vector<std::vector<int>> ans(nRows * mCols, std::vector<int>(1));

//     int index = 0;
//     for(int col = 0; col < mCols; col++) {

//         // odd index -> bottom to top;
//         if( col & 1 ) {
//             for(int row = nRows - 1; row >= 0; row--) {
//                 ans[index++][0] = arr[row][col];
//             }
//         }
//         // even index -> top to bottom
//         else {
//             for(int row = 0; row < nRows; row++) {
//                 ans[index++][0] = arr[row][col];
//             }
//         }
//     }
//     return ans;
// }

// int main() {
//     std::vector<std::vector<int>> v {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     std::vector<std::vector<int>> ans;

//     ans = wavePrint(v, 3, 3);

//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 1; j++) {
//             std::cout << ans[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
// In this corrected version, the ans vector is initialized with nRows * mCols vectors, 
// each containing a single element (hence std::vector<int>(1)). 
// Then, the elements are properly assigned to ans using the index variable. 
// The result will be printed in a single column as the function returns a 2D vector with a single element in each row.




// --------------------------------------------------------------------------------------------------
// can you write using the push_back() function

// #include <iostream>
// #include <vector>

// std::vector<std::vector<int>> wavePrint(std::vector<std::vector<int>> arr, int nRows, int mCols) {
//     std::vector<std::vector<int>> ans;

//     for (int col = 0; col < mCols; col++) {
//         // Odd index -> bottom to top
//         if (col & 1) {
//             std::vector<int> column;
//             for (int row = nRows - 1; row >= 0; row--) {
//                 column.push_back(arr[row][col]);
//             }
//             ans.push_back(column);
//         } else {
//             // Even index -> top to bottom
//             std::vector<int> column;
//             for (int row = 0; row < nRows; row++) {
//                 column.push_back(arr[row][col]);
//             }
//             ans.push_back(column);
//         }
//     }
//     return ans;
// }

// int main() {
//     std::vector<std::vector<int>> v {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     std::vector<std::vector<int>> ans;

//     ans = wavePrint(v, 3, 3);

//     for (int i = 0; i < ans.size(); i++) {
//         for (int j = 0; j < ans[i].size(); j++) {
//             std::cout << ans[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
// In this version, we create temporary std::vector<int> columns for each column of the ans vector, 
// then use push_back to add elements to each of these columns, and finally push each of these columns to the ans vector. 
// The result will still be printed in a single column, but now we use push_back to construct the vector.