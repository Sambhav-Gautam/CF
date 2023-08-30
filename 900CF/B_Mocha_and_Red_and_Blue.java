import java.util.Scanner;

public class B_Mocha_and_Red_and_Blue {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases
        
        while (t-- > 0) {
            int cnt = 0;
            int n = scanner.nextInt(); // Length of the string
            char[] s = new char[n + 1];
            
            // Read the input string
            String input = scanner.next();
            for (int i = 0; i < n; i++) {
                s[i + 1] = input.charAt(i);
            }
            
            // Count the non-'?' characters in the string
            for (int i = 1; i <= n; i++) {
                if (s[i] != '?') {
                    cnt++;
                }
            }
            
            if (cnt == 0) {
                s[1] = 'R';
            }
            
            // Fill in missing characters using previous non-'?' character
            for (int i = 2; i <= n; i++) {
                if (s[i] == '?' && s[i - 1] != '?') {
                    s[i] = (char) (s[i - 1] ^ ('B' ^ 'R'));
                }
            }
            
            // Fill in missing characters using following non-'?' character
            for (int i = n - 1; i >= 1; i--) {
                if (s[i] == '?' && s[i + 1] != '?') {
                    s[i] = (char) (s[i + 1] ^ ('B' ^ 'R'));
                }
            }
            
            System.out.println(new String(s, 1, n));
        }
        scanner.close();
    }
}
