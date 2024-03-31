#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};


// Fungsi untuk menyisipkan node baru di awal linked list
void insertFirst(Node* &head, int newData) {
    Node* newNode = new Node;   // Membuat node baru
    newNode->data = newData;    // Menetapkan data untuk node baru
    newNode->next = head;       // Mengatur next node baru ke head (node pertama sebelumnya)
    head = newNode;             // Memperbarui head untuk menunjuk ke node baru
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

    insertFirst(newNode, 10);
    insertFirst(newNode, 20);

       // Menampilkan data dari linked list
    cout << "Data pada linked list:" << endl;

    while (newNode != nullptr) {
        cout << newNode->data << " ";
        cout << "alamat pointer " << newNode->next <<endl;
        newNode = newNode->next;  // Beralih ke node berikutnya
    }
    cout << endl;


    return 0;
}
