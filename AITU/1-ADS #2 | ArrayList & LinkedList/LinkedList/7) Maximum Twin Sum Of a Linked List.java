    public int pairSum(ListNode head) {
        ArrayList<Integer> vals = new ArrayList<Integer>();
        while(head!=null) {
            vals.add(head.val);
            head = head.next;
        }
        int i=0, j=vals.size()-1, mx=0;
        while(i<j) {
            mx = Math.max(mx, vals.get(i) + vals.get(j));
            i++;
            j--;
        }
        return mx;
    }