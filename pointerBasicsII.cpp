// This code does not work
#include<iostream>
#include<array>
using namespace std;

int main() {
    array<int , 10> arr {23, 122, 41, 67, 1, 2, 3, 4, 5, 6};

    cout<<"Address of the first memory block is: " << arr <<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of the first memory block is: " << &arr[0] <<endl;

    cout<<"4th "<< *arr<< endl;
    cout<<"5th "<< *arr+1 << endl;
    cout<<"6th "<< *(arr + 1) << endl;
    cout<<"7th "<< *(arr) + 1 << endl;
    cout<<"8th "<< arr[2] <<endl;
    cout<<"9th "<< *(arr+2) <<endl;

    int i = 3;
    cout<< i[arr] <<endl;

    return 0;
}

// int main() {
//     std::array<int , 10> arr {23, 122, 41, 67, 1, 2, 3, 4, 5, 6};

//     std::cout<<"Address of the first memory block is: " << arr <<std::endl;
//     std::cout<<arr[0]<<std::endl;
//     std::cout<<"Address of the first memory block is: " << &arr[0] <<std::endl;

//     std::cout<<"4th "<< *arr<< std::endl;
//     std::cout<<"5th "<< *arr+1 << std::endl;
//     std::cout<<"6th "<< *(arr + 1) << std::endl;
//     std::cout<<"7th "<< *(arr) + 1 << std::endl;
//     std::cout<<"8th "<< arr[2] <<std::endl;
//     std::cout<<"9th "<< *(arr+2) <<std::endl;

//     int i = 3;
//     std::cout<< i[arr] <<std::endl;

//     return 0;
// }
