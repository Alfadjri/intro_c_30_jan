#include<iostream>
using namespace std;

int main(){
    // penyimpanan semenara hanya 1 nilai 
    // variabel
    // format dasar
    // tipe_data namaVariabel
    string nama;
    cout << "Masukan nama anda : ";
    // cin >> nama;
    getline(cin,nama);
    cin.ignore();
    cout << "Hello " << nama << " Selamat datang di program pertama" << endl;
    return 0;
}