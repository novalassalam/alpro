#include <iostream>
#include <queue>
using namespace std;

// Struktur untuk Node Double Linked List
struct ListNode {
    int data;
    ListNode* prev;
    ListNode* next;
    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Struktur untuk Node Binary Tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Fungsi untuk mengubah Double Linked List menjadi Binary Tree
TreeNode* convertToBinaryTree(ListNode* head) {
    if (!head) return nullptr;

    // Buat root dari binary tree
    TreeNode* root = new TreeNode(head->data);

    // Queue untuk membantu proses level-order
    queue<TreeNode*> q;
    q.push(root);

    ListNode* curr = head->next;

    while (curr) {
        // Ambil node dari queue
        TreeNode* parent = q.front();
        q.pop();

        // Buat left child dari parent
        TreeNode* leftChild = new TreeNode(curr->data);
        parent->left = leftChild;
        q.push(leftChild);

        curr = curr->next;
        if (curr) {
            // Buat right child dari parent
            TreeNode* rightChild = new TreeNode(curr->data);
            parent->right = rightChild;
            q.push(rightChild);

            curr = curr->next;
        }
    }
    return root;
}

// Fungsi untuk mencetak binary tree dalam format inorder
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Fungsi utama
int main() {
    // Membuat double linked list
    ListNode* head = new ListNode(10);
    head->next = new ListNode(12);
    head->next->prev = head;
    head->next->next = new ListNode(15);
    head->next->next->prev = head->next;
    head->next->next->next = new ListNode(25);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new ListNode(30);
    head->next->next->next->next->prev = head->next->next->next;
    head->next->next->next->next->next = new ListNode(36);
    head->next->next->next->next->next->prev = head->next->next->next->next;

    // Mengubah double linked list menjadi binary tree
    TreeNode* root = convertToBinaryTree(head);

    // Mencetak binary tree
    cout << "Inorder traversal of the constructed binary tree is: ";
    inorder(root);
    cout << endl;

    return 0;
}
