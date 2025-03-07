#include <iostream>

using namespace std;

// Struktur Node untuk stack
struct tElmtStack {
    int data;
    tElmtStack* next;
};

typedef struct tElmtStack Stack;

// Inisialisasi TOP
Stack* TOP = nullptr;

// Fungsi untuk mengecek apakah stack kosong
bool isEmpty() {
    return TOP == nullptr;
}

// Fungsi untuk push (menambahkan elemen di akhir stack)
void push(int data) {
    Stack* newNode = new Stack;
    newNode->data = data;
    newNode->next = nullptr;
    if (isEmpty()) {
        TOP = newNode;
    } else {
        Stack* current = TOP;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    cout << "Pushed: " << data << endl;
}

// Fungsi untuk pop (menghapus elemen dari akhir stack)
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong, tidak ada yang di-pop" << endl;
        return;
    }

    if (TOP->next == nullptr) {
        cout << "Popped: " << TOP->data << endl;
        delete TOP;
        TOP = nullptr;
    } else {
        Stack* current = TOP;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        cout << "Popped: " << current->next->data << endl;
    }
}

// Fungsi untuk menampilkan stack
void displayStack() {
    if (isEmpty()) {
        cout << "Stack kosong" << endl;
        return;
    }
    Stack* current = TOP;
    cout << "Isi stack:" << endl;
    while (current != nullptr) {
        cout << "Alamat: " << current << endl;
        cout << "Nilai: " << current->data << endl;
        cout << "Alamat next: " << current->next << endl << endl;
        current = current->next;
    }
    cout << endl << "---------------------------------------" <<endl;
}

int main() {
    // Memastikan stack kosong
    if (isEmpty()) {
        cout << "Stack baru saja diinisialisasi dan kosong." << endl;
    }

    // Push beberapa elemen ke dalam stack
    push(10);
    push(20);
    push(30);

    // Menampilkan isi stack
    displayStack();

    // Pop beberapa elemen dari stack
    pop();
    displayStack();

    pop();
    displayStack();

    pop();
    displayStack();

    // Coba pop dari stack kosong
    pop();

    return 0;
}