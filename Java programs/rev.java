import java.util.*;
public class rev{
public static void main(String[]args){

//Scanning the character input from the user
Scanner sc=new Scanner(System.in);
String str=sc.nextLine();
System.out.print(str);
int len=str.length();
int n=3;
int temp=0,chars=len/n;
String[] equalstr=new String[n];
if(len%n!=0){
System.out.println("The string cannot be divided:" +n);
}
else{
for(int i=0;i<len;i=i+chars){
String part = str.substring(i, i+chars);  
equalstr[temp]=part;
temp++;
}
}
System.out.println(" ");
for(int i=0;i<str.length();i++){
System.out.println(equalstr[i]);
}
}
}




