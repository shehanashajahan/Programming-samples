import java.util.*;

class sample02{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int[] a=new int[n];
        int[] b=new int[m];
        int[] c=new int[n+m];
        for(int i=0;i<n;i++){
            a=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c[i]=a[i];
        }
        for(int i=0;i<n;i++){
            c[n+i]=b[i];
        }
        Arrays.sort(c);
        for(int i=0;i<c.lenght;i++){
        System.out.println(c[i]);
    }
    }
}        