// subsequences of a string

// same approah as subsets

// include-exclude

// only difference being it does not need the empty subsequence

#include<iostream>
#include<string>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // base case
    if(index >= str.length()) {
        if(output.length() > 0) {
            ans.push_back(output);
        }
        return ;
    }

    //exclude
    solve(str, output, index+1, ans);

    //include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main() {
    string v{"abc"};
    vector<string> ans{};

    ans = subsequences(v);

    // Print the subsets as sets of sets
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            std::cout << ans[i][j];
        }
        if (i < ans.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout<<std::endl;

    return 0;
}