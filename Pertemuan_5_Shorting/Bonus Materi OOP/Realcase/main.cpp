#include "./include/Dog.hpp"

int main(){
    Animal* animals[] = {
        new Dog("Spike")
    };
    for( Animal* animal : animals ){
        animal->showType();
        animal->speak();
        delete animal;
    }
    return 0;
}