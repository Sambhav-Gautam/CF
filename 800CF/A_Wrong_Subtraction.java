import java.util.Scanner;

public class A_Wrong_Subtraction {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        int u = sc.nextInt();
        while(u>0){
            if(t%10==0){
                t/=10;
                u--;
            }
            else{
                t--;
                u--;
            }
        }
        System.out.println(t);
        sc.close();
    }
}
