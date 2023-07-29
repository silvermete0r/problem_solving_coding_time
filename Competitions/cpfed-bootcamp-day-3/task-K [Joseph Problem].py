import sys

def main():
    try:
        sys.stdin = open('joseph.in', 'r')
        sys.stdout = open('joseph.out', 'w')
    except:
        pass
    finally:        
        n, p = map(int, sys.stdin.readline().strip().split())
        i, ans = 1, 0
        while i<=n:
            ans = (ans + p) % i
            i += 1

        sys.stdout.write(str(ans+1))
        

if __name__ == '__main__':
    main()
