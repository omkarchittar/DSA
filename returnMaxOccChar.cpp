// return maxiumum occ character in an input string

// int ka array banao 26 ka
// assigning numbers to every character (a - 0; b - 1; c - 2;.........; z - 25)
// one to one mapping
// agar mere pass lower chase ka char aaya toh usme se a minus kar do
// lower case -> ch - 'a' -> number -> arr[number]++
// upper case -> ch - 'A' -> number -> arr[number]++


// space - O(1)
// time - O(n)

#include<iostream>
#include<string>

char maxOcc(std::string s) {
    int arr[26] = {0};
    
    // creating an array for count of characters
    for (int i = 0; i<s.length(); i++) {
        char ch = s[i];  // can use s[i] directly
        int number = 0;
        //  lower case
        if(ch>='a' && ch<='z') {
            number = ch - 'a';
        }
        //  upper case
        else {
            number = ch -'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = -1;
    for(int i = 0; i<26; i++) {     // loop chalana hai saare characters ke liye
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
        // this gives you just the count
        maxi = std::max(maxi, arr[i]);
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    std::string s;

    std::cout<<"Enter your string: ";
    std::cin>>s;

    std::cout<<"The max occ char is: "<<maxOcc(s)<<std::endl;

}