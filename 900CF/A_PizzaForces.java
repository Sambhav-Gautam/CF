import java.util.*;
/**
 * A_PizzaForces
 */
public class A_PizzaForces {

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            long n = sc.nextLong();
            System.out.println(Math.max((long)6,n+1)/2*5);
        }
        sc.close();
    }
}