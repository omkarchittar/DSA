// IMPORTANT
// AGGRESSIVE COWS
// given number of cows, and number of stalls, place the cows as far as possible from each other
// using binary search - minimizing our search space

// why binary search:
// binary search tab lagao jab ek condition ko check karne se hum ek particular part (mid ka left/right) of search space ko neglect kar sakte hai

#include<iostream>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid) {
// possible ke case me answer ko store karlo aur right part me chale jao
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i = 0; i<stalls.size(); i++) {
        if(stalls[i] - lastPos >= mid) {
            cowCount++;
            if(cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i<stalls.size(); i++) {
        maxi = max (maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e) {
            if(isPossible(stalls, k, mid)) {
                ans = mid;
                s = mid+1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> arr{12, 4, 2, 1, 3, 6, 11};

    cout<<"The max distance between the cows should be : "<<aggressiveCows(arr, 2)<<endl;
}