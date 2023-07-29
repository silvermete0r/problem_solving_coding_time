import sys
sys.setrecursionlimit(10000)

def main():
    try:
        sys.stdin = open('slalom.in', 'r')
        sys.stdout = open('slalom.out', 'w')
    except:
        pass
    finally:
        lines = sys.stdin.readlines()
        n = int(lines[0].strip())
        mountain = []
        for i in range(1, n+1):
            mountain.append(list(map(int, lines[i].strip().split())))
        dp = [[-float('inf') for _ in range(107)] for _ in range(107)]
        dp[0][0] = mountain[0][0]
        for i in range(0, n - 1):
            for j in range(0, i + 1):
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + mountain[i + 1][j])
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + mountain[i + 1][j + 1])
        ans = -float('inf')
        for i in range(0, n + 1):
            ans = max(ans, dp[n - 1][i])
        print(ans)

if __name__ == '__main__':
    main()
