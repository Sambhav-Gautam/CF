import java.util.Scanner;

/**
 * A_AB_Balance
 */
public class A_AB_Balance {

    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        for(int i1=0;i1<t;i1++){
            String n = sc.nextLine();
            int n1 =n.length();
            if(n.charAt(0)==n.charAt(n1-1))System.out.println(n);
            else{
                n = n.substring(0, n1-1)+n.charAt(0);
                System.out.println(n);
            }
        }
        sc.close();
    }
}