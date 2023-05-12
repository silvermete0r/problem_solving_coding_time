def is_white(s):
  x1 = ord(s[0]) - ord('A') + 1
  x2 = int(s[1])
  return (x1 + x2) % 2 == 0

def main():
  s = input()
  if is_white(s):
    print('WHITE')
  else:
    print('BLACK')

if __name__ == '__main__':
  main()
