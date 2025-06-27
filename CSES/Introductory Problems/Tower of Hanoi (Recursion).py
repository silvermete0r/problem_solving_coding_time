def hanoi(n, src, dist, aux):
    if n == 1:
        print(f'{src} {dist}')
        return
    hanoi(n - 1, src, aux, dist)
    print(f'{src} {dist}')
    hanoi(n - 1, aux, dist, src)
    
 
n = int(input())
min_moves = 2 ** n - 1
print(min_moves)
hanoi(n, 1, 3, 2)
