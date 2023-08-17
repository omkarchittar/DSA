// map - data is stored in key value pairs
// all keys are unique and one key only points to one value
#include<iostream>
#include<map>

int main() {
    std::map<int, std::string> m;

    m[1] = "Chittar";
    m[2] = "Ashok";
    m[20] = "Omkar";

    // another way of inserrting
    m.insert({5,"Durga"});

    std::cout<<"Before erase: "<<std::endl;
    for(auto i:m) {
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    //sorted in case of map

    // not sorted in case of unordered map

    std::cout<<"finding 20 -> "<<m.count(20)<<std::endl;

    m.erase(20);
    std::cout<<"after erase: "<<std::endl;
        for(auto i:m) {
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }

    auto it = m.find(2);

    for(auto i = it; i!=m.end(); i++) {
        std::cout<<(*i).first<<std::endl;
    }
    // insert, erase, find, count complexity hai O(log n)

    // unordered maps ki implementation hoti hai hash tables use karke isilie usme complexity O(1) hoti hai


}