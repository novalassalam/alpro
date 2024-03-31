#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};

// Fungsi untuk menyisipkan node baru setelah node tertentu dalam linked list
void insertAfter(Node* node, int newData) {
    if (node == nullptr) {
        cout << "Error: Node tidak valid" << endl;
        return;
    }
    Node* newNode = new Node;   // Membuat node baru
    newNode->data = newData;    // Menetapkan data untuk node baru
    newNode->next = node->next; // Mengatur next node baru dengan node setelahnya
    node->next = newNode;       // Mengatur next dari node sebelumnya ke node baru
}

int main() {
    // Membuat node-node awal dengan data
    Node* head = new Node;
    head->data = 10;
    head->next = new Node;
    head->next->data = 20;
    head->next->next = new Node;
    head->next->next->data = 30;
    head->next->next->next = nullptr;

    // Memasukkan node baru setelah node pertama
    insertAfter(head->next, 25);

    // Menampilkan data dari linked list
    cout << "Data pada linked list:" << endl;
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;  // Beralih ke node berikutnya
    }
    cout << endl;

    return 0;
}
