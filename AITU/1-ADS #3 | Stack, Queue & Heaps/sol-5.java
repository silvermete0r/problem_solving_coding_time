import java.util.Scanner;

public class Samsa {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] students = new int[scanner.nextInt()];
        int[] samsas = new int[scanner.nextInt()];
        for (int i = 0; i < students.length; i++) {
            students[i] = scanner.nextInt();
        }
        for (int i = 0; i < samsas.length; i++) {
            samsas[i] = scanner.nextInt();
        }
        int count = 0;
        int studentIndex = 0;
        int samsaIndex = 0;
        while (studentIndex < students.length && samsaIndex < samsas.length) {
            if (students[studentIndex] == samsas[samsaIndex]) {
                studentIndex++;
                samsaIndex++;
            } else {
                studentIndex++;
            }
        }
        System.out.println(students.length - studentIndex);
    }
}