// Count Primes
// Sieve of Eratosteres

// Approach: 
//  mark every number as a prime number
//  table me aa raha hai usko non-prime mark kardo

// time : O(n x log(log n))
#include<iostream>

int primes(int n) {
    int count = 0;
    std::vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for( int i = 2; i<n; i++) {
        if(prime[i]) {
            count++;

            for(int j = 2*i; j<n; j = j+i) {
                prime[j] = 0;
            }
        }
    } 
    return count;
}

int main() {
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;

    std::cout<<"The number of prime numbers from 1 to "<<n<<" are "<<primes(n)<<std::endl;
}