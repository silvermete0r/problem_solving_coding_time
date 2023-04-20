import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> nums = new ArrayList<Integer>();

        System.out.println("Enter integers (one per line, input 's' to stop): ");
        while(in.hasNextInt()) {
            int num = in.nextInt();
            nums.add(num);
        }
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int num : nums) {
            if(num > max) {
                max = num;
            }
            if(num < min) {
                min = num;
            }
        }

        System.out.printf("Max value is: %d%n", max);
        System.out.printf("Min value is: %d%n", min);
    }
}
