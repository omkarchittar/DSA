#include<iostream>

void reachHome(int src, int dest) {
    std::cout<<"source "<<src<<" destination "<<dest<<std::endl;

    // base case
    if(src == dest) {
        std::cout<<"Pohoch gaya"<<std::endl;
        return ; 
    }

    // processing - ek step aage badh jaao
    src++;

    // recursive call
    reachHome(src, dest);
}

int main() {

    int dest = 10;
    int src = 1; 
    reachHome(src, dest);

    return 0;
}