#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
    vector<int> insertionSort(vector<int> &arr) {
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            int j = i - 1;
            int key = arr[i];
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        return arr;
    }

public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        
        arr = insertionSort(arr); // Sort the array
        
        temp = head;
        for (int i = 0; i < arr.size(); i++) {
            temp->val = arr[i];
            temp = temp->next;
        }
        
        return head;
    }
};

// Function to create a new ListNode (for testing purposes)
ListNode* createListNode(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Function to print the ListNode (for testing purposes)
void printListNode(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a linked list with the values {4, 2, 1, 3}
    vector<int> values = {4, 2, 1, 3};
    ListNode* head = createListNode(values);
    
    // Print the original linked list
    std::cout << "Original List: ";
    printListNode(head);
    
    // Sort the linked list using insertion sort
    Solution solution;
    ListNode* sortedHead = solution.insertionSortList(head);
    
    // Print the sorted linked list
    std::cout << "Sorted List: ";
    printListNode(sortedHead);

    return 0;
}
