// Valid Plaindrome - alpha numeric

//  Faaltu ke characters nikaal do aur 

// sab lower case me hona chahiye

// palindrome check karna hai

#include<iostream>
#include<string>

bool isValid(char ch) {
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) {
            return 1;
    }
    return 0;
}

char toLowerCase(char ch) {
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')) {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(std::string str) {
    int s = 0, e = str.length() - 1;

    while(s<=e) {
        if(str[s] != str[e]) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(std::string s) {
    //  faltu char hata do
    std::string temp = "";
    for (int i = 0; i<s.length(); i++) {
        if(isValid(s[i])) {
            temp.push_back(s[i]);
        }
    }

    //lower case me kardo
    for(int j=0; j<temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }

    return  checkPalindrome(temp);
}

int main() {
    std::string s;

    std::cout<<"Enter your string: ";
    std::cin>>s;

    // std::cout<<isPalindrome(s)<<std::endl;

    if(isPalindrome(s)) {
        std::cout<<"The given string is a palindrome!"<<std::endl;
    }
    else {
        std::cout<<"the given string is not a palindrome!"<<std::endl;
    }
}