from itertools import combinations
import sys

def main():
    try:
        sys.stdin = open('comb.in', 'r')
        sys.stdout = open('comb.out', 'w')
    except:
        pass
    finally:
        n, k, p = map(int, sys.stdin.readline().strip().split())
        nums = [i for i in range(1, n+1)]
        combs_obj = combinations(nums, k)
        
        for _ in range(p):
            next(combs_obj)
        poe = next(combs_obj)
        ans = ""
        for p in poe:
            ans += str(p) + " "
        sys.stdout.write(ans)

if __name__ == '__main__':
    main()
