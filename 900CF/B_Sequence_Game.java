import java.util.Scanner;

/**
 * B_Sequence_Game
 */
public class B_Sequence_Game {

     public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            //int x = sc.nextInt();
            boolean sorted = true;
            int[] arr = new int[n];
            int max = -100000;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                max = Math.max(arr[i],max);
                if(i>0){
                    if(arr[i-1]<arr[i]) continue;
                    else sorted = false;
                }
            }
            if(sorted){
                for(int i=0;i<n;i++){
                    System.out.print(arr[i]+" ");
                }
                System.out.println();
            }
            else{
                int c1 =0;
                int i=0;
                System.out.print(arr[0]+" ");
                while(c1+1<2*n){
                    if(i+2<n){
                        System.out.print(arr[i]+" ");
                        System.out.print((arr[i]-1)+" ");
                        System.out.print(arr[i+2]+" ");
                        i++;
                    }
                    c1++;
                }
                while(i<n){
                    System.out.print(arr[i]+" ");
                    i++;
                }
                System.out.println();
            }
            
            //solve();

        }
        sc.close();
    }
}