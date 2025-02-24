#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<string>
#include<iostream>
using namespace std;

class Animal{
    protected:
        string name;
    public : 
        Animal(const string& nama_animal);
        virtual ~Animal();
        virtual void speak() const = 0;
        string getName() const;
        virtual void showType() const;
};

#endif