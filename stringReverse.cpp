// reversing a string

#include<iostream>
#include<string>

void reverse(char name[], int n) {
    int s = 0, e = n-1;

    while (s<e) {
        std::swap(name[s++], name[e--]);
    }
}

int main() {
    char name[20];
    int count = 0;
    
    std::cout<<"Enter your name: ";
    std::cin>>name;

    std::cout<<"your name is: "<<name<<std::endl;
     
    // this will give you a wrong answer as it returns the actual length of the string (array) that we created
    int len = sizeof(name)/ sizeof(name[0]);
    std::cout<<"your name is "<<len<<" letters long"<<std::endl;   

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    std::cout<<"your name is "<<count<<" letters long"<<std::endl;   

    reverse(name, 5);
    return 0;
}