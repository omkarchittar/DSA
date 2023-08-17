// Palindrome - not case sensitive

#include<iostream>
#include<string>

char toLowerCase(char ch) {     // for case sensitive remove this function
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0, e = n-1;

    while(s<=e) {
        // for avoiding special character
        if(!((a[s]>='A' && a[s]<='Z') || (a[s]>='0' && a[s]<='9') || (a[s]>='a' && a[s]<='z'))) {
            s++;
        }
        if(!((a[e]>='A' && a[e]<='Z') || (a[e]>='0' && a[e]<='9') || (a[e]>='a' && a[e]<='z'))) {
            e--;
        }

        if(toLowerCase(a[s]) != toLowerCase(a[e])) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    char a[20];
    int count = 0;

    std::cout<<"Enter a string: ";
    std::cin>>a;

    for(int i = 0; a[i] != '\0'; i++) {
        count++;
    }
    std::cout<<checkPalindrome(a, count)<<std::endl;
}