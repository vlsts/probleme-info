import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

public class prime {
   public static boolean prim (int numar) {
      if (numar < 4) return true;
      for (int i = 2; i <= Math.sqrt(numar); i++) {
         if (numar % i == 0) return false;
      }
      return true;
   }
   public static void main(String[] args) {
      File outputFile = null;
      FileWriter out = null;
      FileReader inRead = null;
      BufferedReader inBuffer = null;
      int numerePrime;
      String primeProbaString = null;
      ArrayList<Integer> primeProba = new ArrayList<Integer>();
      String primProbaString = null;

      try {
         outputFile = new File("prime.out");
         out = new FileWriter(outputFile);
         outputFile.createNewFile();
         
         inRead = new FileReader("prime.in");
         inBuffer = new BufferedReader(inRead);

         numerePrime = Integer.parseInt(inBuffer.readLine());
         primeProbaString = inBuffer.readLine();

         for (int i = 0; i < numerePrime; i++) {
            primProbaString = primeProbaString.split(" ")[i];
            primeProba.add(i, Integer.parseInt(primProbaString));
         }

         for (int i = 0; i < numerePrime; i++) 
            if (prim(primeProba.get(i))) out.write(primeProba.get(i) + " ");
      }
      catch (IOException eroareIO) {
         System.out.println("Eroare I/O:\n" + eroareIO);
      }
      finally {
         try {
            out.close();
            inBuffer.close();
         }
         catch (IOException eroareIO) {
            System.out.println("Eroare I/O:\n" + eroareIO);
         }
      }
   }
}