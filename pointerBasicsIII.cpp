// double pointers

#include<iostream>
#include<array>

void update(int **p) {
    // p = p + 1;
    // kuch change hoga? - NO

    // *p = *p + 1;
    // kuch change hoga? - YES

    **p = **p + 1;
    // kuch change hoga? - YES

}

int main() {
    int i = 5;
    int* ptr = &i;

    int** p = &ptr;     // double pointer

    // std::cout<<"i: "<<i<<std::endl;
    // std::cout<<"&i: "<<&i<<std::endl;
    // std::cout<<"ptr: "<<ptr<<std::endl;
    // std::cout<<"*ptr: "<<*ptr<<std::endl;
    // std::cout<<"&ptr: "<<&ptr<<std::endl;
    // std::cout<<"p: "<<p<<std::endl;
    // std::cout<<"*p: "<<*p<<std::endl;
    // std::cout<<"&p: "<<&p<<std::endl;
    // std::cout<<"**p: "<<**p<<std::endl;

    std::cout<<"\n\n";
    std::cout<<"before: "<<i<<std::endl;
    std::cout<<"before: "<<ptr<<std::endl;
    std::cout<<"before: "<<p<<std::endl;
    update(p);
    std::cout<<"after: "<<i<<std::endl;
    std::cout<<"after: "<<ptr<<std::endl;
    std::cout<<"after: "<<p<<std::endl;
    std::cout<<"\n\n";

    return 0;
}