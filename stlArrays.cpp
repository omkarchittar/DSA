#include<iostream>
#include<array>

int main() {
    std::array<int,4> a = {1,2,3,4};     // fixed size static array  we dont use this when we want variable size

    int size = a.size();

    for(int i=0; i<size;i++) {
        std::cout<<a[i]<<std::endl;
    }

    std::cout<<"Element at second index :"<<a.at(2)<<std::endl;     //  to access elements directly

    std::cout<<"Empty or not : "<<a.empty()<<std::endl;     //  returns a boolean value

    std::cout<<"Front element: "<<a.front()<<std::endl;
    std::cout<<"last element: "<<a.back()<<std::endl;
}