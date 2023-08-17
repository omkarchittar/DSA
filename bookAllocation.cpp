//IMPORTANT
// book allocation problem - Binary Search
// concept : minimizing the search space

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i=0; i<n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = 0;
            pageSum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)  {
    int s = 0;
    int sum = 0;

    for (int i = 0; i<=n; i++) { // calculating sum of number of pages to give it to end
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;

    // binary search logic
    while (s<=e) {
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main() {
    vector<int> arr{12, 34, 67, 90};

    cout<<"The max no of books that can be allocated to a student is:"<<allocateBooks(arr, 4, 2)<<endl;

    return 0;
}