
import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class Problem_Category {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i = 0; i < t; i++) {
            int x = input.nextInt();
            if (x < 100) {
                System.out.println("Easy");
            } else if (x < 200 && x >= 100) {
                System.out.println("Medium");
            } else {
                System.out.println("Hard");
            }
        }
        if (input != null) {
            input.close();
        }
    }
}
