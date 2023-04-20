public ListNode findNthFromEnd(ListNode head, int n) {
    ListNode slowPtr = head;
    ListNode fastPtr = head;
    
    for (int i = 0; i < n; i++) {
        if (fastPtr == null) {
            return null;
        }
        fastPtr = fastPtr.next;
    }

    while (fastPtr != null) {
        slowPtr = slowPtr.next;
        fastPtr = fastPtr.next;
    }
    
    return slowPtr;
}
