#include<iostream>

void print(int n) {

    // base case
    if(n == 0) {
        return ;
    }

    // Recursive Relation
    print(n-1);
    std::cout<< n <<std::endl;
}

int main() {
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;
    std::cout<<std::endl;
    print(n);

    return 0;
}