#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};



int main() {
    // Membuat node-node awal dengan data
    Node* head = new Node;
    head->data = 10;
    head->next = new Node;
    head->next->data = 20;
    head->next->next = new Node;
    head->next->next->data = 30;
    head->next->next->next = nullptr;

    // Menampilkan isi linked list
    cout << "Isi linked list:" << endl;
    while (head != nullptr) {
        cout << head->data << " " <<endl;
        cout << head->next << " " <<endl;
        head = head->next;
    }

    return 0;
}
