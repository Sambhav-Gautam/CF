import java.util.Scanner;

public class A_Soldier_and_Bananas {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int k= sc.nextInt();
        int n = sc.nextInt();
        int w = sc.nextInt();
        int sum=0;
        for(int i=1;i<=w;i++){
            sum += (i*k);
            
        }
        if(sum<=n) System.out.println(0);
        else System.out.println(sum-n);
        sc.close();
    }
}
