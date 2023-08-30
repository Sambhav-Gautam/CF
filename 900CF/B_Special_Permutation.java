import java.util.Scanner;

/**
 * B_Special_Permutation
 */
public class B_Special_Permutation {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i11=0;i11<t;i11++){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int m = sc.nextInt();
            
                int[] p = new int[n+1];
                p[0] =x;

                int j =1;
                for(int i=n;i>=1;i--){
                    if(i!=x && i!=m){
                        p[j++]=i;
                    }
                }
                p[n-1] = m;
                int min =10000000;
                int max =0;
                for(int i=0;i<n/2;i++){
                    min = Math.min(p[i],min);
                }
                for(int i=n/2;i+1<=n;i++){
                    max = Math.max(p[i],max);
                }
                if(min==x && max==m){
                    for(int i=0;i<n;i++){
                        System.out.print(p[i]+" ");
                    }
                    System.out.println();
                }
                else System.out.println(-1);

        


        }
        sc.close();
    }
}