// Queue : firdt in first out
#include<iostream>
#include<queue>

// saare operations ki complexity O(1)
int main() {
    std::queue<std::string> q;

    q.push("Omkar");
    q.push("Ashok");
    q.push("Chittar");

    std::cout<<"Size before pop"<<q.size()<<std::endl;

    std::cout<<"First Element "<<q.front()<<std::endl;
    q.pop();
    std::cout<<"First Element "<<q.front()<<std::endl;

    std::cout<<"Size after pop "<<q.size()<<std::endl;
}