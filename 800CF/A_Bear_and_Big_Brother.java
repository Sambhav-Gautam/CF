import java.util.Scanner;

public class A_Bear_and_Big_Brother {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        int a = sc.nextInt();
        int count=0;
        while(a>=t){
            t*=3;
            a*=2;
            count++;
        }
        System.out.println(count);
        sc.close();
    }
}
