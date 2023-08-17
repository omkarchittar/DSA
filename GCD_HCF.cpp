// GCD HCF
// Euclid Algorithm:
// GCD(a, b) = GCD(a-b, b)         
// chalate raho jab tak a ya fir b zero na hojaaye
// agar a 0 hai toh b answer hai
// agar b 0 hai toh a answer hai

// GCD(a, b) = GCD(a%b, b)  improvised

//  recursion
// iteratively

#include<iostream>
#include<vector>

int gcd(int a, int b) {
    if(a==0) {
        return b;
    }

    if(b==0) {
        return a;
    }

    while(a!=b) {
        if(a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}

int main() {
    int a, b;
    std::cout<<"Enter the Values of a and b: "<<std::endl;
    std::cin>>a>>b;
    
    int ans = gcd(a,b);

    std::cout<<"The GCD is: "<<ans<<std::endl;
}