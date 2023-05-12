public static void letter(int x) {
  char s = (char) ('a' + x - 1);
  System.out.print(s);
}

public static void main(String[] args) {
  String s = "";
  try (Scanner sc = new Scanner(System.in)) {
    s = sc.nextLine();
  }
  int x = s.charAt(0) - 'a' + 1;
  int y = s.charAt(1) - '0';
  if (y - 1 > 0 && y - 1 < 9 && x - 2 > 0 && x - 2 < 9) {
    letter(x - 2);
    System.out.println(y - 1);
  }
  if (y + 1 > 0 && y + 1 < 9 && x - 2 > 0 && x - 2 < 9) {
    letter(x - 2);
    System.out.println(y + 1);
  }
  if (y - 2 > 0 && y - 2 < 9 && x - 1 > 0 && x - 1 < 9) {
    letter(x - 1);
    System.out.println(y - 2);
  }
  if (y + 2 > 0 && y + 2 < 9 && x - 1 > 0 && x - 1 < 9) {
    letter(x - 1);
    System.out.println(y + 2);
  }
  if (y - 2 > 0 && y - 2 < 9 && x + 1 > 0 && x + 1 < 9) {
    letter(x + 1);
    System.out.println(y - 2);
  }
  if (y + 2 > 0 && y + 2 < 9 && x + 1 > 0 && x + 1 < 9) {
    letter(x + 1);
    System.out.println(y + 2);
  }
  if (y - 1 > 0 && y - 1 < 9 && x + 2 > 0 && x + 2 < 9) {
    letter(x + 2);
    System.out.println(y - 1);
  }
  if (y + 1 > 0 && y + 1 < 9 && x + 2 > 0 && x + 2 < 9) {
    letter(x + 2);
    System.out.println(y + 1);
  }
}
