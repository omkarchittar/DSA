// Say the digits out loud

// store the mapping of each digit
// digit to string mapping

// 0 -> "Zero"
// 1 -> "One"
// 2 -> "Two"
// .
// .
// .
// 9 -> "Nine"

// string array[10] = {"Zero", "One", ...... , "Nine"}

// how to get a digit from a number
// digit = num % 10;
// num = num / 10;

#include<iostream>
#include<string>

void sayIt(int n, std::string arr[]) {
    //base case 
    if(n == 0) {
        return ;
    }

    // processing 
    int digit = n % 10;
    n = n/10;

    // recursive call
    sayIt(n, arr);
    std::cout<< arr[digit] << " ";
}

int main() {
    std::string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;

    std::cout<< std::endl;
    sayIt(n,arr);
    std::cout<<std::endl;

    return 0;
}

// HOMEWORK - RECURSION TREE, FUNCTION CALL STACK