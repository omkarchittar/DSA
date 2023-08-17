//  MODULO OPERATOR

// to prevent overflow

// (a +/- b) % m = a%m +/- b%m
// a%m * b%m = (a*b)%m

// fast exponentiation
//  

// you are given three integers x, n and m
// task is to find (x^n)%m

#include<iostream>

int modularExponentiation(int x, int n, int m) {
    int result = 1;

    while(n>0) {
        if(n&1) {
            //odd
            result = (1LL * (result) * (x)%m)%m;
        }
        x = (1LL* (x)%m * (x)%m)%m;
        n = n>>1;       // divides by 2
    }
    return result;
}

int main() {

}
