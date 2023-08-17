#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6: "<<binary_search(v.begin(), v.end(),6)<<endl;

    cout<<"lower bound -> " << lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<"upper bound -> " << upper_bound(v.begin(), v.end(),4)-v.begin()<<endl;

    int a=3, b=5;
    cout<<"max -> "<<max(a,b);
    cout<<"min -> "<<min(a,b);

    swap(a, b);     // vectors, stacks
    cout<<"a ->"<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"String -> "<<abcd<<endl;

    rotate(v.begin(), v.end() + 1, v.end());
    cout<<"after rotate"<<endl;

    for(int i:v) {
        cout<<i<<" ";
    }

    //sort is based on introsort : combination of quick, heap, insertion

    sort(v.begin(), v.end());
    cout<<"after sort"<<endl;

    for(int i:v) {
        cout<<i<<" ";
    }
}