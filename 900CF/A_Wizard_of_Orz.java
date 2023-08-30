import java.util.Scanner;

/**
 * A_Wizard_of_Orz
 */
public class A_Wizard_of_Orz {

     public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            int i=0;
            if(n<=3){
                if(n==1) System.out.print("9");
                else if(n==2) System.out.print("98");
                else System.out.print("989");
            }
            else{
            while(i<n){
                if(i<3 && n>3){
                    System.out.print("989");
                    i+=3;
                }
                else{
                for(int i11=0;i11<=9;i11++){
                    System.out.print(i11);
                    i++;
                    if(i>=n) break;
                    
                }
            }
            }
        }
            System.out.println();

        }
        sc.close();
    }
}