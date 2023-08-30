import java.util.Scanner;

public class A_Team {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        int sum1 =0;
        for(int i1=0;i1<t;i1++){
            int n = 3;
            //int x = sc.nextInt();
            int[] arr = new int[n];
            int sum =0;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                sum+=arr[i];
            }
            if(sum>=2) sum1+=1;

            solve();
        }
        System.out.println(sum1);
        sc.close();
    }
}
