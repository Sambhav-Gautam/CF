import java.util.Scanner;

/**
 * A_Anti_Light_s_Cell_Guessing
 */
public class A_Anti_Light_s_Cell_Guessing {

     public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            int x = sc.nextInt();
            if(n==1 && x==1) System.out.println(0);
            else if(Math.min(n,x)==1) System.out.println(1);
            else System.out.println(2);
            // int[] arr = new int[n];
            // for(int i =0;i<n;i++){
            //     arr[i] = sc.nextInt();
            // }
            //solve();

        }
        sc.close();
    }
}