def main():
  n, k = map(int, input().split())
  if k > n:
    print(0)
  else:
    v = fact(n)
    m = fact(n - k)
    print((v * v) / (m * m * fact(k)))

if __name__ == "__main__":
  main()
