# https://codeforces.com/gym/100086/attachments/download/1203/20122013-tryenirovka-spbgu-s-2-kombinatorika-1-ru.pdf

from itertools import permutations
import sys
 
def main():
    try:
        sys.stdin = open('perm.in', 'r')
        sys.stdout = open('perm.out', 'w')
    except:
        pass
    finally:
        n = int(sys.stdin.readline().strip())
        perms = list(permutations([i for i in range(1, n+1)]))
        perms.sort()
        for perm in perms:
            text = ""
            for p in perm:
                text += str(p) + " "
            sys.stdout.write(text + '\n')
 
if __name__ == '__main__':
    main()
