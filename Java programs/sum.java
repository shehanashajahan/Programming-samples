import java.util.*;
public class sum{
public static void main(String[]args){
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
while(num>9){
int sum=0;
while(num>0){
sum+=num%10;
num/=10;
}
num=sum;
}
System.out.println("The sum of the digits you given is:"+num);
}
}
