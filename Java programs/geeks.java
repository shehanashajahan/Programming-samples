import java.util.Scanner;
public class geeks{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTER THE STRING 1:");
        String s1=sc.nextLine();
        System.out.print("ENTER THE STRING 2:");
        String s2=sc.nextLine();
        int count=0;
        int c=0;
        char[] a=s1.toCharArray();
        char[] b=s2.toCharArray();
        for(int i=0;i<a.length;i++){
            if(a[i]==b[i]){
                c++;
                }
                else{
                    count++;
                }
            }
            if(count==2){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }

    }
}