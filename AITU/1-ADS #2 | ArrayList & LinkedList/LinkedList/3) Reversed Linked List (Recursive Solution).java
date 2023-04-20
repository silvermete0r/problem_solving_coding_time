    public ListNode recursiverse(ListNode prev, ListNode cur) {
        if(cur == null) return prev;
        ListNode temp = cur.next;
        cur.next = prev;
        prev = cur;
        cur = temp;
        return recursiverse(prev, cur);
    }
    public ListNode reverseList(ListNode head) {
        return recursiverse(null, head);
    }