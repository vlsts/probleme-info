import java.util.Scanner;

public class sum00 {
   public static void main(String []args) {
      Scanner consoleInput = new Scanner(System.in);

      int n1, n2;
      n1 = consoleInput.nextInt();
      n2 = consoleInput.nextInt();

      System.out.println(n1 + n2);
      consoleInput.close();
   }
}