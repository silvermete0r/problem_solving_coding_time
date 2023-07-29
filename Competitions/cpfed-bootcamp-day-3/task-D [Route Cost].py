import sys
sys.setrecursionlimit(10000)

def main():
    try:
        sys.stdin = open('king2.in', 'r')
        sys.stdout = open('king2.out', 'w')
    except:
        pass
    finally:
        def solve(desc, x, y, coins):
            if x<0 or y>=8:
                return float('inf')
            coins += desc[x][y]
            if x == 0 and y == 7:
                return coins
            return min(solve(desc, x-1, y, coins), solve(desc, x, y+1, coins), solve(desc, x-1, y+1, coins))

        lines = sys.stdin.readlines()
        desc = []
        for i in range(8):
            desc.append(list(map(int, lines[i].strip().split())))
        sys.stdout.write(str(solve(desc, 7, 0, 0)))

if __name__ == '__main__':
    main()
