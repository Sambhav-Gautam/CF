import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class B_Rudolph_and_Tic_Tac_Toe {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            int t = Integer.parseInt(br.readLine());

            for (int i = 0; i < t; i++) {
                char[][] board = new char[3][3];

                // Read the tic-tac-toe board
                for (int j = 0; j < 3; j++) {
                    String line = br.readLine();
                    for (int k = 0; k < 3; k++) {
                        board[j][k] = line.charAt(k);
                    }
                }

                String result = findWinner(board);
                System.out.println(result);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Function to check if the row, column, or diagonal has three consecutive symbols of the same type
    private static boolean checkLine(char a, char b, char c) {
        return (a != '.' && a == b && b == c);
    }

    // Function to find the winner or DRAW
    private static String findWinner(char[][] board) {
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (checkLine(board[i][0], board[i][1], board[i][2])) {
                return String.valueOf(board[i][0]);
            }
        }

        // Check columns
        for (int i = 0; i < 3; i++) {
            if (checkLine(board[0][i], board[1][i], board[2][i])) {
                return String.valueOf(board[0][i]);
            }
        }

        // Check diagonals
        if (checkLine(board[0][0], board[1][1], board[2][2])) {
            return String.valueOf(board[0][0]);
        }
        if (checkLine(board[0][2], board[1][1], board[2][0])) {
            return String.valueOf(board[0][2]);
        }

        // If no winner, it's a draw
        return "DRAW";
    }
}
