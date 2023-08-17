// cin apna execution ruka deta hai jab usko space, tab ya newline dikh jaaye
// iske liye hum cin.getline(str, len) ka use kar sakte hai

// cin.getline

//custom delimiter

// INBUILT FUNCTIONS
//  length of string - strlen(name)
//  compare two strings - strcmp(str1, str2) = 0 for equal and +1/-1
//  copy str1 into str2 - strcpy(str2,str1)

// question: given a string -> remove all spaces and put @40
//  My name is Omkar - My@40name@40is@40Omkar


// Home work - dont create a new temporary string
// make changes in the same string (in place solution) O(1)

// time - O(n)
// space - O(n)

#include <iostream>
#include <string>

std::string replaceSpaces(std::string &str) {
    std::string temp = "";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, s);
    std::cout << "Your original sentence is: " << s << std::endl;

    s = replaceSpaces(s);

    std::cout << "Your modified sentence is: " << s << std::endl;

    return 0;
}
