import sys
sys.setrecursionlimit(10000)

def main():
    try:
        sys.stdin = open('knight.in', 'r')
        sys.stdout = open('knight.out', 'w')
    except:
        pass
    finally:
        used = [[False for _ in range(100)] for _ in range(100)]
        memo = [[-1 for _ in range(100)] for _ in range(100)] 
        def solve(x, y):
            if x==1 and y==1:
                return 1
            if x<0 or y<1:
                return 0
            if used[x][y]:
                return memo[x][y]
            else:
                ans = solve(x-2, y-1) + solve(x-1, y-2)
                memo[x][y] = ans
                used[x][y] = True
            return memo[x][y]

        n, m = map(int, sys.stdin.readline().strip().split())
        sys.stdout.write(str(solve(n, m)))

if __name__ == '__main__':
    main()
