// Compress the given string - writing the char appeared and its numner of occurrances
// return the size of the resulting array

// constnt space - koi extra space nahi use kia 

// time - O(n) - n=vector ka size
// space - O(1)

#include<iostream>
#include<array>
#include<string>
#include<vector>

int compress(std::vector<char> &chars) {
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n) {
        int j = i+1;
        while(j<n && chars[i]==chars[j]) {
            j++;
        }
        // yaha kab aaoge
        // ya toh vector poora traverse kar liya
        // ya phir new/different character encounter kia hai

        // oldChar store karlo
        chars[ansIndex++] = chars[i];

        int count = j-i;
        if(count > 1) {
            // count ko single single digit karke daalna hai
            // conversting counting into single digit and saving
            std::string cnt = std::to_string(count);
            for(char ch: cnt) {
                chars[ansIndex++] = ch;
            }
        }
        // moving to a new or different character 
        i = j; 
    }
    return ansIndex;
}

int main() {
    std::vector<char> v = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd', 'd', 'd', 'd'};
    
    int ans = compress(v);
    std::cout<< ans <<std::endl;
}