import java.util.*;
public class zigzag{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("ENTER THE N:");
        int[] arr=new int[n];
        System.out.println("ENTER THE ELEMENTS OF THE ARRAY:");
        for(int i=0;i<n;i++){
              arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
        System.out.println();

    }
}