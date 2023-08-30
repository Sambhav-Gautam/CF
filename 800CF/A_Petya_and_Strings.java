import java.util.Scanner;

public class A_Petya_and_Strings {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String t = sc.nextLine();
        String ab = sc.nextLine();
        
        t = t.toLowerCase();
        ab = ab.toLowerCase();
        
        int t1 = t.compareToIgnoreCase(ab);
        if(t1<0) System.out.println(-1);
        else if(t1>0) System.out.println(1);
        else System.out.println(0);
        
        sc.close();
    }
}
