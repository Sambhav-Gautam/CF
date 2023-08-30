
import java.util.Scanner;

public class B_Permutation_Sort {
    public static int solve(int arr[],int n,int search ){
        int l=0,r=n-1;
        int mid = (l+r)/2;
        while(l<=r){
            mid = (l+r)/2;
            if(arr[mid]<search){
                l = mid+1;
            }
            else if(arr[mid]>search){
                r= mid-1;
            }
            else break;
        }
        return mid;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i1=0;i1<t;i1++){
            int n = sc.nextInt();
            //int x = sc.nextInt();
            int[] arr = new int[n];

            int max1 =-100000;
            int min1 = 100000;
            boolean flag = true;
            for(int i =0;i<n;i++){
                arr[i] = sc.nextInt();
                if(i>0){
                    if(arr[i]<arr[i-1]) flag = false;
                }
                max1 = Math.max(max1,arr[i]);
                min1 = Math.min(min1,arr[i]);
            }
            if(flag) System.out.println(0);
            else if(min1==arr[0] || max1==arr[n-1]) System.out.println(1);
            else if(min1==arr[n-1] && max1==arr[0])System.out.println(3);
            else System.out.println(2);
        }
        sc.close();
    }
}
