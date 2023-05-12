public static boolean beats(String wk, String wq, String bk) {
  int xq = wq.charAt(1) - '0', yq = wq.charAt(0) - 'a' + 1, xwk = wk.charAt(1) - '0', ywk = wk.charAt(0) - 'a' + 1, xbk = bk.charAt(1) - '0', ybk = bk.charAt(0) - 'a' + 1;
  if (xq < 0 || xq > 8 || yq < 0 || yq > 8 || xwk < 0 || xwk > 8 || ywk < 0 || ywk > 8 || xbk < 0 || xbk > 8 || ybk < 0 || ybk > 8) {
    return false;
  }
  if ((xq == xbk && (xwk != xbk || !(yq <= ywk && ywk <= ybk || yq >= ywk && ywk >= ybk)) || (yq == ybk && (ywk != ybk || !(xq <= xwk && xwk <= xbk || xq >= xwk && xwk >= xbk))))) {
    return true;
  }
  if (Math.abs(xq - xbk) == Math.abs(yq - ybk)) {
    int tx = xq, ty = yq;
    if (xq < xbk && yq < ybk) {
      for (int i = 1; i < Math.abs(xq - xbk); i++) {
        if (tx + i == xwk && ty + i == ywk) {
          return false;
        }
      }
    } else if (xq < xbk && yq > ybk) {
      for (int i = 1; i < Math.abs(xq - xbk); i++) {
        if (tx + i == xwk && ty - i == ywk) {
          return false;
        }
      }
    } else if (xq > xbk && yq < ybk) {
      for (int i = 1; i < Math.abs(xq - xbk); i++) {
        if (tx - i == xwk && ty + i == ywk) {
          return false;
        }
      }
    } else {
      for (int i = 1; i < Math.abs(xq - xbk); i++) {
        if (tx - i == xwk && ty - i == ywk) {
          return false;
        }
      }
    }
    return true;
  }
  return false;
}

public static void main(String[] args) {
  String s = "";
  try (Scanner sc = new Scanner(System.in)) {
    s = sc.nextLine();
  }
  if (s.length() != 8) {
    System.out.println("NO");
    return;
  }
  if (beats(s.substring(0, 2), s.substring(3, 5), s.substring(6, 8))) {
    System.out.println("YES");
  } else {
    System.out.println("NO");
  }
}
