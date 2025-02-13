#include<iostream>
#include<map> // ini lib atau pakage atau header
using namespace std;
// function
// function mati atau tidak mengeluarkan apapun (void)
void show_data(string pesan , map<int,string> data){
    cout << pesan << endl;
    for(const auto& value : data){
        cout << "|" << value.first << "|\t" << value.second << "\t|\t" << endl;
    }
}
// function yang mengeluarkan hasil
int penjumlahan(int a , int b){
    return a + b;
}

int main(){
    // inisialasiai
    map<int,string> tree_map;
    // cara isi nya 
    tree_map[2] = "Dua";
    tree_map[1] = "Satu";
    tree_map[3] = "Tiga";
    tree_map[4] = "Empat";
    tree_map[5] = "Lima";

    show_data("All data", tree_map);

    // print 1 buah saja misal saya mau ambil nomer 3
    cout << "value nomer 3 itu apa ? : " << tree_map[3] << endl;
    // update
    tree_map[3] = "Ayam";
    show_data("Setelah di update",tree_map);
    // delete
    tree_map.erase(3);
    tree_map.erase(3);
    show_data("Setelah di hapus" , tree_map);
    return 0;
}