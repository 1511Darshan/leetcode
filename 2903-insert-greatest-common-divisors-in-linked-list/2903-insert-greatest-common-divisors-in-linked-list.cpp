#include <numeric> // For std::gcd

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head; // Edge case: if list has 0 or 1 node, return as is

        ListNode* curr = head;
        while (curr->next) {
            int gcdValue = std::gcd(curr->val, curr->next->val);
            ListNode* gcdNode = new ListNode(gcdValue); // Create new node with GCD value

            // Insert the new node
            gcdNode->next = curr->next;
            curr->next = gcdNode;

            // Move to the next original node
            curr = gcdNode->next;
        }
        return head;
    }
};
