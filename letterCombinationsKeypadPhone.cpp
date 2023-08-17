// letter combinations of a phone number -> VERY IMPORTANT

// input me ek string dii hogi numbers ke form me (0-9)
// agar is string ko mai keypad waale phone me daalta toh kya possible combinations of letters mujhe milte

// i/p -> "34"
// o/p -> dg dh di eg eh ei fg fh fi

#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;

void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
    // base case
    if(index >= digit.length()) {
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i=0; i<value.length(); i++) {
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if(digits.length()==0) {
        return ans;
    }
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    return ans;
}

int main() {
    string str = "";
    vector<string> ans = {};
    cout<<"Enter a string of numbers: ";
    cin>>str;

    ans = letterCombinations(str);

    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}