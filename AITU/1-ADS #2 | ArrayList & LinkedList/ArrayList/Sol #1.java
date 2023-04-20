import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<String>();
        names.add("Makhambet");
        names.add("Bagzhan");
        names.add("Zhantore");
        names.add("Bakytzhan");
        names.add("Dimash");

        // 1st Approach
        System.out.println(names);

        // 2nd Approach
        for(String name : names) {
            System.out.println(name);
        }

        // 3rd Approach
        for(int i=0; i<names.size(); i++) {
            System.out.println((i+1) + ". " + names.get(i));
        }
    }
}