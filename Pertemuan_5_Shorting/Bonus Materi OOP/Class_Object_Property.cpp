#include<iostream>
using namespace std;

class Mobil { // class
    public: // property
        string nama = "default"; // object
        string tipe = "default";
        Mobil(string nama_mobil, string tipe_mobil){ // construktor
            this->nama = nama_mobil;
            this->tipe = tipe_mobil;
        }
        // method
        string getTahun(){
            string tahun = std::to_string(this->tahun_production) + " Tahun";
            return tahun;
        }
    private:
        int tahun_production = 2024; // enkapsulasi
};

int main(){
    // inisilaisai
    Mobil honda("HONDA","CIVIC");
    Mobil toyota("TOYOTA","SUPRA");
    cout << "Merek Mobil saat ini :" << endl;
    cout << "Nama : " << honda.nama << endl;
    cout << "TIPE : " << honda.tipe << endl;
    cout << "Nama : " << toyota.nama << endl;
    cout << "TIPE : " << toyota.tipe << endl;
    toyota.tipe = "AVANZA";
    cout << "Nama : " << toyota.nama << endl;
    cout << "TIPE : " << toyota.tipe << endl;
    cout << "Tahun: " << toyota.getTahun() << endl;

    return 0;
}