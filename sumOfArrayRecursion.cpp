// sum of array elements using recursion

#include<iostream>
#include<array>

int getSum(int *p, int n) {
    
    //base case
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return *p;
    }

    int remainingPart = getSum(p+1, n-1);
    int sum = *p + remainingPart;

    return sum;
} 

int main() {
    std::array<int, 10> arr{2,4,9,9,9,1};
    int n = 6;

    int sum = getSum(&arr[0], n);

    std::cout<<"Sum is: "<<sum<<std::endl;

    return 0;
}