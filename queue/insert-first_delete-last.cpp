#include <iostream>

using namespace std;

// Struktur Node untuk queue
struct Qnode {
    int data;
    Qnode* next;
};

// Struktur List untuk menyimpan head dan tail dari queue
struct List {
    Qnode* head;
    Qnode* tail;
};

// Inisialisasi queue
List queue = {nullptr, nullptr};

// Fungsi untuk mengecek apakah queue kosong
bool IsEmpty() {
    return queue.head == nullptr;
}

// Fungsi untuk mengecek apakah queue penuh (tidak relevan untuk linked list, jadi selalu false)
bool IsFull() {
    return false;
}

// Fungsi untuk enqueue (menambahkan elemen di awal queue)
void Enqueue(int data) {
    Qnode* newNode = new Qnode;
    newNode->data = data;
    newNode->next = queue.head;

    if (IsEmpty()) {
        queue.head = newNode;
        queue.tail = newNode;
    } else {
        queue.head = newNode;
    }
    cout << "Enqueued: " << data << endl;
}

// Fungsi untuk dequeue (menghapus elemen dari akhir queue)
void Dequeue() {
    if (IsEmpty()) {
        cout << "Queue kosong, tidak ada yang di-dequeue" << endl;
        return;
    }

    if (queue.head == queue.tail) { // Jika hanya ada satu elemen di queue
        cout << "Dequeued: " << queue.tail->data << endl;
        delete queue.tail;
        queue.head = nullptr;
        queue.tail = nullptr;
    } else {
        Qnode* current = queue.head;
        while (current->next != queue.tail) {
            current = current->next;
        }
        cout << "Dequeued: " << queue.tail->data << endl;
        delete queue.tail;
        queue.tail = current;
        queue.tail->next = nullptr;
    }
}

// Fungsi untuk menampilkan isi queue
void displayQueue() {
    if (IsEmpty()) {
        cout << "Queue kosong" << endl;
        return;
    }
    Qnode* current = queue.head;
    cout << "Isi queue:" << endl;
    while (current != nullptr) {
        cout << "Alamat: " << current << endl;
        cout << "Nilai: " << current->data << endl;
        cout << "Alamat next: " << current->next << endl << endl;
        current = current->next;
    }
    cout << endl << "---------------------------------------" <<endl;
}

int main() {
    // Memastikan queue kosong
    if (IsEmpty()) {
        cout << "Queue baru saja diinisialisasi dan kosong." << endl;
    }

    // Enqueue beberapa elemen ke dalam queue
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);

    // Menampilkan isi queue
    displayQueue();

    // Dequeue beberapa elemen dari queue
    Dequeue();
    displayQueue();

    Dequeue();
    displayQueue();

    Dequeue();
    displayQueue();

    // Coba dequeue dari queue kosong
    Dequeue();

    return 0;
}
