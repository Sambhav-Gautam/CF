import java.util.Scanner;

public class A_Nearly_Lucky_Number {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        long t= sc.nextLong();
        int count4 =0;
        int c7 =0;
        while(t>0){
            if(t%10==4){
                t/=10;
                count4++;
            }
            else if(t%10==7){
                t/=10;
                c7++;
            }
        }
        if((count4+c7==7 || count4+c7==4) ||((count4==4 || count4==7) && (c7==7 || c7==4)) ) System.out.println("YES");
        else System.out.println("NO");
        // for(int i1=0;i1<t;i1++){
        //     int n = sc.nextInt();
        //     //int x = sc.nextInt();
        //     // int[] arr = new int[n];
        //     // for(int i =0;i<n;i++){
        //     //     arr[i] = sc.nextInt();
        //     // }
        //     solve();
        // }
        sc.close();
    }
}
