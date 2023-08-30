import java.util.Scanner;

public class A_Watermelon {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        if(t%2==0 && t!=0){
            if((t-2)%2==0) System.out.println("YES");
        }
        else System.out.println("NO");
        sc.close();
    }
}
