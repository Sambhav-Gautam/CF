import java.util.Arrays;
import java.util.Scanner;

/**
 * A_Divide_and_Multiply
 */
public class A_Divide_and_Multiply {

    public static long solve(int n,long x){
        while(n%2!=0){
            n/=2;
            x*=2;
        }
        return x;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            long temp = 1;
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            for(int i=0;i<n;i++){
                while(arr[i]%2==0){
                    arr[i]/=2;
                    temp*=2;
                }
            }
            Arrays.sort(arr);
            long sum =0;
            for(int i=0;i<n-1;i++){
                sum+=arr[i];
            }
            System.out.println(temp*arr[n-1]+sum);
        }
        sc.close();
    }
}