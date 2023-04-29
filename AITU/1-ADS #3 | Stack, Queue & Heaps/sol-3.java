import java.util.*;

public class Main {
    private static Stack<Integer> stack = new Stack<>();
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number of elements to push: ");
        int n = in.nextInt();

        System.out.println("Enter the elements to push:");
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            stack.push(x);
        }
        System.out.println("Original stack: " + stack);
        reverseStack(stack);
        System.out.println("Reversed stack: " + stack);
    }

    private static void reverseStack(Stack<Integer> stack) {
        if (stack.isEmpty())  return;
        int top = stack.pop();
        reverseStack(stack);
        stack.push(top);
    }
}