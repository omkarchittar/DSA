// Square root using Binary Search
// search space lies between 0 and n
#include<iostream>
using namespace std;

long long int squareRootInteger(int n) {   // code for calculating integer part of the square root
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;

    while(s<=e) {
        // int sq = mid*mid;  // problem when mid = 2^31 the multiplication results an integer outside3 the range
        // solution is to consider everything long long int

        long long int sq = mid * mid;   // whenever there is a multiplication involved try to use long long
        if(sq == n) {
            return mid;
        }

        if(sq < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

// Using brute force to calculate the decimal value of the square root 
double morePrecision (int n, int precision, int integ) {
    double factor = 1;
    double ans = integ;

    for (int i = 0; i<precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int num = 8, prec;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"How much Precision do you want? :";
    cin>>prec;

    int integ = squareRootInteger(num);
    cout<<"Answer is "<<morePrecision(num, prec, integ)<<endl;

    return 0;
}

