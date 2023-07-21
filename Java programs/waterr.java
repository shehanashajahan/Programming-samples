import java.util.*;
public class waterr{
	public static int maxWater(int[] arr) {
		Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++)
            arr[i]=sc.nextInt();
    		int n = arr.length;
    if (n < 2) {
        return 0;
    }
    int max1 = Integer.MIN_VALUE, max2 = Integer.MIN_VALUE;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return (Math.min(max1, max2) * (n - 2));
}
}