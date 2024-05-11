#include <iostream>

using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}


int main() {
    // Inisialisasi pointer simpul
    Node* head = nullptr;

    // Menambahkan satu node dengan nilai 5 ke linked list
    head =  createNode(5);

    // Menampilkan informasi tentang head
    cout << "Informasi tentang head:" << endl;
    cout << "Alamat: " << head << endl;    // Menampilkan nilai dari head
    cout << "Nilai: " << head->data << endl;    // Menampilkan nilai dari head
    cout << "Alamat prev: " << head->prev << endl; // Menampilkan alamat prev dari head (harusnya nullptr karena belum terhubung)
    cout << "Alamat next: " << head->next << endl; // Menampilkan alamat next dari head (harusnya nullptr karena belum terhubung)

    return 0;
}
