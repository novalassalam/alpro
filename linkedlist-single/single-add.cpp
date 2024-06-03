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
void insertTail(Node* &head, int data) {
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

    return 0;
}
