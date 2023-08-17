// IMPORTANT
// PAINTERS PARTITION PROBLEM
// CALCULATE MINIMUM TIME NEEDED TO PAINT THE WALLS

#include<iostream>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int painterCount = 1;
    int wallSum = 0;

    for (int i = 0; i<n; i++) {
        if (wallSum + arr[i] <= mid) {
            wallSum += arr[i];
        }
        else {
            painterCount++;
            if(painterCount>m || arr[i]>mid) {
                return false;
            }
            wallSum = 0;
            wallSum += arr[i];
        }
    }
    return true;
}

int wallAllocate(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    int painterCount = 1;

    for(int i = 0 ; i<=n; i++) { // calculating sum of time for walls
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s)/2;

    while (s<=e) {
        if (isPossible(arr, n, m, mid)){
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
    vector<int> arr{10, 20, 30, 40};
    cout<<"The minimum time req to paint the walls is: "<<wallAllocate(arr, 4, 2) <<endl;
}