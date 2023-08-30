import java.util.Scanner;

public class A_Stones_on_the_Table {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        String st = sc.nextLine();
        int count =0;
        char prev = st.charAt(0);
        for(int i=1;i<t;i++){
            if(prev==st.charAt(i)){
                count++;
            }
            prev = st.charAt(i);
        }
        System.out.println(count);
        sc.close();
    }
}
