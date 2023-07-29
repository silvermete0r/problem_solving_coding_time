import sys

def main():
    try:
        sys.stdin = open('knapsack.in', 'r')
        sys.stdout = open('knapsack.out', 'w')
    except:
        pass
    finally:
        lines = sys.stdin.readlines()
        s, n = map(int, lines[0].strip().split())
        golds = list(map(int, lines[1].strip().split()))
        dp = [0] * (s+1)
        dp[0] = 1
        for i in range(n):
            for j in range(s, -1, -1):
                if dp[j] and j+golds[i] <= s:
                    dp[j+golds[i]] = 1
        ans = 1
        for i in range(s, -1, -1):
            if dp[i]:
                ans = i
                break
        sys.stdout.write(str(ans))

if __name__ == '__main__':
    main()
