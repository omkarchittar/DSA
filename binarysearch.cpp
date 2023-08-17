#include<iostream>
using namespace std;

int binarySearch(int a[], int size, int key) {
    int s = 0, e = size-1;
    int mid = (s+e)/2;

    while(s <= e) {
        if(key == a[mid]) {
            return mid;
        }

        if (key > a[mid]) {
            s = mid + 1 ;
        }
        else {
            e = mid - 1;
        }

        mid = (s + e)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int key = 12;

    // cout<<"Enter the key you want to search:";
    // cin>>key;

    int index = binarySearch(even, 12, key);

    cout<<"Index of "<<key<<" is "<<index<<endl;
}
// #include<iostream>
// #include<array>

// int binarySearch(std::array<int, 5>& arr, int size, int key) {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start+end)/2;

//     while(start <= end) {
//         if(arr[mid]==key) {
//             return mid;
//         }

//         // go to right part
//         if(arr[mid] < key) {
//             start = mid+1;
//         }
//         // go to left part
//         else {
//             end = mid-1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     std::array<int, 5> a = {11, 4, 9, 5, 1};
//     int key, idx;

//     // sorting the given array
//     // int max = a[0];
//     for (int i = 0; i <= 4; i++) {
//         for (int j = i+1; j<=4; j++) {
//             if(a[i] > a[j]) {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     // for (int i = 0; i <= 4; i++) {
//     //     std::cout<<"the sorted array is:"<<std::endl;
//     //     std::cout<<a[i]<<" ";
//     // }

//     std::cout<<"Enter the element to search:";
//     std::cin>>key;

//     // idx = binarySearch(a, 5, key);
//     // std::cout<<"key found at"<<idx<<std::endl;
// }