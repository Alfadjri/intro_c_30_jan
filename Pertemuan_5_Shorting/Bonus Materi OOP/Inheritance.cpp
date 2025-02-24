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
            return this->merek_mobil + "Eits gak bisa di ganti";
        }
        // seter and geter
        // set teknik
        void setMerek(string nama_merek){ // set (POST bisa juga bilang setting)
            this->merek_mobil = nama_merek;
        }
};

class Lambo : public Mobil{
    private :
    string klakson;
    public:
    Lambo(string merek_mobil) : Mobil(merek_mobil){
        this->klakson = "Tet";
    }
    string getKelakson(){
        return this->klakson;
    }
};

class Ferari : public Mobil{
    private :
    string klakson;
    public:
    Ferari(string merek_mobil) : Mobil(merek_mobil){
        this->klakson = "TOD";
    }
    string getKelakson(){
        return this->klakson;
    }
};


int main(){
    Lambo lambo("Lamborgini");
    cout << "Merek mobil saya : " << lambo.getMerek() << endl;
    cout << "Kelakson mobil : " << lambo.getKelakson() << endl;
    return 0;
}