// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
// link: https://leetcode.com/problems/first-bad-version/

int firstBadVersion(int n) {
    int start=0, end=n;
    while(start<=end) {
        int mid = start + (end-start)/2;
        if(isBadVersion(mid)){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return start;
}
