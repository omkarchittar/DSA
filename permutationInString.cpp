// permutation in string

// ek main string me ek given substring ka permutation exist karta hai ya nahi
// Example,
//  s1 = eidbaooo
//  s2 = ab -> (permutations : ab, ba)
//  return true
//  s1 = eaidbooo -> false

// s2 string me character ka count store kar do mapping karke
// s1 me traverse karo - ek window banake - window ki size jiski s2 ke barabar hogi

// sliding window
// jis element ko chod diya hai uska count minus kardo 
// jis element ko pakad liya hai uska count plus kardo

// time comp -> O(s1.length + s2.length)
// space comp -> constant space = O(1)
#include<iostream>
#include<string>

bool checkEqual(int a[26], int b[26]) {
    for(int i = 0; i<26; i++) {
        if(a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(std::string s1, std::string s2) {

    //  char count array 
    int count1[26] = {0};   // s2 string ke liye

    for(int i = 0; i<s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 string in window of size s1 length and compare

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    // running for first window
    while(i<windowSize && i<s2.length()) {  // dono conditions check akrna important hai
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2)) {
        return 1;
    }
    // else aage process karo
    while(i<s2.length()) {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if(checkEqual(count1, count2)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    std::string s1, s2;

    std::cout<<" Enter the string whose permutations you want to check: ";
    std::cin>>s1;

    std::cout<<"Enter a string: ";
    std::cin>>s2;

    if (checkInclusion(s1,s2)) {
        std::cout<<"The given string has the permutation of the first string"<<std::endl;
    }
    else {
        std::cout<<"Permutation not found"<<std::endl;
    }
}
