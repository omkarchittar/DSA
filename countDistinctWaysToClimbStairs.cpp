// Count Ways to reach the nth stairs

// person can climb 1 stair at a time or two steps at a time

// recursive relation
// nth step pe hum 1 sidhi pehli waale se aaye ya phir 2 piche waali seedhi se

// f(n) = f(n-1) + f(n-2)  possibilities

// base case:
// maanlo koi seedhi 0 se neeche hai toh return 0;
// if(n<0) return 0;
// if(n==0) return 1;  0th seedhi se usi seedhi pe waapas kaise aa sakte ho -> 1 tarike se -> usi seedhi pe kud gaye

#include<iostream>

int count(long long nStairs) {
    // base case
    if (nStairs < 0) {
        return 0;
    } 

    if (nStairs == 0) {
        return 1;
    }

    // recursive call
    int ans = count(nStairs-1) + count(nStairs-2);

    return ans;
}

int main() {
    int n;
    std::cout<<"Enter the nth stair you want to reach: ";
    std::cin>>n;

    int ans = count(n);

    std::cout<<"No. of ways to reach the"<<n<<"th stair are: "<<ans<<std::endl;

    return 0;

}