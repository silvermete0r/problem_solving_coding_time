import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String fileName = "dates.txt";
        ArrayList<Date> dates = new ArrayList<Date>();
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");

        try {
            File file = new File(fileName);
            Scanner fileIn = new Scanner(file);
            while (fileIn.hasNextLine()) {
                String line = fileIn.nextLine();
                try {
                    Date date = dateFormat.parse(line);
                    dates.add(date);
                } catch (ParseException e) {
                    System.out.println("Invalid date format: " + line);
                }
            }
            fileIn.close();

            Collections.sort(dates, new Comparator<Date>() {
                public int compare(Date date1, Date date2) {
                    return date1.compareTo(date2);
                }
            });

            for (Date date : dates) {
                System.out.println(dateFormat.format(date));
            }

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + fileName);
        }
    }
}
