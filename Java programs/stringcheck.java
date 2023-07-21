import java.util.*;
public class stringcheck{
public static void main(String[]args){
Scanner sc=new Scanner(System.in);
System.out.println("ENTER THE STRING OF YOUR CHOICE:");
String str=sc.nextLine();
String[] word=str.split(" ");
String smallest=word[0];
String largest=word[0];
for(int i=1;i<word.length;i++){
if(word[i].length()<smallest.length()){
smallest=word[i];
}
if(word[i].length()>largest.length()){
largest=word[i];
}
}
System.out.println("THE LARGEST WORD FROM THE STRING YOU GIVEN IS:" +smallest);
System.out.println("THE SMALLEST WORD FROM THE STRING YOU GIVEN IS:" +largest);
}
}

