#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void getSound() const = 0;
};
class Kucing : public Animal{
    public:
    void getSound() const override{
        cout << "Meong" << endl;
    }
};


int main(){
    Kucing hitam;
    hitam.getSound();
    return 0;
}