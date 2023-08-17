// Dynamic array : when we need an array w variable size
//                  when memory gets full, it doubles its size

// shrinktofit operation ka use karke hum uski size ko ghata bhi sakte hai
#include<iostream>
#include<vector>

int main() {
    
    // std::vector<int> vec;
    //agar size pata ho 
    std::vector<int> a(5,1);    // vector with size&capacity 5 with each element being 1
    std::cout<<"a ko print kardo: "<<std::endl;
    for(int i : a) {
        std::cout<<i<<" ";
    }

    std::cout<<std::endl;

    // agar vec ke anadar a ko copy karna hai
    std::vector<int> vec(a);

    //agar size pata na ho
    std::vector<int> v;
    std::cout<<"Capacity -> "<<v.capacity()<<std::endl;

    v.push_back(1);     // adds element to the end of the vector
    std::cout<<"Capacity -> "<<v.capacity()<<std::endl;

    v.push_back(2);
    std::cout<<"Capacity -> "<<v.capacity()<<std::endl;

    v.push_back(3);
    std::cout<<"Capacity -> "<<v.capacity()<<std::endl;

    // size batata hai kitne element pade hai (number of elements in a vector)
    // capacity batata hai elements ke liye kitna space allocate hua hai (actual size of the vector/ memory space allocated)
    // capaticty doubles when more memory is needed to add an element

    std::cout<<"Size -> "<<v.size()<<std::endl;

    // other operations similar to that of stl arrays

    std::cout<<"Element at 2nd Index -> "<<v.at(2)<<std::endl;

    std::cout<<"front -> "<<v.front()<<std::endl;
    std::cout<<"last -> "<<v.back()<<std::endl;

    std::cout<<"before pop"<<std::endl;
    for(int i : v) {
        std::cout<<i<<" ";
    }
    v.pop_back();
    std::cout<<"after pop"<<std::endl;
    for(int i : v) {
        std::cout<<i<<" "<<std::endl;
    }

    // whenever we use clear operation on a vector -> uski size zero ho jaati hai, capacity nahi
    std::cout<<"before clear size and capacity "<<v.size()<<" "<<v.capacity()<<std::endl;
    v.clear();
    std::cout<<"after clear size and capacity "<<v.size()<<" "<<v.capacity()<<std::endl;

    // iterators v.begin

}
