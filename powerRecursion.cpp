// power using Recursion

#include<iostream>
using namespace std;

int pow(int base, int index) {
    // base case
    if(index == 0) {
        return 1;
    }
    if(index == 1) {
        return base;
    }

    // recursive call
    int ans = pow(base, index/2);

    // if index is even
    if(index%2 == 0) {
        return ans*ans;
    }
    else {// if index is odd
        return base * ans * ans;
    }

}

int main() {
    int base, index;

    cout<<"Enter the base: ";
    cin>>base;
    // cout<<endl;
    cout<<"Enter the index: ";
    cin>>index;

    cout<<"Answer is: "<<pow(base, index)<<endl;
    return 0;
}