                import java.util.Scanner;

                /**
                * B_Multiply_by_2_divide_by_6
                */
                public class B_Multiply_by_2_divide_by_6 {

                    public static void solve(){

                    }
                    public static void main(String args[]){
                        Scanner sc = new Scanner(System.in);
                        int t= sc.nextInt();
                        for(int i=0;i<t;i++) {
                            int n;
                            n= sc.nextInt();
                            int cnt2 = 0, cnt3 = 0;
                            while (n % 2 == 0) {
                                n /= 2;
                                ++cnt2;
                            }
                            while (n % 3 == 0) {
                                n /= 3;
                                ++cnt3;
                            }
                            if (n == 1 && cnt2 <= cnt3) {
                                System.out.println(2 * cnt3 - cnt2);
                            } else {
                                System.out.println(-1);
                            }
                        }
                        
                        sc.close();
                    }
                }