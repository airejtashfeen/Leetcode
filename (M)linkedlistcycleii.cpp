#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                ListNode* start = head;
                while (start != slow) {
                    start = start->next;
                    slow = slow->next;
                }
                return start; 
            }
        }
        return NULL; 
    }
};

int main() {
    // Example usage
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Creates a cycle

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);

    if (cycleStart != NULL) {
        std::cout << "Cycle detected at node with value: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }

    // Free the allocated memory (in a real-world scenario, be mindful of cycles to avoid double-deleting)
    delete head;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
