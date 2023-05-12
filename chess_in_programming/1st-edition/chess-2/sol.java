public static int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

public static void main(String[] args) {
  int n, k;
  Scanner sc = new Scanner(System.in);
  n = sc.nextInt();
  k = sc.nextInt();
  if (k > n) {
    System.out.println(0);
  } else {
    int v = fact(n);
    int m = fact(n - k);
    System.out.println((v * v) / (m * m * fact(k)));
  }
}
