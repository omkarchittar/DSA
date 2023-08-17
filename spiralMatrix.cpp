// spiral matrix

/*  input:
    1   2   3
    4   5   6
    7   8   9
    
    output:
    1   2   3   6   9   8   7   4   5
*/

/*  Approach:   
    1. starting row print karo (startingRow++)
    2. ending column print kardo (endingCol--)
    3. ending row print kardo (endingRow--)
    4. starting column print karlo (startingCol++)
*/

// time - O(n x m)
// n - rows; m - columns

#include<iostream>
#include<vector>

std::vector<int> spiralPrint(std::vector<std::vector<int>>& matrix) {
    std::vector<int> ans;
    
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count<total) {

        // 1. print startingRow
        for(int index = startingCol; count<total && index<=endingCol; index++) { //important hai ye check karna kahi count total ke aage na badh jaaye inside loop
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // 2. print endingCol
        for(int index = startingRow; count<total && index<=endingRow; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // 3. print endingRow
        for(int index = endingCol; count<total && index>=startingCol; index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // 4. print startingCol
        for(int index = endingRow; count<total && index>=startingRow; index--) {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main() {
    std::vector<std::vector<int>> v {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    std::vector<int> ans;

    ans = spiralPrint(v);

    for(int i = 0; i<25; i++) {
        std::cout<<ans[i] <<" ";
    }
    std::cout<<std::endl;
}