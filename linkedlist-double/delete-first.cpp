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

// Fungsi untuk menghapus node pertama dari linked list
void deleteFirst(Node*& head) {
    // Jika linked list kosong
    if (head == nullptr) {
        cout << "Linked list kosong, tidak ada yang dihapus" << endl;
        return;
    }
    // Simpan alamat node yang akan dihapus
    Node* temp = head;
    // Ubah head menjadi node setelahnya
    head = head->next;

    // Jika linked list head tidak null atau ada isinya
    if (head != nullptr) {
        head->prev = nullptr;
    }
    // Hapus node pertama
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
    // Inisialisasi pointer simpul
    Node* head = nullptr;

    head =  createNode(5);
    displayList(head);


    // Menambahkan satu node dengan nilai 5 ke linked list
    insertFirst(head, 7);
    // Menampilkan informasi tentang setiap node dalam linked list
    displayList(head);

    deleteFirst(head);
    displayList(head);

    return 0;
}
