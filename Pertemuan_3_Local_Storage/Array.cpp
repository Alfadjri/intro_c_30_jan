#include<iostream>
using namespace std;
void show_data(string pesan , string data[5], int size){
    cout << pesan << endl;
    for(int i = 0 ; i < size ; i++){
        cout << "|" << i << "|\t" << data[i] << "\t|\t" << endl;
    }
}

int main(){
    // array atau vector (C)
    // inisialisasi
    const int size = 5;
    string buah[size] = {"semangka","melon","apple","pisang","nanas"};
    show_data("Data setelah di buat " ,buah,size);
    // read 1 value
    cout << "index ke 2 : " << buah[2] << endl;

    // update gimana ? 
    buah[2] = "anggur";
    show_data("Data setlah di update " ,buah,size);
    // delete
    buah[3] = "";
    show_data("Data setlah di hapus " ,buah,size);


    return 0;
}