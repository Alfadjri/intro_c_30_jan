#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisialisasi
    fstream database("safe_file_game.txt",ios::in);
    if(!database.is_open()){
        cout << "File tidak di temukan !!!" << endl;
        return 0;
    }
    string line = "Pesan datang";
    string nama;
    database << line << endl;
    cout << "File berhasil di tulis" << endl;
    cout << "Isi dalam database" << endl;
    while(getline(database,nama)){
        cout << nama << endl;
    }
    database.close();
    cout << "Selamat tinggal " << endl;
    return 0;
}