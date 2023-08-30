import java.util.Scanner;

/**
 * A_Strange_Partition
 */
public class A_Strange_Partition {

    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int[] arr = new int[n];
            boolean flag = true;
            long sum=0,sum2 =0;;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                sum+=arr[i];
                sum2+=Math.ceil(arr[i]/(double)x);
                if(arr[i]%x!=0) flag = false;
                
            }
            if(flag) System.out.println(sum/x+" "+sum/x);
            else{
                System.out.println((long)Math.ceil(sum/(double)x)+" "+(sum2));
            }
            //solve();

        }
        sc.close();
    }
}