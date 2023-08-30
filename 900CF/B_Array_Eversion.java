import java.util.Scanner;

/**
 * B_Array_Eversion
 */
public class B_Array_Eversion {

    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            int[] arr = new int[n];
            int max = -100000;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                max = Math.max(arr[i],max);
            }
            int count=0;
            int i=n-1;
            while(i>=0){
                if(arr[i]==max) break;
                else{
                    int  j=i-1;
                    if(j>=0){
                        while(arr[i]>arr[j]){
                            j--;
                        }
                    }
                    if(arr[j]>arr[i]){
                        count++;
                    }
                    i=j;
                }
            }
            System.out.println(count);
            //solve();

        }
        sc.close();
    }
}