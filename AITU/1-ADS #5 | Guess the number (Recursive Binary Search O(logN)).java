import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a value of maximum number: ");
        int mx = in.nextInt();
        System.out.printf("Choose any number in range 1 and %d, and I will try to guess this number.%n", mx);
        System.out.println("I will send number to you and you should say it higher or lower than number in your mind (you just need to say 'YES' or 'NO'). Ok? Let's GO!:)");
        guessNumber(0, mx);
    }
    public static void guessNumber(int l, int r) {
        Scanner in = new Scanner(System.in);
        if(l == r) {
            System.out.printf("Yeah, I guessed your number: %d", l);
            System.out.flush();
            return;
        }
        int mid = (int) Math.ceil((double)(l+r)/2.0);
        System.out.printf("> %d is higher than your number? ", mid);
        System.out.flush();
        String answer = in.nextLine();
        if(answer.toLowerCase().equals("yes")) r=mid-1;
        else l=mid;
        guessNumber(l, r);
    }
}
