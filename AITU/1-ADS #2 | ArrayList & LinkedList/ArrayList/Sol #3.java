import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> words = new ArrayList<String>();

        System.out.print("Enter some words separated by spaces: ");
        String line = in.nextLine();

        String[] parts = line.split(" ");

        for(String part : parts) {
            words.add(part);
        }

        Collections.sort(words);

        System.out.println("Sorted words: ");
        for(String word : words) {
            System.out.print(word + " ");
        }
    }
}