// & - address of Operator
// pointer stores the address
// * - dereference Operator

#include<iostream>

int main() {
    int num = 5;
    int *ptr = &num;        // syntax for creating a pointer
                            // ptr is a pointer to an integer

    std::cout<< "Value of num is: "<<num <<std::endl;
    std::cout<< "Address of num is: "<< ptr <<std::endl;

    ptr++;

    std::cout<<"New value that ptr is pointing to: "<< *ptr<<std::endl;
    std::cout<<"Address of the pointer is: "<<&ptr<<std::endl;

    ptr--;  // reverting to the previous memory loc

    std::cout<< *ptr <<std::endl;
    (*ptr)++;
    std::cout<< *ptr <<std::endl;

    char ch = 'a';
    char *p = &ch;  // p is a pointer to a character

    std::cout<< *p <<std::endl;

    std::cout<<sizeof(num) <<std::endl;
    std::cout<<sizeof(ptr) <<std::endl;         // address is of size 8 bytes in all cases

    // int *ptr1 = 0;
    // std::cout<< *ptr1 <<std::endl;      //  segmentation fault

    int i = 5;
    int *ptr1 = 0;
    ptr1 = &i;
    std::cout<< *ptr1 <<std::endl;

}