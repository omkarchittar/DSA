// #include<iostream>
// #include<array>

// int main() {
//     std::array<int, 5> arr {1,2,3,4,5};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     int s = 0;
//     int e = size-1;
//     int temp = 0;

//     std::cout<<"before reversing: "<<std::endl;
//     for(int i:arr) {
//         std::cout<<i<<" ";
//     }

//     while(s<=e) {
//         temp = arr[s];
//         arr[s] = arr[e];
//         arr[e] = temp;
//         s++;
//         e--;
//     }

//     std::cout<<"after reversing: "<<std::endl;
//     for(int i:arr) {
//         std::cout<<i<<" ";
//     }
// }

// reversing array after a particular index
#include<iostream>
#include<vector>

std::vector<int> reverseArray(std::vector<int> arr, int m) {
    int s = m+1;    // reversing from the next position ofthe given index
    int e = arr.size()-1;

    while(s<=e) {
        std::swap(arr[s],arr[e]);
        s++;
        e--;
    }

    return arr;
}

void print(std::vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        std::cout<< v[i] <<" ";
    }
    std::cout<<std::endl;
}

int main() {
    std::vector<int> v {11,7,3,12,4};
    std::vector<int> v_new;
    print(v);

    v_new = reverseArray(v,2);

    print(v_new);
}