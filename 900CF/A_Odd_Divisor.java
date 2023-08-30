import java.util.Scanner;

public class A_Odd_Divisor {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            long n = sc.nextLong();
            if(n%2!=0) System.out.println("YEs");
            else{
                while(n%2==0 && n>0){
                    n/=2;
                }
                if(n%2!=0 && n!=1) System.out.println("yes");
                else System.out.println("no");
            }
            solve();
        }
        sc.close();
    }
}
