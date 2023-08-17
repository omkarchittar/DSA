// stack : last in first out (shaadi ke plates ka stack)
// last me jaayega voh sabse pehle bahar aayega 

#include<iostream>
#include<stack>

int main() {
    std::stack<std::string> s;
    
    // pushing always happens from the top
    
    s.push("Omkar");
    s.push("Ashok");
    s.push("Chittar");

    std::cout<<"Element at the top is : "<<s.top()<<std::endl;

    s.pop();    // pops out he topmost element

    std::cout<<"Element at the top is : "<<s.top()<<std::endl;

    std::cout<<"size of the stack is: "<<s.size()<<std::endl;

    std::cout<<"Empty or not? "<<s.empty()<<std::endl;
    
}