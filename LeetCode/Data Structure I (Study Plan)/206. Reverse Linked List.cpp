// https://leetcode.com/problems/reverse-linked-list

class Solution {
public:
    ListNode* recursiverse(ListNode* prev, ListNode* cur) {
        if(cur == nullptr) return prev;
        ListNode* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
        return recursiverse(prev, cur);
    }
    ListNode* reverseList(ListNode* head) {
        return recursiverse(nullptr, head);
    }
};