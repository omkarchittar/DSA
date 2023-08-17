// Sum of arrays
// ** addition is always done from the back
// array ke loops humesh end se lagayenge
// Three cases
    // case 1: arr1 >>>> arr2
    // case 2: arr2 >>>> arr1
    // case 3: sum = sum % 10         carry = sum/10    

#include<iostream>
#include<vector>

std::vector<int> reverse(std::vector<int>& v) {
    int s = 0;
    int e = v.size() - 1;

    while(s<e) {
        std::swap(v[s++], v[e--]);
    }
    return v;
}

std::vector<int> findArraySum(std::vector<int>&a, int n, std::vector<int>&b, int m) {
    int i = n-1;
    int j = m-1;
    std::vector<int> ans;
    int carry = 0;

    // BASIC
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    // first case
    while(i>0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;        
    }

    // third case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    ans = reverse(ans);
    return ans;
}

void print(std::vector<int>&a) {
    for(int i:a) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> a{1,2,3,4};
    std::vector<int> b{2,3};

    int n = a.size(), m = b.size(); 

    std::vector<int> result = findArraySum(a, n, b, m);
    print(result);  // Added print statement to display the result
    return 0;
}