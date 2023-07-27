# https://vjudge.net/problem/CodeForces-1011B/origin

from collections import Counter

def solve(n, food):
    freq = Counter(food)
    poss = sorted(freq.values())

    theory_max = sum(poss) // n

    for i in range(theory_max, 0, -1):
        cnt = 0
        for p in poss:
            while p-i >= 0:
                p -= i
                cnt += 1
        if cnt >= n:
            return i

    return 0

if __name__ == '__main__':
    n, m = list(map(int, input().strip().split()))
    food = list(map(int, input().strip().split()))
    print(solve(n, food))
