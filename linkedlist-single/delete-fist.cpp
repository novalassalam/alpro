#include <iostream>

// Menggunakan namespace std untuk menggunakan objek dan fungsi standar dari C++
using namespace std;

// Definisikan struktur node
struct Node {
    int data;
    Node* next;
};

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
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " "; // Mencetak data node
        temp = temp->next; // Pindah ke node selanjutnya
    }
    cout << endl;
    
    // Menghapus elemen pertama

    if (head) {
        Node* temp = head; // Simpan alamat node pertama
        head = head->next; // Pindah head ke node kedua
        delete temp;      // Hapus node pertama
    } else {
        cout << "List is empty, nothing to delete." << endl; // Tampilkan pesan jika list kosong
    }
    
    // Mencetak linked list setelah penghapusan
    cout << "Linked list setelah penghapusan: ";
    temp = head; // Reset pointer temp ke head
    while (temp != nullptr) {
        cout << temp->data << " "; // Mencetak data node
        temp = temp->next; // Pindah ke node selanjutnya
    }
    cout << endl;
    
    return 0;
}
