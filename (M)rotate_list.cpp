#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        int length = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
            length++;
        }

        k = k % length;

        if (k == 0) {
            return head; 
        }
        
        for (int i = 0; i < k; i++) {
            ListNode* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }

            ListNode* tailNode = temp->next;
            temp->next = NULL;
            tailNode->next = head;
            head = tailNode;
        }

        return head;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2; // Rotate right by 2 positions

    Solution sol;
    ListNode* rotatedHead = sol.rotateRight(head, k);

    std::cout << "Original List: ";
    printList(head);

    std::cout << "Rotated List: ";
    printList(rotatedHead);

    // Clean up memory (optional but good practice)
    while (rotatedHead != NULL) {
        ListNode* temp = rotatedHead;
        rotatedHead = rotatedHead->next;
        delete temp;
    }

    return 0;
}
