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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* last = new ListNode(head->val);
        while(head->next != nullptr) {
            head = head->next;
            ListNode* nxt = new ListNode(head->val);
            nxt->next = last; 
            last = nxt; 
        }
        return last; 
    }
};
