// lenear search using recusrion

#include<iostream>
#include<array>

void print(int arr[], int n) {
    std::cout<<"Size of the array is: "<< n << std::endl;

    for(int i = 0; i<n; i++) {
        std::cout<< arr[i] <<" ";
    }
    std::cout<<std::endl;
}

bool search (int *p, int size, int k) {
    // let us print everything just to check
    print(p, size);
    
    // base case
    if(size == 0) {
        return false;
    }

    if(*p == k) {
        return true;
    }
    else {
        bool remainingPart = search(p+1, size-1, k);
        return remainingPart;
    }
}

int main() {
    std::array<int, 5> arr{3,5,1,2,6};
    int size = 5;
    int k = 2;
    bool ans = search(&arr[0], size, k);

    if(ans) {
        std::cout<<"Key found!"<<std::endl;
    }
    else {
        std::cout<<"Not found!"<<std::endl;
    }
    return 0;
}