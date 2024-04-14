#include <iostream>

// Menggunakan namespace std untuk menggunakan objek dan fungsi standar dari C++
using namespace std;

// Definisikan struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menghapus elemen terakhir dari linked list
void deleteLast(Node*& head) {
    if (head == nullptr) { // Jika linked list kosong
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (head->next == nullptr) { // Jika linked list hanya memiliki satu elemen
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != nullptr) {       // Melakukan traversal hingga node terakhir
        prev = temp;
        temp = temp->next;
    }
    delete temp;                         // Menghapus node terakhir
    if (prev != nullptr) {
        prev->next = nullptr;           // Menandai akhir linked list jika bukan elemen pertama
    } else {
        head = nullptr;               // Menandai akhir linked list jika elemen pertama
    }
}

// Fungsi untuk mencetak linked list
void printList(Node* head) {
    cout << "Linked list: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " "; // Mencetak data node
        temp = temp->next; // Pindah ke node selanjutnya
    }
    cout << endl;
}

int main() {
    // Membuat linked list secara manual
    Node* head = new Node; // Membuat node pertama
    head->data = 100; // Mengisi data node pertama
    head->next = new Node; // Membuat node kedua
    head->next->data = 84; // Mengisi data node kedua
    head->next->next = new Node; // Membuat node ketiga
    head->next->next->data = 70; // Mengisi data node ketiga
    head->next->next->next = nullptr; // Menandai akhir linked list dengan nullptr
    
    // Mencetak linked list sebelum penghapusan
    cout << "Linked list sebelum penghapusan: ";
    printList(head);
    
    // Menghapus elemen terakhir
    deleteLast(head);
    
    // Mencetak linked list setelah penghapusan
    cout << "Linked list setelah penghapusan: ";
    printList(head);

    return 0;
}
