import java.util.Scanner;

public class KnightMove {

    public static boolean isCorrect(String s) {
        if (s.length() != 5) {
            return false;
        }
        if (s.charAt(2) != '-') {
            return false;
        }
        if (s.charAt(1) < '1' || s.charAt(1) > '8') {
            return false;
        }
        if (s.charAt(4) < '1' || s.charAt(4) > '8') {
            return false;
        }
        if (s.charAt(0) < 'A' || s.charAt(0) > 'H') {
            return false;
        }
        if (s.charAt(3) < 'A' || s.charAt(3) > 'H') {
            return false;
        }
        return true;
    }

    public static boolean isKnightMove(String s) {
        int x1 = s.charAt(0) - 'A' + 1;
        int x2 = s.charAt(3) - 'A' + 1;
        int y1 = s.charAt(1) - '0';
        int y2 = s.charAt(4) - '0';
        if (Math.abs(x1 - x2) == 1 && Math.abs(y1 - y2) == 2) {
            return true;
        } else if (Math.abs(x1 - x2) == 2 && Math.abs(y1 - y2) == 1) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if (isCorrect(str)) {
            if (isKnightMove(str)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            System.out.println("ERROR");
        }
    }
}
