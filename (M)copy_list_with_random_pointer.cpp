#include <iostream>
#include <unordered_map>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        
        unordered_map<Node*, Node*> hashMap;
        
        // First pass: Create copies of nodes and store in the hash map
        Node* temp = head;
        while (temp) {
            Node* newNode = new Node(temp->val);
            hashMap[temp] = newNode;
            temp = temp->next;
        }

        // Second pass: Connect next and random pointers using the hash map
        temp = head;
        while (temp) {
            Node* copyNode = hashMap[temp];
            copyNode->next = hashMap[temp->next];
            copyNode->random = hashMap[temp->random];
            temp = temp->next;
        }
        
        return hashMap[head];
    }
};

// Helper function to print a linked list (for testing purposes)
void printList(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << "(" << curr->val << ", ";
        if (curr->random) {
            cout << curr->random->val;
        } else {
            cout << "null";
        }
        cout << ") -> ";
        curr = curr->next;
    }
    cout << "null" << endl;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next;
    head->next->random = head;
    
    Solution solution;
    Node* copiedList = solution.copyRandomList(head);
    
    cout << "Original List:" << endl;
    printList(head);
    
    cout << "Copied List:" << endl;
    printList(copiedList);
    
    return 0;
}
