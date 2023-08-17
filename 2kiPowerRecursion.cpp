#include<iostream>

int power(int n) {

    //base case
    if(n==0) {
        return 1;
    }

    // recursive relation
    // int smallerProblem = power(n-1);
    // int biggerProblem = 2 * smallerProblem;

    // return biggerProblem;

    return 2 * power(n-1);
}

int main() {

    int n; 
    std::cout<<"Enter a power: ";
    std::cin>>n;

    int ans = power(n);

    std::cout<< ans <<std::endl;
}