import math

n, R, k = map(int, input().split())
ln_area = (
    math.log(n)
    + 2 * math.log(R)
    + 2 * k * math.log(math.cos(math.pi / n))
    - math.log(2)
    + math.log(math.sin(2 * math.pi / n))
)

print(ln_area)