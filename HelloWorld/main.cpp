#include <iostream>

int main()
{
    for(int i = 1; i<=5; i++) {
        for (int j = 5; j>=i; j--) {
            std::cout<<" ";
        }
        for (int j = 1; j<=i; j++) {
            std::cout<<" *";
        }
        std::cout<<std::endl;
    }

    for(int i = 1; i<=5; i++) {
        for (int j = 0; j<=i; j++) {
            std::cout<<" ";
        }
        for (int j = 4; j>=i; j--) {
            std::cout<<" *";
        }
        std::cout<<std::endl;
    }
    // std::cout << "Hello Rohan!" <<std::endl;
    // std::cin.get();
}
