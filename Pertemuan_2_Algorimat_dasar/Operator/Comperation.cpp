#include<iostream>
using namespace std;
int main(){
    bool a = true, b = false , hasil;

    // and (&&)
    // and ini simpelnya kedua kondisi harus terpenuhi
    // |x|1|0|
    // |1|1|0|
    // |0|0|0|
    hasil = (a && b);
    cout << "Hasil : " << boolalpha << a << " Ketemu dengan (And) " << boolalpha << b << " : " << boolalpha << hasil << endl;
    // or (||)
    // or salah satu harus bener 
    // |x|1|0|
    // |1|1|1|
    // |0|1|0|
    hasil = (a || b);
    cout << "Hasil : " << boolalpha << a << " Ketemu dengan (Or) " << boolalpha << b << " : " << boolalpha << hasil << endl;

    // ! (not)
    hasil=(!a);
    cout << "Hasil : " << boolalpha << a << " Ketemu dengan (Not) : " << boolalpha << hasil << endl;

    int c = -3;
    int d = 3;
    // besar dari  (>)
    hasil = (c > d);
    cout << c << " apakah lebih besar dari (>) " << d << " : " << boolalpha << hasil << endl;
    hasil = (c < d);
    cout << c << " apakah lebih kecil dari (<) " << d << " : " << boolalpha << hasil << endl;
    hasil = (c == d); // ada bahasa pemograman yang === 
    cout << c << " apakah sama dari (==) " << d << " : " << boolalpha << hasil << endl;
    hasil = (c >= d); 
    cout << c << " apakah besar dari sama dengan (>=) " << d << " : " << boolalpha << hasil << endl;
    hasil = (c <= d); 
    cout << c << " apakah kecil dari sama dengan (<=) " << d << " : " << boolalpha << hasil << endl;
    return 0;
}