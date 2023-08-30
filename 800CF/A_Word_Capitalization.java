import java.util.Scanner;

public class A_Word_Capitalization {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String t= sc.nextLine();
        String alpha = t.toUpperCase();
        System.out.print(alpha.charAt(0));
        for(int i=1;i<t.length();i++){
            System.out.print(t.charAt(i));
        }
        sc.close();
    }
}
