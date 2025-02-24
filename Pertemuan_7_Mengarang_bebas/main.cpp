#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

class messagePark1{
    public:
    string getPart() {
        return "Trimkaiash sudah belajar";
    }
};
class messagePark2{
    public:
    string getPart() {
        return "sampai bertemuan di pertemuan";
    }
};
class messagePark3{
    public:
    string getPart() {
        return "atau di materi berikutnya";
    }
};
class messagePark4{
    public:
    string getPart() {
        return "Salam Codingstudio";
    }
};

class CessarChiper{
    private :
        int shift;
    public : 
        CessarChiper(int s) : shift(s){}
    
    string encript(string text){
        string result = "";
        for(char c : text){
            result += char((unsigned char) c + shift);
        }
        return result;
    }
    string decript(string text){
        string result = "";
        for(char c : text){
            result += char((unsigned char) c - shift);
        }
        return result;
    }

    int getShift() { return shift;}
};

class Game{
    private:
        CessarChiper* cipher;
        string secretMessage;
        string encryptedMessage;
        int attempts;
    public :
        Game(int difficulty){
            srand(time(0));

            int shift;

            if(difficulty == 1) {
                shift = rand() % 10 + 1 ;
            }else if (difficulty == 2) {
                shift = rand() % 50 + 1 ;
            }else{
                shift = rand() % 255 + 1 ;
            }

            // pesan 
            cipher = new CessarChiper(shift);

            messagePark1 park1;
            messagePark2 park2;
            messagePark3 park3;
            messagePark4 park4;

            secretMessage = park1.getPart() + park2.getPart() + park3.getPart() + park4.getPart() ;
            // hapus kalau udah beres
            cout << "Kunci jawaban : " << secretMessage << endl;
            encryptedMessage = cipher->encript(secretMessage);
            attempts = 3;
        }

        void play(){
            cout << "Selamat datang di Permainan :" << endl;
            cout << "Pesan terenkripsi : " << encryptedMessage << endl;
            cout << "Pergeseran : " << cipher->getShift() << endl;

            while(attempts > 0){
                string userGuess;
                cout << "Masukan tebakan pesan asli : ";
                getline(cin, userGuess);
                if (userGuess == secretMessage){
                    cout << "Selamat ! kamu berhasil memecahkan pesan rahasia ini !" << endl;
                    return;
                }else{
                    attempts--;
                    if(attempts > 0){
                        cout << "Salah ! Coba lagi . sisi pecobaan : " << attempts <<endl;
                    }else{
                        cout << "Selamat komputer kamu kenak virus silahkan install ulang !!!" <<endl;
                        // bikin fungsi yang berbahya 
                    }
                }
            }
        };
        ~Game(){
            delete cipher;
        }
};


int main(){
    int level ;
    cout << "Pilih tingkat kesulitan (1 : mudah , 2: medium , 3: sulit) : " ;
    cin >> level;
    cin.ignore();

    Game game(level);
    game.play();

    return 0;
}