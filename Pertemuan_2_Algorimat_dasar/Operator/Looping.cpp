#include<iostream>
using namespace std;

int main(){
    // looping
    // while
    // printah dulu baru bekerja
    int nilai = 0;
    cout << "======while======" << endl;
    while(nilai <= 5){
        cout << "Index of -" << nilai << endl;
        nilai++; // incerment
    }
    cout << "======do======" << endl;
    // do 
    // kerjain dulu nnti di check
    do{
        cout << "Index of -" << nilai << endl;
    }while(nilai <= 5);
    // for 
    // kamu sudah harus tau kapan kamu behenti
    cout << "======for======" << endl;
    for(int i = 0 ; i < 10 ; i++){
        cout << "I Love You" << endl;
    }

    // gimana kalu kita gak tau jumlahnya tapi tau datanya
    string buahs[] = {"Semangka","Melon","pisang","apple","nanas"};
    cout << "======for======" << endl;
    // foreach
    int nomer = 1;
    for(string buah : buahs){
        cout << "keranjang nomer : " << nomer << " isinya buah : " << buah << endl;
        nomer++;
    }
    return 0;
}