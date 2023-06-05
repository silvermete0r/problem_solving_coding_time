import math

n = int(input())

# find a and b such that (a+b)^2 + b = n

x = int(math.sqrt(n))
b = n - x**2
a = x - b

print(a, b)
