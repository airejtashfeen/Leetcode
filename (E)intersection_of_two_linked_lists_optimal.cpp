#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1 = headA;
        ListNode* d2 = headB;
        
        while (d1 != d2) {
            if (d1 == NULL) {
                d1 = headB;
            } else {
                d1 = d1->next;
            }

            if (d2 == NULL) {
                d2 = headA;
            } else {
                d2 = d2->next;
            }
        }

        return d1;
    }
};

void printList(ListNode* head) {
    while (head != NULL) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating the intersecting linked lists
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);

    ListNode* headB = new ListNode(6);
    headB->next = new ListNode(7);
    headB->next->next = headA->next->next->next; // Intersection at node with value 4

    Solution solution;
    ListNode* intersection = solution.getIntersectionNode(headA, headB);

    if (intersection != NULL) {
        std::cout << "The intersection node's value is " << intersection->val << std::endl;
    } else {
        std::cout << "The lists do not intersect." << std::endl;
    }

    // Clean up memory
    delete headA->next->next->next->next;
    delete headA->next->next->next;
    delete headA->next->next;
    delete headA->next;
    delete headA;
    delete headB->next;
    delete headB;

    return 0;
}
