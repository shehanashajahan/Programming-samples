import java.util.*;
public class Equalarray{
public static void main(String[]args){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the size of the first array:");
int n=sc.nextInt();
int a[]=new int[n];
System.out.println("Enter the elements of the array:");
for(int i=0;i<n;i++){
a[i]=sc.nextInt();
}
System.out.println("Enter the size of the second array:");
int m=sc.nextInt();
int b[]=new int[m];
System.out.println("Enter the elements of the second array:");
for(int j=0;j<m;j++){
b[j]=sc.nextInt();
}
if(a.length==b.length){
System.out.println("Yes");
}
else{
System.out.println("No");
}
}
}




