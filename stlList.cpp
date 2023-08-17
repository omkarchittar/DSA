// List
// implementation humasha doubly linked list ko use karke hoti hai
// doubly linked list : jisme 2 pointers hote hai -> ek front ka aur ek back ka 
// direct access nahi hota : at opeartion ko use nahi kar sakte

#include<iostream>
#include<list>

int main() {
    std::list<int> l;

    //copying a list to a new list
    std::list<int> n(l);

    std::list<int> m(5, 100);

    std::cout<<"Printing m:"<<std::endl;
    for(int i:m) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    //adding elements to the list
    l.push_back(1);
    //l.pop_back();
    l.push_front(2);
    //l.pop_front();

    for(int i:l) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    //begin, end, back, empty in sabki time complexity O(1) hai
    //erase ki time complexity O(n) hai kyuki hum element pe directly jump nahi kar sakte at() ka use karke
    l.erase(l.begin());     // iterator jaha point kar raha hai voh element delete ho jaayega
    std::cout<<"after erase: "<<std::endl;
    for(int i:l) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"size of list"<<l.size()<<std::endl;

}