#include<iostream>
using namespace std;

int main(){
    int a = 10 , b = 5;
    // if (jika)
    // format dasarnya 
    // if(Kondisi atau comparasi){
    //   jika kondisi nya terpenuhi atau tidak sesuai sarat komper yang kamu berikan 
    // kamu mau lakukan apa di dalam sesi ini
    //}
    // contoh anka ganjil (1,3,5,....)
    // jika nilai memiliki sisa pembagian dari 2 
    // rumus dasarnya hasil = nilai % 2 
    cout << "=========if=========" << endl;
    if ( (b % 2) == 1){
        cout << "B adalah bilangan ganjil" << endl;
    }

    cout << "=========if-else=========" << endl;
    if ( (a % 2) == 1){
        cout << "B adalah bilangan ganjil" << endl;
    }else{
        cout << "B bukan bilangan ganjil" << endl;
    }

    cout << "=========else if =========" << endl;
    if ( (a % 2) == 1)
    {
        cout << "B adalah bilangan ganjil" << endl;
    }
    else if ((a % 2) == 0 && (b % 2) == 1)
    {   
        cout << "a dalah bilangan ganjil" << endl;
    }
    else
    {
        cout << "Gak ada pilihannya bos " << endl;
    }

    // switch case
    // khusus untuk menu atau nilai yang yakin banget nilainya seperti itu
    char nilai = 'A';

    switch(nilai){
        case 'A':
            cout << "Selamat kamu lulus dengan nilai sempurna" << endl;
        break;
        case 'B':
            cout << "Selamat kamu lulus tapi nilai nya pas-pasan" << endl;
        break;
        default:
            cout << "Nilai kamu tidak terdaftar" << endl;
            break;
    }

    return 0;
}