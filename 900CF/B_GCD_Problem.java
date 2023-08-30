
import java.util.Scanner;

/**
 * B_GCD_Problem
 */
public class B_GCD_Problem {

    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            if (n%2==0) System.out.println(2+" "+((n-1)-2)+" "+1);
            else {
                int curr=(n-1)/2;
                if (curr%2==0) System.out.println((curr-1)+ " "+(curr+1)+" "+1);
                else System.out.println((curr-2)+ " "+(curr+2)+" "+1);
            }
        }
        sc.close();
    }
}