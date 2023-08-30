import java.util.HashMap;
import java.util.Scanner;
import java.util.Stack;

/**
 * A_ABC_String
 */
public class A_ABC_String {

    public static boolean isBalanced(String expression) {
        Stack<Character> stack = new Stack<>();
        
        for (char c : expression.toCharArray()) {
            if (c == '(') {
                stack.push(c);
            } else if (c == ')') {
                if (stack.isEmpty()) {
                    return false;
                }
                stack.pop();
            }
        }
        
        return stack.isEmpty();
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        for(int i1=0;i1<t;i1++){
            String st =sc.nextLine();
            int n =st.length();
            if(st.charAt(0)==st.charAt(n-1)){
                System.out.println("NO");
            }
            else{
            HashMap<Character,Character> hashmap = new HashMap<>();
            hashmap.put(st.charAt(0),'(');
            hashmap.put(st.charAt(n-1),')');
            Character one = ((char) st.charAt(0));
            Character two = st.charAt(n-1);
            Character ab = (char) ('A'^'B'^'C'^one^two);
            String lol = "";
            hashmap.put(ab,'(');
            for(int i =0;i<n;i++){
                lol += hashmap.get(st.charAt(i));
            }
            hashmap.put(ab,')');
            String lol2 ="";
            for(int i =0;i<n;i++){
                lol2 += hashmap.get(st.charAt(i));
            }
            Boolean flag1 =isBalanced(lol2);
            Boolean flag2 = isBalanced(lol);
            if(flag1 || flag2) System.out.println("YES");
            else System.out.println("NO");
        }

        }
        sc.close();
    }
}