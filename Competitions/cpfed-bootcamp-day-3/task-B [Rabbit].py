import sys
 
def main():
    try:
        sys.stdin = open('lepus.in', 'r')
        sys.stdout = open('lepus.out', 'w')
    except:
        pass
    finally:
        check = [False] * 5000
        result = [0] * 5000
        def go(x):
            nonlocal road
            if x == 0:  
                return 0
            if x < 0 or road[x] == 'w':
                return -float('inf')
            if check[x]:
                return result[x]
            else:
                result[x] = max(go(x-1), go(x-3), go(x-5)) + (road[x]=='"')
                check[x] = True
            return result[x]
            
        
        lines = sys.stdin.readlines()
        n = int(lines[0].strip())
        road = lines[1].strip()
        ans = go(n-1)
        sys.stdout.write("-1" if ans < 0 else str(ans))
 
if __name__ == '__main__':
    main()
