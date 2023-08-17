// Row wise sum

#include<iostream>
#include<array>

std::pair<int, int> largestRowSum(std::array<std::array<int, 3>, 3> arr) {
    std::array<std::array<int, 3>, 3> ans {0};
    int maxi = 0;
    int num = -1;
    for(int i = 0; i<3; i++) {
        int sum = 0;
        for(int j = 0; j<3; j++) {
            sum += arr[i][j]; 
        }

        if(maxi<sum) {
            maxi = sum;
            num = i;
        } 
    }
    return std::make_pair(maxi, num);
}

std::array<std::array<int, 3>, 3> rowSum(std::array<std::array<int, 3>, 3> arr) {
    std::array<std::array<int, 3>, 3> ans {0};
    for(int i = 0; i<3; i++) {
        int sum = 0;
        for(int j = 0; j<3; j++) {
            sum += arr[i][j]; 
        }
        ans[i][0] = sum;
    }
    return ans;
}

std::array<std::array<int, 3>, 3> colSum(std::array<std::array<int, 3>, 3> arr) {
    std::array<std::array<int, 3>, 3> ans {0};
    for(int j = 0; j<3; j++) {
        int sum = 0;
        for(int i = 0; i<3; i++) {
            sum += arr[i][j]; 
        }
        ans[0][j] = sum;
    }
    return ans;
}

int main() {
    std::array<std::array<int, 3>, 3> arr = {{{1,2,3},{4,5,6},{7,8,9}}};
    std::array<std::array<int, 3>, 3> ans;

    ans = rowSum(arr);
    std::cout<<"Row wise sum is: "<<std::endl;
    for(int i = 0; i<3; i++) {
        std::cout<< ans[i][0]<< " ";
    }
    std::cout<<std::endl;
    // for(int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++) {
    //         std::cout<< ans[i][j]<<" ";
    //     }
    //     std::cout<<std::endl;
    // }

    ans = colSum(arr);
    std::cout<<"Col wise sum is: "<<std::endl;
    for(int i = 0; i<3; i++) {
        std::cout<< ans[0][i]<< " ";
    }
    std::cout<<std::endl;

    std::pair<int, int> p = largestRowSum(arr);

    std::cout<<"The largest row sum is: "<< p.first <<" of the row index "<< p.second << std::endl;
    return 0;
}