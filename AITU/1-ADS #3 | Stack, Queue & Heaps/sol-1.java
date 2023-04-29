import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Deque<String> shelf = new LinkedList<>();

        for (int i = 0; i < n; i++) {
            int op = scanner.nextInt();
            if (op == 1) {
                shelf.addFirst(scanner.next());
            } else if (op == 2) {
                shelf.addLast(scanner.next());
            } else if (op == 3) {
                System.out.print(shelf.removeFirst() + " ");
            } else if (op == 4) {
                System.out.print(shelf.removeLast() + " ");
            }
        }

        scanner.close();
    }
}