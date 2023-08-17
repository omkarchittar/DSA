// SET : stores only unique elements like sets in maths/ elements cannot be repeated
// background me
// The std::set container in C++ is implemented as a balanced binary search tree, specifically a Red-Black Tree. 
// It is part of the Standard Template Library (STL) and is available in the <set> header.

// A Red-Black Tree is a self-balancing binary search tree that ensures efficient search, insertion, and deletion operations. 
// It maintains a set of elements in sorted order based on their values and provides logarithmic time complexity for these operations. The elements in the set are unique, meaning that duplicates are not allowed.

// The std::set container makes use of the comparison operator (operator< by default) to order and compare elements. 
// This allows it to perform efficient searching, insertion, and deletion operations. The comparison operator is used to maintain the sorted order of the elements in the tree.

// Additionally, std::set provides a set of member functions and iterators to work with the elements. 
// Some common operations include inserting elements, erasing elements, finding elements, and iterating over the elements in sorted order.

// It's important to note that the std::set container does not provide direct access to individual elements by their position or index, 
// as it is primarily optimized for efficient search operations rather than random access.


// sets cannot be modified
// push/pop
// elements are returned in a sorted order only
// ordered set and unordered set

#include<iostream>
#include<set>

int main() {
    std::set<int> s;

    s.insert(5);    // complexity of insert operation = O(logn)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s) {
        std::cout<<i<<std::endl;
    }
    std::cout<<std::endl;

    std::set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(int i:s) {
        std::cout<<i<<std::endl;
    }

    std::cout<<"5 is present or not? ->"<<s.count(5)<<std::endl;

    // find : returns iterator if element found

    std::set<int>::iterator itr = s.find(5);

    std::cout<<"value present at itr ->"<<*itr<<std::endl;

    for(auto it = itr; it!=s.end(); it++) {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;

    //insert, find, erase aur count ki complexity O(log n) hai
    // size, begin, end O(1)

}

