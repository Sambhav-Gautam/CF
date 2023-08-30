import java.util.Scanner;

public class B_Make_AP {
    public static void solve() {
        // Your solving logic (if needed) can go here
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i1 = 0; i1 < t; i1++) {
            int a, b, c;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            int new_a = b - (c - b);
            int new_b = a + (c - a)/2;
            int new_c = a + 2*(b - a);
            if(new_a >= a && new_a % a == 0 && new_a != 0) {
                System.out.println("YES");
            }
        
            
            else if(new_b >= b && (c-a)%2 == 0 && new_b % b == 0 && new_b != 0) {
                System.out.println("YES");
            
            }
        
            
            else if(new_c >= c && new_c % c == 0 && new_c != 0) {
                System.out.println("YES");
                
            }
            else System.out.println("NO");
            
            
            
        }
        
        sc.close();
    }
}
