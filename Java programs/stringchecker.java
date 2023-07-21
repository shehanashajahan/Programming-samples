import java.util.*;
public class stringcheck{
public static void main(String[]args){
Scanner sc=new Scanner(System.in);
System.out.println("ENTER THE STRING OF YOUR CHOICE:");
String str=sc.nextLine;
char max=str.charAt(0);
char min=str.charAt(0);
for(int i=1;i<str.length();i++){
char ch=str.charAt(i);
if(ch<min){
min=ch;
}
if(ch>max){
max=ch;
}
}
System.out.print("THE LARGEST WORD FROM THE STRING YOU GIVEN IS:"+min);
System.out.print("THE SMALLEST WORD FROM THE STRING YOU GIVEN IS:"+max);
}
}

