# https://vjudge.net/problem/CodeForces-618B/origin

def solve():
    n = int(input())
    base = [0 for _ in range(n)]
    for i in range(n):
        lst = list(map(int, input().strip().split()))
        for id, l in enumerate(lst):
            base[id] = max(base[id], l)
    abc = set(base)
    vals = set(i for i in range(1, n+1))
    vals = sorted(list(vals - abc))
    for i in range(len(base)-1, -1, -1):
        if base[i] in abc:
            abc.remove(base[i])
        else:
            for v in vals:
                if base[i] < v:
                    base[i] = v
                    vals.remove(v)
    for b in base:
        print(b, end=' ')



if __name__ == '__main__':
    solve()
