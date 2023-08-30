import java.util.Scanner;

public class A_Anton_and_Danik {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        
        sc.nextLine();
        String st = sc.nextLine();
        int a=0;
        int b =0;
        for(int i=0;i<t;i++){
            if(st.charAt(i)=='A') a++;
            else b++;
        }
        if(a>b) System.out.println("Anton");
        else if(a<b) System.out.println("Danik");
        else System.out.println("Friendship");
        sc.close();
    }
}
