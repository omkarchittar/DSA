// Rotate array
// Given an array, rotate the array to the right by k steps where k is non-negative.
// cyclic rotation using the property of '%'
// input % n -> range(0,n-1)

#include<iostream>
#include<vector>

std::vector<int> rotate(std::vector<int>& nums, int k) {
    
    int n = nums.size();
    std::vector<int> temp(n);       // dont try to makes changes in the main array : make a new array to store the rotated elements

    for(int i = 0; i<n; i++) {
        temp[(i+k)%n] = nums[i];
    }

    return temp;
}

void print(std::vector<int> arr) {
    for (int i:arr) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> a {1,2,3,4,5,6,7};
    int k = 3;
    std::vector<int> b;
    
    b = rotate(a, k);

    print(b);

}