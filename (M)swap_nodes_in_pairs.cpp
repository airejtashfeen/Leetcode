#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* newHead = head->next;
        
        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            ListNode* nextNode = temp->next;

            temp->next = nextNode->next;
            nextNode->next = temp;
            if (prev != NULL) {
                prev->next = nextNode;
            }

            prev = temp;
            temp = temp->next;
        }
        
        return newHead;
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to create a linked list from an array
ListNode* createList(const std::initializer_list<int>& values) {
    if (values.size() == 0) return nullptr;

    ListNode* head = new ListNode(*values.begin());
    ListNode* current = head;

    for (auto it = values.begin() + 1; it != values.end(); ++it) {
        current->next = new ListNode(*it);
        current = current->next;
    }

    return head;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4
    ListNode* head = createList({1, 2, 3, 4});

    // Print the original list
    std::cout << "Original list: ";
    printList(head);

    // Swap pairs
    Solution sol;
    head = sol.swapPairs(head);

    // Print the modified list
    std::cout << "List after swapping pairs: ";
    printList(head);

    // Clean up memory (optional but good practice)
    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
