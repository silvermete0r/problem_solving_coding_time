import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String fileName = "books.txt";
        ArrayList<Book> books = new ArrayList<Book>();

        try {
            File file = new File(fileName);
            Scanner fileIn = new Scanner(file);
            while (fileIn.hasNextLine()) {
                String line = fileIn.nextLine();
                String[] parts = line.split(",");
                String title = parts[0].trim();
                String author = parts[1].trim();
                int year = Integer.parseInt(parts[2].trim());
                Book book = new Book(title, author, year);
                books.add(book);
            }
            fileIn.close();

            // Search for a book by title
            Scanner in = new Scanner(System.in);
            System.out.print("Enter a book title: ");
            String searchTitle = in.nextLine();
            boolean found = false;
            for (Book book : books) {
                if (book.getTitle().equalsIgnoreCase(searchTitle)) {
                    System.out.println(book);
                    found = true;
                    break;
                }
            }
            if (!found) {
                System.out.println("Book not found: " + searchTitle);
            }

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + fileName);
        }
    }
    private static class Book {
        private String title;
        private String author;
        private int year;

        public Book(String title, String author, int year) {
            this.title = title;
            this.author = author;
            this.year = year;
        }

        public String getTitle() {
            return title;
        }

        public String getAuthor() {
            return author;
        }

        public int getYear() {
            return year;
        }

        public String printInfo() {
            return title + " by " + author + ", " + year;
        }
    }
}
