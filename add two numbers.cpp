//Everything except for the solution part is taken by ChatGPT since it was unnecessary to spend time on that. 
#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* newLinkedList= new ListNode();
       ListNode* currentptr= newLinkedList;
       
       int carry=0; 

       while(l1!=NULL || l2!=NULL || carry!=0){
        int sum= carry;

        if(l1!=NULL){
            sum+= l1->val;
            l1= l1->next; //Moves to next node
        }

        if(l2!=NULL){
            sum+= l2->val;
            l2= l2->next;
        }
        carry= sum/10;

        currentptr->next= new ListNode(sum%10);
        currentptr= currentptr->next;
       }
       return newLinkedList->next;
    }
};

ListNode* createLinkedList(const std::vector<int>& digits) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int digit : digits) {
        ListNode* newNode = new ListNode(digit);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Solution solution;

    ListNode* l1 = createLinkedList({2, 4, 3});
    ListNode* l2 = createLinkedList({5, 6, 4});
    ListNode* result = solution.addTwoNumbers(l1, l2);
    std::cout << "Input: l1 = [2, 4, 3], l2 = [5, 6, 4]" << std::endl;
    std::cout << "Output: ";
    printLinkedList(result);

    l1 = createLinkedList({0});
    l2 = createLinkedList({0});
    result = solution.addTwoNumbers(l1, l2);
    std::cout << "Input: l1 = [0], l2 = [0]" << std::endl;
    std::cout << "Output: ";
    printLinkedList(result);

    return 0;
}
