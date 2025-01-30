def solve():
    def can_achieve(mid, arr):
        feasible = {-1, 0, 1}
        for i in range(len(arr) - 1):
            new_feasible = set()
            for s_i in feasible:
                for s_next in {-1, 0, 1}:
                    dist = (arr[i+1] + s_next) - (arr[i] + s_i)
                    if dist >= mid:
                        new_feasible.add(s_next)
            if not new_feasible:
                return False
            feasible = new_feasible
        return True

    n = int(input())
    x = list(map(int, input().split()))
    left, right = 0, x[-1] - x[0] + 2
    while left < right:
        mid = (left + right + 1) // 2
        if can_achieve(mid, x):
            left = mid
        else:
            right = mid - 1
    print(left)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        solve()
