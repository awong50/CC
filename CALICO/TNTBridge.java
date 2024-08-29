import java.util.Scanner;

public class TNTBridge {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt(); // number of test cases
        scanner.nextLine(); // consume newline

        for (int t = 0; t < T; t++) {
            int N = scanner.nextInt(); // number of blocks
            int K = scanner.nextInt(); // maximum jump distance
            scanner.nextLine(); // consume newline

            String blocks = scanner.nextLine(); // block sequence

            int lastTNTBlockIndex = -K - 1; // position of the last TNT block encountered
            int players = 0;

            for (int i = 0; i < N; i++) {
                if (blocks.charAt(i) == '#') {
                    if (i - lastTNTBlockIndex > K) {
                        players = -1; // infinitely many players can complete the course
                        break;
                    }
                    lastTNTBlockIndex = i;
                    players++;
                }
            }

            if (players == -1) {
                System.out.println(-1);
            } else {
                System.out.println(players);
            }
        }

        scanner.close();
    }
}
