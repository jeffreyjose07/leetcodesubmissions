/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
    return true;
  }

  ListNode* slow = head;
  ListNode* fast = head;

  // Find the middle of the linked list.
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }

  // Reverse the second half of the linked list.
  ListNode* prev = nullptr;
  while (slow != nullptr) {
    ListNode* next = slow->next;
    slow->next = prev;
    prev = slow;
    slow = next;
  }

  // Check if the first and second halves of the linked list are equal.
  ListNode* p1 = head;
  ListNode* p2 = prev;
  while (p1 != nullptr && p2 != nullptr) {
    if (p1->val != p2->val) {
      return false;
    }
    p1 = p1->next;
    p2 = p2->next;
  }

  return true;
    }
};