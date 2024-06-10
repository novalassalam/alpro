#include <iostream>

using namespace std;

// Struktur Node untuk queue
struct Qnode {
    int data;
    Qnode* next;
};

// Struktur List untuk menyimpan head dan front dari queue
struct List {
    Qnode* head;//buat manggil
    Qnode* front;
    Qnode* rear;
};

// Inisialisasi queue
List queue = {nullptr, nullptr, nullptr}; //head, front, rear

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
        queue.front = newNode;
        queue.rear = newNode;
    } else {
        queue.head = newNode;
        queue.rear = newNode;
    }
    cout << "Enqueued: " << data << endl;

}

// Fungsi untuk dequeue (menghapus elemen dari akhir queue)
void Dequeue() {

    if (IsEmpty()) {
        cout << "Queue kosong, tidak ada yang di-dequeue" << endl;
        return;
    }


    if (queue.head->next == nullptr) { // Jika hanya ada satu elemen di queue
        cout << "Dequeued 1: " << queue.rear->data << endl;
        Qnode* temp = queue.head;
        queue.head = nullptr;
        queue.rear = nullptr;
        queue.front = nullptr;
    }
    else {
        Qnode* current = queue.head;
        while (current->next != nullptr) {
            queue.front = current;
            current = current->next;
        }
        Qnode* temp = current;
        cout << "Dequeued 2: " << current->data << endl;
        queue.front->next = nullptr;
        delete temp;
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
        cout << "Front: " << queue.front->data << endl;
        cout << "Rear: " << queue.rear->data << endl;
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
    displayQueue();
    Enqueue(20);
    displayQueue();
    Enqueue(30);
    displayQueue();

    // // Dequeue beberapa elemen dari queue
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
