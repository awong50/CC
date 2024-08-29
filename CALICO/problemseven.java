import java.util.*;

public class problemseven {
    public static void main(String[] args) {
        solver(2, 2);
    }

    public static int solver(int N, int M) {
        Scanner input = new Scanner(System.in);
        String[][] blocks = new String[N][M];
        for (int i = 0; i < N; i++) {
            String temp = input.nextLine();
            int counter = 1;
            for (int k = 0; k < M; k++) {
                blocks[i][k] = temp.substring(k, counter);
                counter++;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int k = 0; k < M; k++) {
                System.out.print(blocks[i][k]);
            }
            System.out.println();
        }
        input.close();
        return 1;

    }
}