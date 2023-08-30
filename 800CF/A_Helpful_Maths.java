import java.util.*;

public class A_Helpful_Maths {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String t = sc.nextLine();
        String[] av = t.split("\\+"); // Escape the + character to use it as a literal

        int[] ab = new int[av.length];
        for (int i = 0; i < av.length; i++) {
            ab[i] = Integer.parseInt(av[i]);
        }

        Arrays.sort(ab);
        if(ab.length>1){
        for (int i=0;i<ab.length-1;i++) {
            System.out.print(ab[i]+"+");
        }
        System.out.print(ab[ab.length-1]);
    }
        else{
            System.out.print(ab[0]);
        }
        sc.close();
    }
}
