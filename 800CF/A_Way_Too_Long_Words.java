import java.util.Scanner;

public class A_Way_Too_Long_Words {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        for (int i1 = 0; i1 < t; i1++) {
            String ab = sc.nextLine();
            if (ab.length() > 10) {
                System.out.print(ab.charAt(0) + "" + (ab.length() - 2) + ab.charAt(ab.length() - 1));
                System.out.println();
            } else {
                System.out.println(ab);
            }
            // int x = sc.nextInt();
            // int[] arr = new int[n];
            // for(int i = 0; i < n; i++){
            //     arr[i] = sc.nextInt();
            // }
            // solve();
        }
        sc.close();
    }
}
