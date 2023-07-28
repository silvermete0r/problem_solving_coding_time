from itertools import combinations
import sys
 
def main():
    try:
        sys.stdin = open('generation.in', 'r')
        sys.stdout = open('generation.out', 'w')
    except:
        pass
    finally:
        n, k = map(int, sys.stdin.readline().strip().split())
        nums = [i for i in range(1, n+1)]
        combs = list(combinations(nums, k))
        final_set = []
        for comb in combs:
            x = list(comb)
            x.reverse()
            final_set.append(tuple(x))
        final_set.sort(reverse=True)
        for set in final_set:
            row = ""
            for s in set:
                row += str(s) + " "
            sys.stdout.write(row + '\n')
 
if __name__ == '__main__':
    main()
