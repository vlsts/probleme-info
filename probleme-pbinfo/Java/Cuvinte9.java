import java.util.ArrayList;
import java.util.Scanner;

public class cuvinte9 {
   public static void main(String[] args) {
      Scanner console = new Scanner(System.in);
      String propozitie = console.nextLine();
      String[] propozitieSeparata = propozitie.split(" ");
      String RegExp = "\\d+";
      ArrayList<String> numereString = new ArrayList<String>();
      Boolean gasit = false;

      for (String cuvant : propozitieSeparata) {
         if (cuvant.matches(RegExp)) numereString.add(cuvant);
      }
       
      int cateNumere = numereString.size();

      if (cateNumere == 0) {
          System.out.println("nu exista");
          console.close();
          return;
      }

      for (int i = 9; i > -1; i--) {
         for (int index = 0; index < cateNumere; index++) {
            if (numereString.get(index).startsWith("" + i)) {
               System.out.print(numereString.get(index));
               gasit = true;
               break;
            }
         }
         if (gasit) break;
      }

      console.close();
   }
}