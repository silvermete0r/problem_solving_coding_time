def beats(wk, wq, bk):
  xq = ord(wq[0]) - ord('a') + 1
  yq = int(wq[1])
  xwk = ord(wk[0]) - ord('a') + 1
  ywk = int(wk[1])
  xbk = ord(bk[0]) - ord('a') + 1
  ybk = int(bk[1])

  if xq < 0 or xq > 8 or yq < 0 or yq > 8 or xwk < 0 or xwk > 8 or ywk < 0 or ywk > 8 or xbk < 0 or xbk > 8 or ybk < 0 or ybk > 8:
    return False

  if xq == xbk and (xwk != xbk or not (yq <= ywk and ywk <= ybk or yq >= ywk and ywk >= ybk)) or yq == ybk and (ywk != ybk or not (xq <= xwk and xwk <= xbk or xq >= xwk and xwk >= xbk)):
    return True

  if abs(xq - xbk) == abs(yq - ybk):
    tx = xq
    ty = yq
    if xq < xbk and yq < ybk:
      for i in range(1, abs(xq - xbk)):
        if tx + i == xwk and ty + i == ywk:
          return False
    elif xq < xbk and yq > ybk:
      for i in range(1, abs(xq - xbk)):
        if tx + i == xwk and ty - i == ywk:
          return False
    elif xq > xbk and yq < ybk:
      for i in range(1, abs(xq - xbk)):
        if tx - i == xwk and ty + i == ywk:
          return False
    else:
      for i in range(1, abs(xq - xbk)):
        if tx - i == xwk and ty - i == ywk:
          return False

    return True

  return False


def main():
  s = input()
  if len(s) != 8:
    print("NO")
    return

  if beats(s[0:2], s[2:4], s[4:6]):
    print("YES")
  else:
    print("NO")


if __name__ == "__main__":
  main()
