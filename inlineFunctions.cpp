// Inline Functions are used to reduce the function calls overhead

#include<iostream>


inline int getMax(int& a, int& b) {
    return (a>b) ? a:b;
}

int main() {
    int a=1, b=2;
    int ans = 0;
    ans = getMax(a,b);

    std::cout<< ans <<std::endl;

    a += 3;
    b += 1;

    ans = getMax(a,b);

    std::cout<< ans <<std::endl;

    return 0;

}