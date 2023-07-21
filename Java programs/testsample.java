import java.util.Arrays;

public class testsample {
    public static void main(String[] args) {
        int[] a = {16,1,2,0,4,2,7,1,2,14};
        Arrays.sort(a);
        int b = a[a.length/2];
        int c = 0;
        for (int i = 0; i < a.length; i++) {
            int d= a[i] - b;
            if (d < 0) {
                d = -d;
            }
            c += d;
        }
        System.out.println(" position: " + b);
        System.out.println("Fuel: " + c);
    }
}