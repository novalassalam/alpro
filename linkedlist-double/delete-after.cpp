#include <iostream>
#include <cstdlib>
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


// Fungsi untuk menampilkan informasi tentang setiap node dalam linked list
void displayList(Node* head) {
    Node* current = head;
    cout << "Informasi tentang setiap node:" << endl;
    while (current != nullptr) {
        cout << "Alamat: " << current << endl;
        cout << "Nilai: " << current->data << endl;
        cout << "Alamat prev: " << current->prev << endl;
        cout << "Alamat next: " << current->next << endl << endl;
        current = current->next;
    }
    cout << "---------------------------------------" <<endl;
}

// Fungsi untuk menghapus node setelah node dengan nilai tertentu dari linked list
void deleteAfter(Node* head, int valueToDeleteAfter) {
    // Jika linked list kosong
    if (head == nullptr) {
        cout << "Linked list kosong, tidak ada yang dihapus" << endl;
        return;
    }

    Node* current = head;

    // Mencari node dengan nilai yang sesuai
    while (current != nullptr && current->data != valueToDeleteAfter) {
        current = current->next;
    }

    // Jika node dengan nilai yang sesuai tidak ditemukan
    if (current == nullptr || current->next == nullptr) {
        cout << "Node dengan nilai " << valueToDeleteAfter << " tidak ditemukan atau tidak memiliki node setelahnya" << endl;
        return;
    }

    // Simpan alamat node yang akan dihapus
    Node* temp = current->next;

    // Hubungkan node sebelumnya dengan node setelah yang akan dihapus
    current->next = temp->next;
    // Jika node setelah yang akan dihapus bukan node terakhir
    if (temp->next != nullptr) {
        temp->next->prev = current;
    }

    // Hapus node
    delete temp;
}



// Fungsi untuk menyisipkan node sebagai elemen pertama dalam linked list
void insertFirst(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode; // Jika linked list kosong, node baru menjadi head
    } else {
        newNode->next = head;
        head->prev = newNode; // Mengatur prev dari head menjadi node baru
        head = newNode; // Mengatur node baru sebagai head
    }
}

int main() {
    // Menggunakan sistem untuk membersihkan layar konsol
    system("clear");  // Untuk sistem Unix/Linux
    // system("cls"); // Untuk sistem Window

    // Inisialisasi pointer simpul
    Node* head = nullptr;

    head =  createNode(5);
    displayList(head);

    insertFirst(head, 7);
    displayList(head);

    insertFirst(head, 8);
    displayList(head);

    deleteAfter(head , 7);
    displayList(head);
    return 0;
}
