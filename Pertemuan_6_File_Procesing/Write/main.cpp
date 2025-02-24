#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisialisasi
    fstream database("save_file.txt",ios::out);
    if(!database.is_open()){
        cout << "File tidak dapat di buat !!!" << endl;
        return 0;
    }
    database << "ini pesan rahasia yang saya buat\n";
    database.close();
    return 0;
}