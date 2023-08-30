import java.util.Scanner;

public class B_Luntik_and_Subsequences {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            //int x = sc.nextInt();
            int[] arr = new int[n];
            long sum=0;int c1=0,c2=0;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                sum+=arr[i];
                if(arr[i]==0) c1++;
                else if(arr[i]==1) c2++;
            }
            System.out.println((long)Math.pow(2,c1)*c2);
            solve();
        }
        sc.close();
    }
}
