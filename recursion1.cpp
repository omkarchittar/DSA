// Recursion - When a function calls itself

// badi problem ka solution depend karta hai ek same type ki chhoti problem par tab hum recursion use karenge

// factorial using recursion

// It is important to have a recursive relation

// jis condition pe aap rukne ki baat karte ho use hum base case kehte hai

// agar humne prog ko roka nahi then it will continue changing the value till the function call stack overflows and we might end up having a segmentation fault

// base case me return karna mandetory hai

#include<iostream>

int fact(int n) {

    // base case
    if(n == 0) {
        return 1;
    }
    // int chhoti = fact(n-1);
    // int badi = n * chhoti;

    // return badi;

    return n * fact(n-1);
}

int main() {
    int n, ans = 0;

    std::cout<<"Enter the number whose factorial you want to find: ";
    std::cin>>n;

    ans = fact(n);

    std::cout<<"The factorial of "<< n <<" is "<< ans <<std::endl;

    return 0;
}