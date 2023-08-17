// given an integer array - return its power set (set of all subsets)

// include-exclude waali game

// input array, output array, index

#include<iostream>
#include<vector>
#include<array>

void solve(std::vector<int> nums, std::vector<int> output, int index, std::vector<std::vector<int>>& ans) {
    // base case - iska matlab tum last tak pohoch chuke ho
    if(index >= nums.size()) {
        ans.push_back(output);
        return ;
    }
    
    // exclude 
    solve(nums, output, index+1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    std::vector<std::vector<int>> ans;
    std::vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main() {
    std::vector<int> v{1,2,3};
    std::vector<std::vector<int>> ans{};

    ans = subsets(v);

    // Print the subsets as sets of sets
    std::cout << "{";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << "{";
        for (int j = 0; j < ans[i].size(); j++) {
            std::cout << ans[i][j];
            if (j < ans[i].size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}";
        if (i < ans.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}";

    std::cout<<std::endl;

    return 0;
}