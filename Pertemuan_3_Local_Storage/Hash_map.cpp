#include<iostream>
#include<unordered_map>
using namespace std;

void show_data(string pesan , unordered_map<int,string> data){
    cout << pesan << endl;
    for(const auto& value : data){
        cout << "|" << value.first << "|\t" << value.second << "\t|\t" << endl;
    }
}

int main(){
    // inisilisasi
    unordered_map<int,string> hash_map;

    // add value
    hash_map[1] = "One";
    hash_map[4] = "Tree";
    hash_map[2] = "Two";
    hash_map[3] = "Tree";
    hash_map[5] = "Five";
    show_data("Data setelah di isi : " , hash_map);

    // update
    // drop dulu , baru di create ulang

    // materi 
    // database 
    // insert , drop, update , delete, select
    // CRUD (Create , Read , Update , Delete)
    hash_map[4] = "Fore";
    show_data("Data setelah di update : " , hash_map);
    // read 1 value
    cout << "Value dari index ke 5 : " << hash_map[5] << endl;
    // delete value
    hash_map.erase(5);
    show_data("Data setelah di hapus : " , hash_map);
    return 0;
}