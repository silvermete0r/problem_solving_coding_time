# https://codeforces.com/group/J5QdisvBj0/contest/464485/attachments/download/1333/20122013-tryenirovka-spbgu-s-5-dp-1-ru.pdf

import sys

def main():
    try:
        sys.stdin = open('ladder.in', 'r')
        sys.stdout = open('ladder.out', 'w')
    except:
        pass
    finally:
        lines = sys.stdin.readlines()
        
        n = int(lines[0])
        dp = list(map(int, lines[1].strip().split()))
        dp.insert(0, 0)
        for i in range(2, n+1):
            dp[i] = max(dp[i-2]+dp[i], dp[i-1]+dp[i])

        sys.stdout.write(str(dp[n]))

if __name__ == '__main__':
    main()
