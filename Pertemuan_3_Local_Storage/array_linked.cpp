#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

int main(){
    // inisialiasi
    Node* head = nullptr;
    Node* second = nullptr;
    Node* thread = nullptr;

    // membuat isi 
    head = new Node();
    second = new Node();
    thread = new Node();

    // isi
    head->data = 1;
    head->next = second;

    second-> data = 2;
    second->next = thread;

    thread-> data = 3;
    thread->next = nullptr;

    Node* masinis = head;

    // read
    cout << "Apa aja yang ada di gerbong : "<< endl;
    while (masinis != nullptr)
    {
        cout << "Data yang ada : " << masinis->data << endl;
        cout << "Posisi Lokomitif : " << masinis->next << endl;
        masinis = masinis->next;
    }
    delete head;
    delete second;
    delete thread;
    cout << "Apa aja yang ada di gerbong setelah di delete : "<< endl;
    while (masinis != nullptr)
    {
        cout << "Data yang ada : " << masinis->data << endl;
        cout << "Posisi Lokomitif : " << masinis->next << endl;
        masinis = masinis->next;
    }

    



    return 0;
}