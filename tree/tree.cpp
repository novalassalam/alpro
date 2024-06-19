#include <iostream>
using namespace std;

struct ListNode {
    char val;
    ListNode* prev;
    ListNode* next;

    ListNode(char x) : val(x), prev(nullptr), next(nullptr) {}
};


int main() {
    ListNode* head = new ListNode('H'); //root
    head->prev = new ListNode('A'); //child left
    head->next = new ListNode('K'); //child left
    head->prev->next = new ListNode('C'); //LEAF left



    cout<< "root : "<< head->val << endl;
    cout<< "child 1 (left) : "<< head->prev->val << endl;
    cout<< "child 2 (right) : "<< head->next->val << endl;
    cout<< "leaf kiri 1 : "<< head->prev->next->val << endl;
    return 0;
}
