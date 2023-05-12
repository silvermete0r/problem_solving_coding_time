def letter(x):
  char = chr(ord('a') + x - 1)
  print(char)

def main():
  s = input()
  x = ord(s[0]) - ord('a') + 1
  y = int(s[1])
  if y - 1 > 0 and y - 1 < 9 and x - 2 > 0 and x - 2 < 9:
    letter(x - 2)
    print(y - 1)
  if y + 1 > 0 and y + 1 < 9 and x - 2 > 0 and x - 2 < 9:
    letter(x - 2)
    print(y + 1)
  if y - 2 > 0 and y - 2 < 9 and x - 1 > 0 and x - 1 < 9:
    letter(x - 1)
    print(y - 2)
  if y + 2 > 0 and y + 2 < 9 and x - 1 > 0 and x - 1 < 9:
    letter(x - 1)
    print(y + 2)
  if y - 2 > 0 and y - 2 < 9 and x + 1 > 0 and x + 1 < 9:
    letter(x + 1)
    print(y - 2)
  if y + 2 > 0 and y + 2 < 9 and x + 1 > 0 and x + 1 < 9:
    letter(x + 1)
    print(y + 2)
  if y - 1 > 0 and y - 1 < 9 and x + 2 > 0 and x + 2 < 9:
    letter(x + 2)
    print(y - 1)
  if y + 1 > 0 and y + 1 < 9 and x + 2 > 0 and x + 2 < 9:
    letter(x + 2)
    print(y + 1)


if __name__ == "__main__":
  main()
