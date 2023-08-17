// Priority Queue : Aisa queue jiska first element humesha graetaest hoga
//      default priority queue is a max heap

// how to convert into min heap will be shown below

// whenever you try to pop an element out of a priority queue it will be the maximum element

#include<iostream>
#include<queue>

int main() {
    
    // max heap
    std::priority_queue<int> maxi;

    //min heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> mini; //*****

    maxi.push(10);
    maxi.push(112);
    maxi.push(1);
    maxi.push(11);
    maxi.push(100);

    // for(int i:maxi) {
    //     std::cout<<i<<" ";
    // } 
    // cannot be accessed like this
    int n = maxi.size();
    for(int i = 0; i<n; i++) {
        std::cout<<maxi.top()<<" ";
        maxi.pop();
    }
    std::cout<<std::endl;

    mini.push(10);
    mini.push(110);
    mini.push(101);
    mini.push(1110);
    mini.push(1011);

    int m = mini.size();
    for(int i = 0;i<m; i++) {
        std::cout<<mini.top()<<" ";
        mini.pop();
    }
    std::cout<<std::endl;

    std::cout<<"Khaali hai kya bhai? "<<mini.empty()<<std::endl;    // returns 1 if not empty

}
