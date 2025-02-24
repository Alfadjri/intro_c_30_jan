#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisialisasi
    fstream database("../Write/save_file.txt",ios::in);
    if(!database.is_open()){
        cout << "File tidak di temukan !!!" << endl;
        return 0;
    }
    string line;
    cout << "Saya sedang membaca file ini !" << endl;
    while(getline(database,line)){
        cout << line << endl;
    }

    return 0;
}