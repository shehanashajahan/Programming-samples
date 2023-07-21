import java.util.*;

class sample{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
            int a=n%100;
            int b=n/100;
            int sum=a+b;
        if(sum==n){
            System.out.println("Yes");
        }else{
            System.out.println("NO");
        }
    }
}