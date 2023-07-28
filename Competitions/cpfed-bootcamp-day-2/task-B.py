from itertools import permutations
import sys
 
def main():
    try:
        sys.stdin = open('inverse.in', 'r')
        sys.stdout = open('inverse.out', 'w')
    except:
        pass
    finally:
        lines = sys.stdin.readlines()
        n = int(lines[0])
        nums = list(map(int, lines[1].split()))
        ans = [0 for _ in range(n)]
        for i in range(len(nums)):
            ans[nums[i]-1] = i+1
        res = ""
        for a in ans:
            res += str(a) + " "
        sys.stdout.write(res)
 
if __name__ == '__main__':
    main()
