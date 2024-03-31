#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;   // Anggota untuk menyimpan data
    Node* next; // Anggota untuk menunjukkan ke node selanjutnya
};

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


    return 0;
}
