// check if a given array is Sorted And rotated
// Three cases:
    // case 1: Sorted array (Not rotates) -> exactly one CYCLIC pair exists such that (nums[i-1] > nums[i])
    // case 2: Sorted and Rotated -> one CYCLIC pair exists such that (nums[i-1] > nums[i])
    // case 3: Not Sorted -> multple pairs

    // case 4: all elements are same -> returbn count <= 1

#include<iostream>
#include<vector>

bool check(std::vector<int> &nums) {
    int count = 0;
    int n = nums.size();

    for(int i = 0; i<n; i++) {
        if(nums[i-1] > nums[i]) {
            count++;
        }
    }

    // last element ko pehle waale element se compare karne waali condition
    if(nums[n-1] > nums[0]) {
        count++;
    }

    return count <= 1;  // agar count 0 ya 1 hai toh true bhej do 
}

int main() {
    std::vector<int> v {1, 2, 3, 4, 5};

    std::cout<<check(v)<<std::endl;
}