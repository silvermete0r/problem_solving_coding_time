import sys, math

def main():
    try:
        sys.stdin = open('badsubs.in', 'r')
        sys.stdout = open('badsubs.out', 'w')
    except:
        pass
    finally:        
        n = int(sys.stdin.readline().strip())
        if n == 0:
            sys.stdout.write('1')
        else:
            dp = [0] * (n+1)
            dp[0] = 1
            dp[1] = 3
            for i in range(2, n+1):
                dp[i] = dp[i-1] * 3 - dp[i-2]
            sys.stdout.write(str(dp[n]))
        

if __name__ == '__main__':
    main()
