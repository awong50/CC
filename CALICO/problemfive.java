import java.util.Scanner;

public class problemfive {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        String[] inputs = new String[T];
        int thecount = 0;
        while (T > 0) {
            String temp = input.nextLine();
            inputs[thecount] = temp;
            thecount++;
            T--;
        }
        input.close();

        String s = inputs[0];
        String p = inputs[1];

        int counter = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.substring(i, i + counter + 1).equals(p.substring(0, counter + 1))) {
                System.out.println("FOUND " + s.substring(i, i + counter + 1));
                break;
            }
        }

        
    }
}