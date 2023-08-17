// remove all occ of a substring

// main badi string di gayi hai
// ek chhoti substring bhi di gayi hai

// main string me jaha kahi ye substring dikh jaaye use hata do

// i/p -> daabcbaabcbc
// part -> abc
// output1iter -> dabaabcbc
// output2iter -> dababc
// output3iter -> dab

// constrains:
// 1 <= s.length() <= 1000
// 1 <= part.length() <= 1000

// std::string::find - searches the string for the first occurrance of the sequence specified by its arguments

#include<iostream>
#include<string>

std::string removeOcc(std::string s, std::string part) {

    while(s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main() {
    std::string str, part;

    std::cout<<"Enter a string: ";
    std::getline(std::cin, str);

    std::cout<<"Enter the substring to remove: ";
    std::getline(std::cin, part);

    str = removeOcc(str, part);

    std::cout<<"String after removing the substring is: "<<str<<std::endl;

}