# https://codeforces.com/problemset/problem/1840/B?locale=ru

import math
 
def main():
    def solve(n, k):
        pred_k = math.log(n+1, 2)
        if pred_k >= k:
            return 2 ** k
        else:
            return n + 1
 
    t = int(input())
    ans = []
    for _ in range(t):
        n, k = map(int, input().strip().split())
        ans.append(solve(n, k))
    for a in ans:
        print(a)
 
if __name__ == "__main__":
    main()
