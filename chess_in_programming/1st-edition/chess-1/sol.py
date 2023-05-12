def correct(s):
  if len(s) != 5:
    return False
  if s[2] != '-':
    return False
  if s[1] < '1' or s[1] > '8':
    return False
  if s[4] < '1' or s[4] > '8':
    return False
  if s[0] < 'A' or s[0] > 'H':
    return False
  if s[3] < 'A' or s[3] > 'H':
    return False
  return True

def knight_move(s):
  x1 = ord(s[0]) - ord('A') + 1
  x2 = ord(s[3]) - ord('A') + 1
  y1 = int(s[1]) - 1
  y2 = int(s[4]) - 1
  if abs(x1 - x2) == 1 and abs(y1 - y2) == 2:
    return True
  elif abs(x1 - x2) == 2 and abs(y1 - y2) == 1:
    return True
  return False

def main():
  s = input()
  if correct(s):
    if knight_move(s):
      print('YES')
    else:
      print('NO')
  else:
    print('ERROR')

if __name__ == '__main__':
  main()
