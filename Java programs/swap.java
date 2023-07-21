import java.util.Scanner;

public class swap {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER THE STRING 1:");
        String s1=sc.nextLine();
        char[] a=s1.toCharArray();
        if(a[i]==a[i+1]){
            for(int i=0;i<a.length-1;i=i+2){
                char temp=a[i];
                a[i]==a[i+1];
                a[i+1]=temp;
            }
        }
        System.out.println(a);
    }
}