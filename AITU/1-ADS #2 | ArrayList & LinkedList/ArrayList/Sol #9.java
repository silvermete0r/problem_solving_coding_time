import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String fileName = "employees.txt";
        ArrayList<Employee> employees = new ArrayList<Employee>();

        try {
            File file = new File(fileName);
            Scanner fileIn = new Scanner(file);
            while (fileIn.hasNextLine()) {
                String line = fileIn.nextLine();
                String[] parts = line.split(",");
                String name = parts[0].trim();
                double salary = Double.parseDouble(parts[1].trim());
                Employee employee = new Employee(name, salary);
                employees.add(employee);
            }
            fileIn.close();

            double totalSalary = 0.0;
            for (Employee employee : employees) {
                totalSalary += employee.getSalary();
            }
            System.out.printf("Total salary: $%.2f%n", totalSalary);

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + fileName);
        }
    }
    private static class Employee {
        private String name;
        private double salary;

        public Employee(String name, double salary) {
            this.name = name;
            this.salary = salary;
        }

        public String getName() {
            return name;
        }

        public double getSalary() {
            return salary;
        }
    }
}
