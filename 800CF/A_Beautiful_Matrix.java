import java.util.Scanner;

public class A_Beautiful_Matrix {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= 5;
        int[][] arr = new int[t][t];
        int row = 0;
        int col =0;
        for(int i1=0;i1<t;i1++){
            for(int j=0;j<t;j++){
                arr[i1][j] = sc.nextInt();
                if(arr[i1][j]==1){
                    row =i1;
                    col = j;
                }
            }
        }
        
        int row1 = Math.abs((row+1)-3);
        int col1 = Math.abs((col+1)-3);
        System.out.println(row1+col1);
        
        sc.close();
    }
}
