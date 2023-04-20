import java.util.ArrayList;
import java.util.Scanner;
import java.util.Random;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Random rand = new Random();
        ArrayList<Integer> randNums = new ArrayList<Integer>();
        System.out.print("Enter an ArrayList Size: ");
        int n = in.nextInt();
        for(int i=0; i<n; i++) {
            randNums.add(rand.nextInt(1000)); // generates integer in range(1000)
        }
        Collections.sort(randNums);
        System.out.println(randNums);
    }
}