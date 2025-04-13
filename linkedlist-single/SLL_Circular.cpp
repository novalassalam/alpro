#include <iostream>
using namespace std;

// Definisi struktur node
struct Node {
    string data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};



int main() {
    // Membuat node-node awal dengan data
    Node* head = new Node; //node pertama tanpa '&' bisa karena 'new' mengembalikan alamat, disimpan di pointer 'head'
    cout << head << "Alamat Head" << endl;
    head->data = "ekonomi1";
    head->next = new Node; //2
    head->next->data = "ekonomi2";
    head->next->next = new Node; //3
    head->next->next->data = "ekonomi3";
    head->next->next->next = head;

    // Menampilkan isi linked list
    cout << "Isi linked list:" << endl;

    Node* current = head;

    do {
       cout << current->data << " " <<endl;
       cout << current->next << " " <<endl;
       current = current->next;
    } while(current != head);


    return 0;
}
