import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String fileName = "test.txt";
        ArrayList<Integer> nums = new ArrayList<Integer>();

        try {
            File file = new File(fileName);
            Scanner fileIn = new Scanner(file);
            while(fileIn.hasNext()) {
                int num = fileIn.nextInt();
                nums.add(num);
            }
            fileIn.close();

            int sum = 0;
            for(int num : nums) {
                sum += num;
            }
            int avg = sum/nums.size();

            System.out.printf("Sum: %d%n", sum);
            System.out.printf("Avg: %d%n", avg);

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + fileName);
        }
    }
}
