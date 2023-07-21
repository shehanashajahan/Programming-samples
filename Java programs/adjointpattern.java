 import java.util.*;
public class adjointpattern{
    public static void main(String[]args){
        int n=7;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                System.out.print("1");
            }
            for(int j=0;j<=i;j++){
                System.out.print(i+1);
            }
        System.out.println();
        }
    }
}