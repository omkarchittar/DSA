// fibonacci series

// f(n) = f(n-1) + f(n-2)

#include <iostream>

int fibo(int n) {
    // base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // recursive calculation
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main() {
    int n;
    std::cout << "Enter number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibo(i) << " ";
    }
    
    std::cout << std::endl;
    return 0;
}


// #include <iostream>

// void fibo(int n) {
//     static int a = 0, b = 1;

//     if (n > 0) {
//         int c = a + b;
//         a = b;
//         b = c;
//         std::cout << c << " ";
//         fibo(n - 1);
//     }
// }

// int main() {
//     int n;
//     std::cout << "Enter number of terms: ";
//     std::cin >> n;

//     if (n >= 1) {
//         std::cout << "Fibonacci Series: ";
//         std::cout << "0 "; // First term
//     }

//     if (n >= 2) {
//         std::cout << "1 "; // Second term
//     }

//     fibo(n - 2); // Start from the third term

//     std::cout << std::endl;
//     return 0;
// }
// In this modified code, we use a recursive approach to calculate and print the Fibonacci series inside the fibo function. 
// We introduce two static variables a and b to keep track of the last two terms in the series. 
// The function calculates the next term c as the sum of a and b, updates a and b accordingly, and prints c. 
// Then, the function calls itself with n-1 to calculate and print the next term until the desired number of terms is reached. 
// The static keyword ensures that a and b retain their values between recursive calls.

// In the main function, we handle the special cases for the first and second terms (0 and 1) of the Fibonacci series 
// since they don't follow the standard recurrence relation. Then, we call the fibo function to print the remaining terms 
// (if n is greater than or equal to 3).