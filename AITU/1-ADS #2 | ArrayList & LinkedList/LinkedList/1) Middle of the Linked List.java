public ListNode middleNode(ListNode head) {
    	ListNode [] listNode = new ListNode[100];
        int k = 0;
        while(head != null) {
            listNode[k++] = head;
            head = head.next;
        }
        return listNode[k/2];
}