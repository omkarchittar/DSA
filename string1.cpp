// string - a 1D array of characters
// a string terminates with a null character '\0' 
// jisse hume pata lage string kaha end hoti hai

// cin stops its exectution if you give it a 'space' 'tab' or 'enter' or a null character

// reversing a string

#include<iostream>
#include<string>

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

    return 0;

}


// #include<iostream>
// #include<string>

// int main() {
//     char arr[20];

//     std::cout<<"Enter your name: ";
//     std::cin>>arr;

//     std::cout<<arr<<std::endl;

//     return 0;
// }
