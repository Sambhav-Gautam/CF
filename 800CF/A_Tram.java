// import java.io.BufferedReader;
// import java.io.IOException;
// import java.io.InputStreamReader;
// import java.util.StringTokenizer;

// class FR {
//     BufferedReader br;
//     StringTokenizer st;
//     public FR() {
//         br = new BufferedReader(new InputStreamReader(System.in));
//     }
//     public String next() {
//         while (st == null || !st.hasMoreElements()) {
//             try {
//                 st = new StringTokenizer(br.readLine());
//             } catch (IOException e) {
//                 e.printStackTrace();
//             }
//         }
//         return st.nextToken();
//     }
//     public int ni() {
//         return Integer.parseInt(next());
//     }
//     public long nll() {
//         return Long.parseLong(next());
//     }
//     public double nd() {
//         return Double.parseDouble(next());
//     }
//     public String nl() {
//         String str = "";
//         try {
//             str = br.readLine();
//         } catch (IOException e) {
//             e.printStackTrace();
//         }
//         return str;
//     }
// }

// //ni() -> nextInt()
// //nl() -> nextLine()
// //nll -> nextLong()
// //nd -> nextDouble()
// //FR -> FastReader 
// public class A_Tram {
//     public static void main(String[] args) {
//         FR sc = new FR();

//         // Read the first line containing two integers
//         int t = sc.ni();
//         int max =-100;
//         int sum=0;
//         //int b = sc.nI();
//         for(int i1 =0;i1<t;i1++){
//             int n = sc.ni();
//             int k = sc.ni();
//             sum-=n;
//             sum+=k;
//             max = Math.max(sum,max); 
//         }
//         System.out.println(max);
//     }
// }
