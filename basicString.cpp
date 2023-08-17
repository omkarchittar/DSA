// string is a type of class
// cplusplus.com

// Homework - key differences between character array and a string

// 1. Using char*
// char* str = "This is GeeksForGeeks";
// Pros:

// 1. Only one pointer is required to refer to whole string. That shows this is memory efficient.

// 2. No need to declare the size of string beforehand.

// Cons:

// 1. This works fine in C but writing in this form is a bad idea in C++. That’s why compiler shows warning of “deprecated conversion from string constant to ‘char*'” because in C string literals are arrays of char but in C++ they are constant array of char. Therefore use const keyword before char*.

// const char* str = "This is GeeksForGeeks";
// 2. We cannot modify the string at later stage in program. We can change str to point something else but cannot change value present at str. Refer storage-for-strings-in-c for more detail. 

#include<iostream>
#include<string>

int main() {
    std::string s;
    std::cout<<"Enter the string: ";
    std::cin>>s;

    s.push_back('c');

    std::cout<<s<<std::endl;
}