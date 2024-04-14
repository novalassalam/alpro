#include <iostream>

// Menggunakan namespace std untuk menggunakan objek dan fungsi standar dari C++
using namespace std;

// Definisikan struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menghapus elemen setelah elemen dengan nilai tertentu dari linked list
void deleteAfter(Node* head, int value) {
    Node* prev = head;
    while (prev != nullptr && prev->data != value) { // Cari node dengan nilai value
        prev = prev->next;
    }
    if (prev != nullptr && prev->next != nullptr) {  // Jika node dengan nilai value ditemukan dan memiliki node setelahnya
        Node* target = prev->next;                  // Simpan node yang akan dihapus
        prev->next = target->next;              // Hubungkan node sebelumnya dengan node setelah node yang akan dihapus
        delete target;                              // Hapus node yang akan dihapus
    } else {
        cout << "Element with value " << value << " not found or does not have a node after it." << endl;
    }
}

// Fungsi untuk mencetak linked list
void printList(Node* head) {
    cout << "Linked list: ";
    Node* prev = head;
    while (prev != nullptr) {
        cout << prev->data << " "; // Mencetak data node
        prev = prev->next; // Pindah ke node selanjutnya
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
    
    // Menghapus elemen setelah 100
    deleteAfter(head, 100);
    
    // Mencetak linked list setelah penghapusan
    cout << "Linked list setelah penghapusan: ";
    printList(head);

    return 0;
}
