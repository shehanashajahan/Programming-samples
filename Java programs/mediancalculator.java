import java.util.Arrays;
import java.util.Scanner;

public class mediancalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();

        int[] numbers = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }

        double median = findMedian(numbers);
        System.out.println("Median of " + Arrays.toString(numbers) + " = " + median);
    }

    public static double findMedian(int[] arr) {
        int n = arr.length;
        Arrays.sort(arr);

        if (n % 2 == 0) {
            
            return (double)(arr[n/2 - 1] + arr[n/2]) / 2;
        } else {
            return (double)arr[n/2];
        }
    }
}
