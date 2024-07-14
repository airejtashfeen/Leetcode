#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        ListNode* merged = list1;
        while (list1->next != nullptr) {
            list1 = list1->next;
        }
        list1->next = list2;

        // Perform in-place sorting of the merged linked list
        int length = 0;
        ListNode* current = merged;
        while (current != nullptr) {
            length++;
            current = current->next;
        }

        for (int i = 0; i < length - 1; i++) {
            current = merged;
            for (int j = 0; j < length - i - 1; j++) {
                if (current->val > current->next->val) {
                    swap(current->val, current->next->val);
                }
                current = current->next;
            }
        }

        return merged;
    }
};

ListNode* inputNode() {
    int val;
    cout << "Enter val (-1 to stop): ";
    cin >> val;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    while (val != -1) {
        ListNode* n = new ListNode(val);
        if (head == NULL) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
        cin >> val;
    }
    return head;
}

void printNode(ListNode* head) {
    while (head) {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Solution s;
    cout << "For the first linked list:" << endl;
    ListNode* first = inputNode();
    cout << "\nThe first linked list is: ";
    printNode(first);
    cout << "\n\nFor the second linked list:" << endl;
    ListNode* second = inputNode();
    cout << "\nThe second linked list is: ";
    printNode(second);

    cout << "\n\nThe merged linked list is: ";
    ListNode* third = s.mergeTwoLists(first, second);
    printNode(third);
    cout << endl;

    // Clean up memory
    ListNode* current = third;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
}
