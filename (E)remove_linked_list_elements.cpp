#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* current = head;
        while(current != NULL && current->next != NULL) {
            if(current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};

// Helper function to create a new node
ListNode* createNode(int val) {
    return new ListNode(val);
}

// Helper function to print the list
void printList(ListNode* head) {
    ListNode* current = head;
    while(current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

// Helper function to delete the list and free memory
void deleteList(ListNode* head) {
    while(head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Create a linked list 1->2->6->3->4->5->6
    ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(6);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(4);
    head->next->next->next->next->next = createNode(5);
    head->next->next->next->next->next->next = createNode(6);

    cout << "Original list: ";
    printList(head);

    // Remove all elements with value 6
    Solution solution;
    head = solution.removeElements(head, 6);

    cout << "Modified list after removing 6: ";
    printList(head);

    // Clean up the remaining list
    deleteList(head);

    return 0;
}
