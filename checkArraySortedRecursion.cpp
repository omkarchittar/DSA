// check if an array is sorted using recursion

// agar array me ek ya zero element hai toh voh sorted hai

#include<iostream>
#include<array>

bool isSorted(int *p, int size) {
    // int *p = &arr[0];
    // base case
    if(size == 0 || size==1) {
        return true;
    }

    if(*p > *(p+1)) { // sorted nahi hai   // bas pehle 2 elements check kare hai
        return false;
    }

    else {
        bool remainingPart = isSorted(p + 1, size-1);
        return remainingPart;
    }
}

int main() {
    std::array<int, 10> arr{2,5,9,7,8,1,34,90,12,11};
    int n = arr.size();
    
    // std::cout<<n<<std::endl;

    if(isSorted(&arr[0], n)) {
        std::cout<<"The given array is sorted"<<std::endl;
    }
    else {
        std::cout<<"Not sorted"<<std::endl;
    }
    return 0;

}