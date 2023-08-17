#include<iostream>
#include<vector>
#include<array>
#include<string>
#include "Hero.cpp"
using namespace std;


int main() {

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Omkar";
    hero1.setName(name);

    hero1.print();

    // using default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[4] = 'i';
    hero1.print();

    hero2.print(); 

    // // dynamic allocation
    // // Hero *b = new Hero;

    // // cout<<"level is: "<< (*b).getLevel() <<endl;
    // // cout<<"Health is: "<< (*b).getHealth() <<endl;

    // // b->setLevel('A');
    // // b->setHealth(70);
    // // cout<<"level is: "<< b->getLevel() <<endl;
    // // cout<<"Health is: "<< b->getHealth() <<endl;

    // // delete b;

    // // heap me memory allocate hogayi

    // // creation of Object
    // Hero ramesh(10, 'B');
    // cout<<"Address of Ramesh" << &ramesh <<endl;
    // cout<<"Ramesh's health is: "<<ramesh.getHealth() <<endl;
    // ramesh.setHealth(710);
    // ramesh.setLevel('2');
    // ramesh.print();

    // // cout<<" Size: "<<sizeof(h1) <<endl;

    // // accessing data members
    // cout<<"Health is: "<< ramesh.getHealth() << endl;
    // cout<<"Level is: "<< ramesh.getLevel() << endl;

    // // dynamically
    // Hero *h = new Hero(11, 'B');
    // h->print();

    // Hero temp(22, 'C');
    // temp.print(); 

    // Hero suresh(70, 'C');

    // Hero ritesh(suresh);    // trying to copy suresh into ritesh

    // ritesh.print();
    // suresh.print();

    return 0;
}