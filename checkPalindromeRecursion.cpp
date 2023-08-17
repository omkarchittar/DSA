// string = reverse string

#include<iostream>
using namespace std;

bool checkPalindrome( string str, int i, int j) {
    // base case
    if(i>j)
        return true;

    // ek case solve kardo
    if(str[i] != str[j]) {
        return false;
    }

    // baaki recursion sambhaal lega
    else {
        return checkPalindrome(str, i+1, j-1);
    }
}

int main() {

    string name = "omkar";

    cout<<checkPalindrome(name, 0, name.length()-1)<<endl;

    return 0;
}

// homework - make use of a single pointer -> n-i-1