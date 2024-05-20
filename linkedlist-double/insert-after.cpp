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

// Fungsi untuk menyisipkan node sebagai elemen pertama dalam linked list
void insertFirst(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Fungsi untuk menyisipkan node setelah node dengan nilai tertentu dalam linked list
void insertAfter(Node* head, int valueToInsertAfter, int data) {
    // Mulai pencarian dari head
    Node* current = head;
    // Mencari node dengan nilai yang sesuai
    while (current != nullptr && current->data != valueToInsertAfter) {
        current = current->next;
    }
    // Jika node dengan nilai yang sesuai tidak ditemukan
    if (current == nullptr) {
        cout << "Node dengan nilai " << valueToInsertAfter << " tidak ditemukan" << endl;
        return;
    }
    // Membuat node baru
    Node* newNode = createNode(data);
    // Menyisipkan node baru setelah node dengan nilai yang sesuai
    newNode->next = current->next; // Mengatur next dari node baru
    newNode->prev = current; // Mengatur prev dari node baru
    current->next = newNode; // Mengatur next dari node yang sebelumnya menunjuk ke node baru
    // Mengatur prev dari node yang berada setelah node baru, jika ada
    if (newNode->next != nullptr) {
        newNode->next->prev = newNode;
    }
}



// Fungsi untuk menampilkan informasi tentang setiap node dalam linked list
void displayList(Node* head) {
    Node* current = head;
    cout << "Informasi tentang setiap node:" << endl;
    while (current != nullptr) {
        cout << "Alamat: " << current << endl;
        cout << "Nilai: " << current->data << endl;
        cout << "Alamat prev: " << current->prev << endl;
        cout << "Alamat next: " << current->next << endl <<endl ;
        current = current->next;
    }
        cout << "---------------------------------------" <<endl;

}

int main() {
    // Inisialisasi pointer simpul
    Node* head = nullptr;

    // Menambahkan satu node dengan nilai 5 ke linked list sebagai elemen pertama
    head =  createNode(5);
    displayList(head);

    // Menambahkan satu node dengan nilai 10 ke linked list sebagai elemen terakhir
    insertFirst(head, 7);
    displayList(head);

    // Menambahkan satu node dengan nilai 8 setelah node dengan nilai 10
    insertAfter(head, 7, 8);

    // Menampilkan informasi tentang setiap node dalam linked list
    displayList(head);

    return 0;
}
