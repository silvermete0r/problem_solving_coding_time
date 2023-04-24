 // link: https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cur = new ListNode();
        ListNode* result = cur;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
                cur = cur->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
                cur = cur->next;
            }
        }
        if (list1 || list2) {
            cur->next = list1 ? list1 : list2;
        }
        return result->next;
    }
};