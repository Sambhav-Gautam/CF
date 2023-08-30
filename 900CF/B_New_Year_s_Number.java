/**
 * B_New_Year_s_Number
 */
import java.util.*;
public class B_New_Year_s_Number {

     public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            int cnt2021 = n%2020;
            int cnt2020 = (n-cnt2021)/2020 - cnt2021;
            if(cnt2020>=0 && 2020*cnt2020 + 2021*cnt2021==n) System.out.println("yes");
            else System.out.println("no");
        }
        sc.close();
    }
}