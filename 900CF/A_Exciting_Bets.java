import java.util.Scanner;

public class A_Exciting_Bets {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            long n = sc.nextLong();
            long k = sc.nextLong();
            if(n==k){
                System.out.println(0+" "+0);
            }
            else{
                long g = Math.abs(n-k);
                long m = Math.min(n%g,g-n%g);
                System.out.println(g+" "+m);
            }
            //solve();
        }
        sc.close();
    }
}
