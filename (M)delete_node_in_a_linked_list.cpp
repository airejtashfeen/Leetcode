#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Helper function to delete the entire linked list and free memory
void deleteList(ListNode* &head) {
    ListNode* current = head;
    while (current != NULL) {
        ListNode* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = NULL;
}

int main() {
    // Creating the linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original List: ";
    printList(head);

    // Deleting the node with value 3
    ListNode* nodeToDelete = head->next->next; // Node with value 3
    Solution solution;
    solution.deleteNode(nodeToDelete);

    std::cout << "List after deleting node with value 3: ";
    printList(head);

    // Clean up memory
    deleteList(head);

    return 0;
}
