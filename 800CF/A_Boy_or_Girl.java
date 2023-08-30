import java.util.*;

public class A_Boy_or_Girl {
    public static void solve(){

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String t= sc.nextLine();
        HashMap <Character,Integer> pa= new HashMap<>();
        int cd =0;
        for(int i=0;i<t.length();i++){
            if(pa.containsKey(t.charAt(i))){
                cd--;
            }
            pa.put(t.charAt(i),1);
            cd++;
        }
        if(cd%2==0) System.out.println("CHAT WITH HER!");
        else System.out.println("IGNORE HIM!");
        sc.close();
    }
}
