import java.util.Scanner;

public class IsWhite {

    public static boolean isWhite(String s) {
        int x1 = s.charAt(0) - 'A' + 1;
        int x2 = s.charAt(1) - '0';
        return (x1 + x2) % 2;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (isWhite(s)) {
            System.out.println("WHITE");
        } else {
            System.out.println("BLACK");
        }
    }
}
