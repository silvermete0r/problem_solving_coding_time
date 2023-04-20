import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String fileName = "grades.txt";
        ArrayList<Student> students = new ArrayList<Student>();

        try {
            File file = new File(fileName);
            Scanner fileIn = new Scanner(file);
            while (fileIn.hasNextLine()) {
                String line = fileIn.nextLine();
                String[] parts = line.split(",");
                String name = parts[0].trim();
                int grade = Integer.parseInt(parts[1].trim());
                Student student = new Student(name, grade);
                students.add(student);
            }
            fileIn.close();

            Collections.sort(students, new Comparator<Student>() {
                @Override
                public int compare(Student s1, Student s2) {
                    return s2.getGrade() - s1.getGrade();
                }
            });

            for (Student student : students) {
                System.out.println(student.getName() + " - " + student.getGrade());
            }

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + fileName);
        }
    }

    private static class Student {
        private String name;
        private int grade;

        public Student(String name, int grade) {
            this.name = name;
            this.grade = grade;
        }

        public String getName() {
            return name;
        }

        public int getGrade() {
            return grade;
        }
    }
}
