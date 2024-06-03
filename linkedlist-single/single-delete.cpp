#include <iostream>

using namespace std;

// Definisi struktur node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan node di awal (insert head)
void insertHead(Node* &head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk menambahkan node di akhir (insert tail)
void insertTail(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Fungsi untuk menambahkan node setelah node tertentu (insert after)
void insertAfter(Node* prevNode, int data) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Fungsi untuk menghapus node di awal (hapus head)
void deleteHead(Node*& head) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete head." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Fungsi untuk menghapus node di akhir (hapus tail)
void deleteTail(Node*& head) {
    if (head == nullptr) {
        cout << "Linked list is empty. Cannot delete tail." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* prev = nullptr;
    Node* curr = head;
    while (curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }
    delete curr;
    prev->next = nullptr;
}

// Fungsi untuk menghapus node setelah node tertentu (hapus after)
void deleteAfter(Node* prevNode) {
    if (prevNode == nullptr || prevNode->next == nullptr) {
        cout << "Cannot delete. Previous node is null or next node is null." << endl;
        return;
    }
    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    delete temp;
}

// Fungsi untuk mencetak isi linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; // Inisialisasi linked list kosong

    // Menambahkan node di awal (insert head)
    insertHead(head, 3);
    insertHead(head, 2);
    insertHead(head, 1);

    cout << "Linked List setelah insert head: ";
    printList(head);

    // Menambahkan node di akhir (insert tail)
    insertTail(head, 4);
    insertTail(head, 5);

    cout << "Linked List setelah insert tail: ";
    printList(head);

    // Menambahkan node setelah node tertentu (insert after)
    Node* prevNode = head->next; // Misalnya, setelah node dengan data 2
    insertAfter(prevNode, 2.5);

    cout << "Linked List setelah insert after: ";
    printList(head);

    // Menghapus node di awal (hapus head)
    deleteHead(head);

    cout << "Linked List setelah delete head: ";
    printList(head);

    // Menghapus node di akhir (hapus tail)
    deleteTail(head);

    cout << "Linked List setelah delete tail: ";
    printList(head);

    // Menghapus node setelah node tertentu (hapus after)
    prevNode = head->next; // Misalnya, setelah node dengan data 2.5
    deleteAfter(prevNode);

    cout << "Linked List setelah delete after: ";
    printList(head);

    return 0;
}
