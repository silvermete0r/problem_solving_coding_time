def solve(vals, n):
    mp = {}
    i = 1

    parents_set = set()
    for val in vals:
        i += 1
        if val in mp:
            mp[val].append(i)
        else:
            mp[val] = [i]
            parents_set.add(val)

    for key in mp:
        mp[key] = list(set(mp[key]).difference(parents_set))

    for i in range(n, 0, -1):
        if i in mp and len(mp[i]) < 3:
            return "No"
    return "Yes"

if __name__ == '__main__':
    n = int(input())
    vals = []
    for i in range(n-1):
        vals.append(int(input()))
    print(solve(vals, n))
