import java.util.Scanner;

public class  {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            //int x = sc.nextInt();
            int[] arr = new int[n];
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            if(arr[0]==n){
                System.out.println("YES");
            }
            else System.out.println("NO");
            solve();
        }
        sc.close();
    }
}
