#include<iostream>
using namespace std;

class Mobil{
    private:
        string merek_mobil = "default"; // private
    public:
        Mobil(string nama_merek){
            this->merek_mobil = nama_merek;
        }
        //get teknik
        string getMerek(){ // get (nama lain ambil nilai)
            return this->merek_mobil;
        }
        // seter and geter
        // set teknik
        void setMerek(string nama_merek){ // set (POST bisa juga bilang setting)
            this->merek_mobil = nama_merek;
        }
};

int main(){
    Mobil honda("Honda");
    cout << "Merek mobil ini apa  ? " << honda.getMerek() << endl;
    honda.setMerek("Toyota");
    cout << "Merek mobil ini apa  ? " << honda.getMerek() << endl;
    return 0;
}