// reversing a string using recursion

#include<iostream>
#include<string>
using namespace std;

void rev(string &str, int i, int j) {
    cout<< "call recieved for "<<str<<endl;
    
    // base case
    if(i>j) {
        return ;
    }

    swap(str[i], str[j]);       // ek case solve kardo
    i++;
    j--;
 
    // baaki ke liye
    // recursive call mardo
    rev(str, i, j);
}

int main() {
    string name = "omkar";

    rev(name, 0, name.length()-1);

    cout<<name<<endl;

    return 0;
}

// optimize the code using a single pointer instead of two pointers i and j
// i ko reuse kardo -> n-i-1
