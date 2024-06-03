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

// Fungsi untuk enqueue (menambahkan elemen di akhir queue)
void Enqueue(int data) {
    Qnode* newNode = new Qnode;
    newNode->data = data;
    newNode->next = nullptr;

    if (IsEmpty()) {
        queue.head = newNode;
        queue.tail = newNode;
    } else {
        queue.tail->next = newNode;
        queue.tail = newNode;
    }
    cout << "Enqueued: " << data << endl;
}

// Fungsi untuk dequeue (menghapus elemen dari awal queue)
void Dequeue() {
    if (IsEmpty()) {
        cout << "Queue kosong, tidak ada yang di-dequeue" << endl;
        return;
    }
    Qnode* temp = queue.head;
    queue.head = queue.head->next;
    if (queue.head == nullptr) { // Jika queue menjadi kosong setelah dequeue
        queue.tail = nullptr;
    }
    cout << "Dequeued: " << temp->data << endl;
    delete temp;
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
