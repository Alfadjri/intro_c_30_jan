#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // inisialisasi
    fstream database("../Write/save_file.txt",ios::app);
    if(!database.is_open()){
        cout << "File tidak di temukan !!!" << endl;
        return 0;
    }
    database << "File di update\n";
    database.close();
    return 0;
}