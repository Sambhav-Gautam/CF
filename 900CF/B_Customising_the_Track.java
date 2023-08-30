
import java.util.Scanner;

/**
 * B_Customising_the_Track
 */
public class B_Customising_the_Track {

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
            long  s=0;
            for(int i=0;i<n;i++){
                s+=arr[i];
            }
            long k = s%n;
            long ans = k*(n-k);
            System.out.println(ans);
        }
        sc.close();
    }
}