// import java.io.BufferedReader;
// import java.io.IOException;
// import java.io.InputStreamReader;
// import java.util.StringTokenizer;



// public class A_Rudolph_and_Cut_the_Rope {
//     public static void main(String[] args) {
//         FR sc = new FR();

//         int t = sc.ni(); // Read the number of test cases
//         for (int i1 = 0; i1 < t; i1++) {
//             int n = sc.ni(); // Read the number of nails

//             int[] a = new int[n]; // Array to store the heights of nails
//             int[] b = new int[n]; // Array to store the lengths of ropes tied to nails

//             // Read the heights and lengths of ropes tied to nails
//             for (int i = 0; i < n; i++) {
//                 a[i] = sc.ni();
//                 b[i] = sc.ni();
//             }

//             int mx = -1; // Variable to store the maximum height
//             int index=0;
//             int count = 0; // Variable to store the count of ropes to be cut

//             // Find the nail with the highest height and the length of rope tied to it
//             for (int i = 0; i < n; i++) {
//                 if (a[i] > mx) {
//                     mx = a[i];
//                     index =i;
//                 }
//             }
//             int out =0;
//             // Find the minimum number of ropes that need to be cut
//             for (int i = 0; i < n; i++) {
//                 if (a[i]>Math.abs(b[index]-a[index])-1 && a[i] <=mx) {
//                     count++;
//                 }
//                 else out++;
//             }

//             if(out>0 ) System.out.println(count);
//             else if(out==0) System.out.println(0);
//         }
//     }
// }

// // The FR class and the mapping comments remain the same as before.


// // The FR class and the mapping comments remain the same as before.

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

