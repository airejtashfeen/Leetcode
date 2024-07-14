//NAIVE SOLUTION

#include <iostream>
#include <unordered_set>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*> hashSet;

        while (headA != NULL) {
            hashSet.insert(headA);
            headA = headA->next;
        }

        while (headB != NULL) {
            if (hashSet.find(headB) != hashSet.end()) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};

// Helper function to print the list from a given node
void printList(ListNode* node) {
    while (node != NULL) {
        std::cout << node->val << " -> ";
        node = node->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    // Create two lists
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    ListNode* intersection = new ListNode(8);
    intersection->next = new ListNode(4);
    intersection->next->next = new ListNode(5);
    headA->next->next = intersection;

    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(0);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersection;

    // Print both lists
    std::cout << "List A: ";
    printList(headA);

    std::cout << "List B: ";
    printList(headB);

    // Find intersection
    Solution solution;
    ListNode* intersectNode = solution.getIntersectionNode(headA, headB);

    if (intersectNode != NULL) {
        std::cout << "Intersection at node with value: " << intersectNode->val << std::endl;
    } else {
        std::cout << "No intersection found." << std::endl;
    }

    // Clean up memory
    delete headA->next->next; // Intersection node
    delete headA->next; // Node with value 1
    delete headA; // Node with value 4
    delete headB->next->next; // Node with value 1
    delete headB->next; // Node with value 0
    delete headB; // Node with value 5

    return 0;
}
