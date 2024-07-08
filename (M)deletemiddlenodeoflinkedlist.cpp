#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;

        ListNode* slow=head;
        ListNode* fast=head;
        fast=fast->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast= fast->next->next;
        }
        slow->next= slow->next->next;
        return head;

    }
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original list: ";
    printList(head);

    Solution sol;
    sol.deleteMiddle(head);

    std::cout << "List after deleting middle node: ";
    printList(head);

    // Free memory (optional in this example since it's just for demonstration)
    ListNode* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
