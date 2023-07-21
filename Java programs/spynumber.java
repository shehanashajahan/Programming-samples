import java.util.*;
public class spynumber{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER TO BE CHECKED:");
        int num=sc.nextInt();
        int sum=0;
        int product=1;
        int temp=num;
        while(temp>0){
            int a=temp %10;
            sum+=a;
            product*=a;
            temp/=10;
        }
        
        if(sum==product){
            System.out.println("THE GIVEN NUMBER IS A SPY NUMBER!");
        }
        else{
            System.out.println("THE GIVEN NUMBER IS NOT A SPY NUMBER!");
        }

    }
}