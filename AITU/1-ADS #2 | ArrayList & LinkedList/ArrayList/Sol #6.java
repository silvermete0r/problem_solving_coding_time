import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class RemoveDuplicates {
    public static void main(String[] args) {
        ArrayList<String> strings = new ArrayList<String>();
        String fileName = "input.txt";
        
        try {
            Scanner scanner = new Scanner(new File(fileName));
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine().trim();
                if (!strings.contains(line)) {
                    strings.add(line);
                }
            }
            scanner.close();
        } catch (FileNotFoundException e) {
            System.err.println("Error: " + e.getMessage());
        }
        
        for (String str : strings) {
            System.out.println(str);
        }
    }
}