#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};

// Fungsi untuk menyisipkan node baru di akhir linked list
void insertLast(Node* &head, int newData) {
    Node* newNode = new Node;   // Membuat node baru
    newNode->data = newData;    // Menetapkan data untuk node baru
    newNode->next = nullptr;    // Mengatur next node baru ke nullptr (karena ini akan menjadi node terakhir)

    if (head == nullptr) {      // Jika linked list masih kosong, node baru akan menjadi head
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) { // Mencari node terakhir dalam linked list
            current = current->next;
        }
        current->next = newNode;    // Mengaitkan node baru di akhir linked list
    }
}

int main() {
    // Membuat node baru dengan data kosong dan next kosong
    Node* newNode = new Node;
    newNode->data = 0;   // Mengatur data ke 0 (kosong)
    newNode->next = nullptr; // Mengatur next ke nullptr (kosong)

    // Menampilkan informasi node baru
    cout << "Data baru pada node: " << newNode->data << endl;
    if (newNode->next == nullptr) {
        cout << "Node baru tidak memiliki node selanjutnya" << endl;
    }

    // Memasukkan node baru di akhir linked list
    insertLast(newNode, 10);
    insertLast(newNode, 20);

    // Menampilkan data dari linked list
    cout << "Data pada linked list:" << endl;
    while (newNode != nullptr) {
        cout << newNode->data << " ";
        newNode = newNode->next;  // Beralih ke node berikutnya
    }
    cout << endl;


    return 0;
}
