import java.util.Scanner;

/**
 * A_Long_Comparison
 */
public class A_Long_Comparison {

     public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            long n = sc.nextInt();
            int x = sc.nextInt();
            long n1 = sc.nextInt();
            int x1 = sc.nextInt();
            int min1 = Math.min(x,x1);
            x-=min1;
            x1-=min1;
            double number1=Math.pow(10,x),number2=Math.pow(10,x1);
            
            if(n*number1==n1*number2) System.out.println("=");
            else if(n*number1>n1*number2) System.out.println(">");
            else if(n*number1<n1*number2) System.out.println("<");
            
            

        }
        sc.close();
    }
}