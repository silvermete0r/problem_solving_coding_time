// Link: https://leetcode.com/problems/linked-list-cycle
// Reference: Floyd's cycle-finding algorithm
// Resource: https://en.wikipedia.org/wiki/Cycle_detection

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};