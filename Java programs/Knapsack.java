import java.util.*;
public class Knapsack {

}
    static int max(int a, int b) { return (a > b) ? a : b; }
    static int knapSack(int W, int wt[], int val[], int n)
    {

        if (n == 0 || W == 0)
            return 0;
        if (wt[n - 1] > W)
            return knapSack(W, wt, val, n - 1);
        else
            return max(val[n - 1]+knapSack(W - wt[n - 1], wt,val, n - 1),knapSack(W, wt, val, n - 1));
    }

    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the first array:");
        int n=sc.nextInt();
        int p=sc.nextInt();
        int pr[]=new int[n];
        System.out.println("Enter the elements of the array:");
        for(int i=0;i<n;i++){
        pr[i]=sc.nextInt();
        }
        System.out.println("Enter the size of the second array:");
        int m=sc.nextInt();
        int b[]=new int[m];
        System.out.println("Enter the elements of the second array:");
        for(int j=0;j<m;j++){
        b[j]=sc.nextInt();
        }
      int w=sc.nextInt();
        int d = pr.length;
        System.out.println(knapSack(w, m, pr, n));
    }
}
