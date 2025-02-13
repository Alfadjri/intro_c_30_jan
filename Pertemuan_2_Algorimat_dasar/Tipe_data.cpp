#include<iostream>
using namespace std;

int main(){
    // tipe ata primitif
    // integer bilangan bulat;
    int integerNumber = 3278; // bit atau bit itu terdiri dari 0 atau 1  16digit
    short shortNumber = 9999;
    long longNumber = 123456789; 
    long long verylongNumber = 9876543210;

    cout << "Tipe data bilangan bulat" << endl;
    cout << "Integer Number : " << integerNumber << endl;
    cout << "short Number : " << shortNumber << endl;
    cout << "long Number : " << longNumber << endl;
    cout << "long long Number : " << verylongNumber << endl;
    cout << endl;

    // tipe data koma atau tipe data desimal
    float floatNumber = 3.14f;
    double doubleNumber = 2.718828;
    long double verylongDoubleNumber = 1.6180339887;

    cout << "Tipe data bilangan desimal" << endl;
    cout << "float Number : " << floatNumber << endl;
    cout << "double Number : " << doubleNumber << endl;
    cout << "long double Number : " << verylongDoubleNumber << endl;
    cout << endl;

    // karkater
    char karakter = 'A';
    cout << "Tipe data karakter" << endl;
    cout << "Karakter : " << karakter << endl;

    // boolean
    // cuman dua nilai True (1) atau False (0) // bisa nama lain nya binary 
    bool boolean = 1;
    cout << "Tipe data boolean tampa booleanalpha : " << boolean << endl;
    cout << "Tipe data boolean : " << boolalpha << boolean << endl;

    // tipe data nonprimitf
    char nama[255] = "Alfadjri Dwi Fadhilah";
    cout << "Nama saya : " << nama << endl;
    // string (str)
    string namaLengkap = "Alfadjri Dwi Fadhilah";
    cout << "Nama saya (str): " << namaLengkap << endl;
    return 0;
}