import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class A_Desorting {
    public static void main(String[] args) {
        FR sc = new FR();

        // Read the first line containing two integers
        int t = sc.ni();
        //int b = sc.nI();
        for(int i1 =0;i1<t;i1++){
            int n = sc.ni();
            boolean flag = true;
            //int k = sc.nI();
            int n1=0,n2=0;
            int min =100000;
            int[] a = new int[n];
            for(int i =0;i<n;i++){
                a[i] = sc.ni();
            }
            for(int i=1;i<n;i++){
                if(a[i-1]>a[i]){
                    flag = false;
                    break;
                }
                else if (min > (a[i] - a[i-1])) {
                    min = a[i] - a[i-1];
                    n1 = a[i];
                    n2 = a[i-1];
                }
            }
            int count =0;
            if(flag && n>1){
                while(n2<=n1){
                    n2++;
                    n1--;
                    count++;
                }
            }
            System.out.println(count);
        }
        
    }
}
class FR {
    BufferedReader br;
    StringTokenizer st;
    public FR() {
        br = new BufferedReader(new InputStreamReader(System.in));
    }
    public String next() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }
    public int ni() {
        return Integer.parseInt(next());
    }
    public long nll() {
        return Long.parseLong(next());
    }
    public double nd() {
        return Double.parseDouble(next());
    }
    public String nl() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}

//ni() -> nextInt()
//nl() -> nextLine()
//nll -> nextLong()
//nd -> nextDouble()
//FR -> FastReader 

