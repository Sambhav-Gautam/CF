import java.util.Scanner;

public class A_Next_Round {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int sum =0;
        int[] arr = new int[n];
        for(int i =0;i<n;i++){
            arr[i] = sc.nextInt();
            if((arr[x-1]<=arr[i] || arr[x-1]==arr[i]) && arr[i]>0) sum++;
            
        }
        System.out.println(sum);
        solve();
        sc.close();
    }
    
}
