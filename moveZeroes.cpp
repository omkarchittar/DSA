// move zeroes
// trying to shift all the non-zero values to the left
#include<iostream>
#include<vector>

std::vector<int> moveZeroes(std::vector<int>& nums) {
    int nonZero = 0;

    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] != 0) {
            std::swap(nums[i], nums[nonZero]);
            nonZero++;
        }
    }
    return nums;
}

void print(std::vector<int> &v) {
    for(int i:v) {
        std::cout<< i << " ";
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> arr {0, 1, 0, 3, 12};
    std::vector<int> moved(5);

    moved = moveZeroes(arr);

    print(moved);
}

