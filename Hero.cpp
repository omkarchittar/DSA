#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;

class Hero {
    // private:
    public:

    // properties
    char *name; 
    int health;
    char level;

    // public:

    // copy constructor - passing by ref is important
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy constructor called"<<endl;

        this -> level = temp.level;
        this -> health = temp.health;
    }

    Hero() {
        cout<<"Constructor called!"<<endl;
        name = new char[100];
    }

    Hero(int health) {
        this->health = health;
    }

    Hero(int health, char level) /*Parameterised constructor*/ {
        cout<<"this: " <<this<<endl;
        this->health = health;
        this->level = level;
    }

    void print() {
        cout<<endl;
        cout<<"[ Name: " <<this->name<<", ";
        cout << "level: "<<this->level <<", ";
        cout<< "health: "<<this->health <<" ]";
        cout<<endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};
