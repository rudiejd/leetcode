 /**
 * Definition for singly-linked list.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ret = l1 == nullptr && l2 == nullptr ? nullptr : new ListNode;
        ListNode* cur = ret; 
        
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                cur->val = l1->val;
                l1 = l1->next;
            } else {
                cur->val = l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode;
            cur = cur->next;  
        }
        

        
        while (l1 != nullptr) {
            cur->val = l1->val;
            l1 = l1->next;
            if (l1 != nullptr) {
                cur->next = new ListNode;    
            }
            cur = cur->next;
           
        }
        
        while (l2 != nullptr) {
            cur->val = l2->val;
            l2 = l2->next;
            if (l2 != nullptr) {
                cur->next = new ListNode; 
            }
            cur = cur->next;
        }
        
        return ret; 
        
    }
};
