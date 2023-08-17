// Deque - double ended queue
// agar hume dono end par (front aur back) push aur pop (insertion/deletion) operrations karna chahte ho to deque use karo
// data storage contiguous memory locations pe nahi hota
// yaha par bohot saare fixed static arrays hote hai aur aapki tracking rakhi jaati hai ki data aapka kiss location pe pada hua hai: kinda complex**

// array ka use karke doubly ended queue implement kar sakte hai
// yes deque is dynamic
// random access bhi possible hai -> at operation ka use karke

#include<iostream>
#include<deque>

int main() {
    std::deque<int> d;

    // adding elements in this deque
    d.push_back(1);
    d.push_front(2);
    std::cout<<"printing d: "<<std::endl;
    for(int i : d) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    d.pop_back();
    d.pop_front();
    std::cout<<"printing d: "<<std::endl;
    for(int i : d) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    d.push_back(1);
    d.push_front(2);
    std::cout<<"Print first index element-> "<<d.at(1)<<std::endl;

    std::cout<<"front "<<d.front()<<std::endl;
    std::cout<<"back "<<d.back()<<std::endl;

    std::cout<<"Empty or not? "<<d.empty()<<std::endl;

    // erase function me we have to specfy kaha se kaha tak hume erase karna hai
    // isilie direct ye : d.erase(); nahi chalne waala (specify range)
    std::cout<<"before erase: "<<d.size()<<std::endl;
    d.erase(d.begin(), d.begin()+1);    // to delete only the first element
    std::cout<<"after erase: "<<d.size()<<std::endl;
    for(int i:d) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    // erase ke baad size zero ho jaata hai (elements present in this data structure)
    // nut aapka jo max size hota hai : jitni memory allocate hoti hai aapke deque ko voh starting aur ending me same rehti hai
}