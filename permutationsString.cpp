// permutations of a string

// given a string
// i/p -> "abcd"
// o/p -> all possible permutations

#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    // base case
    // agar index nums ke size ke aage nikal jaaye 
    if(index >= nums.size()) {
        ans.push_back(nums);
        return ;
    }

    for(int j=index; j<nums.size(); j++) {
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        // backtrack
        swap(nums[index], nums[j]); // previous swap ko nullify karna taaki original string vaisi hi rahe
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {
    vector<vector<int>> ans {};
    vector<int> nums {1,2,3};

    ans = permute(nums);

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<nums.size(); j++) {
            cout<<ans[i][j];
        }
        cout<<" ";
    }
    cout<<endl;

    return 0;
}