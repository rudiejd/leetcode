class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode res = new ListNode(), cur;
        cur = res;
        int cry = 0;
        while (l1 != null || l2 != null) {
            cur.val = (l1 == null ? 0 : l1.val) + (l2 == null ? 0 : l2.val) + cry;
            cry = cur.val / 10;
            cur.val = cur.val % 10;
            
            if (l1 != null) {
                l1 = l1.next;
            }
            if (l2 != null) {
                l2 = l2.next;    
            }
            if (l1 != null || l2 != null) {
                cur.next = new ListNode();
                cur = cur.next;         
            }
            
            
        }
        if (cry != 0) {
            cur.next = new ListNode(cry);
        }
        return res;
    }
}
