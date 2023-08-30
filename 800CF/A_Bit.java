import java.util.Scanner;

public class A_Bit {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        int score =0;
        for(int i=0;i<t;i++){
        String ab = sc.nextLine();
        if(ab.compareTo("X--")==0){
            score--;
        }
        else if(ab.compareTo("X++")==0){
            score++;
        }
        else if(ab.compareTo("--X")==0){
            score--;
        }
        else score++;
    }
    
        System.out.println(score);
        sc.close();
    }
}
