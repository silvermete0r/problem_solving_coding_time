from itertools import combinations
import sys
 
def main():
    try:
        sys.stdin = open('choose.in', 'r')
        sys.stdout = open('choose.out', 'w')
    except:
        pass
    finally:
        n, k = map(int, sys.stdin.readline().strip().split())
        nums = [i for i in range(1, n+1)]
        combs = list(combinations(nums, k))
        for row in combs:
            row_vals = ""
            for val in row:
                 row_vals += str(val) + " "
            sys.stdout.write(row_vals + '\n')
 
if __name__ == '__main__':
    main()
