#include <iostream>
#include <vector>
#include <algorithm>

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
    ListNode* sortList(ListNode* head) {
        std::vector<int> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        std::sort(arr.begin(), arr.end());
        temp = head;
        for (int i = 0; i < arr.size(); ++i) {
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};

// Helper function to create a new ListNode.
ListNode* createListNode(const std::vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print the ListNode.
void printListNode(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a linked list with the values {4, 2, 1, 3}
    std::vector<int> values = {4, 2, 1, 3};
    ListNode* head = createListNode(values);
    
    // Sort the linked list
    Solution solution;
    ListNode* sortedHead = solution.sortList(head);
    
    // Print the sorted linked list
    printListNode(sortedHead);

    return 0;
}
