#include "../include/Dog.hpp"
using namespace std;

Dog::Dog(const string& name) : Animal(name){}
Dog::~Dog(){
    cout << "Dog Class destructior " << name << endl;
}
void Dog::speak() const{
    cout << "Nama hewan : " << name << endl;
    cout << "Suara : Woof !!!" << endl; 
}

void Dog::showType() const{
    cout << name << "is a Dog." << endl;
}