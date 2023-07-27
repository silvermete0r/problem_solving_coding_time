# Rank List
def solve(teams, m):
    teams.sort(key=lambda x: (-x[0], x[1]))
    return teams.count(teams[m-1])
    
if __name__ == '__main__':
    n, m = map(int, input().split())
    teams = []
    for _ in range(n):
        teams.append(list(map(int, input().split())))
    print(solve(teams, m))
