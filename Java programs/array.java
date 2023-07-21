import java.util.*;
class array{
    public static void main(String[] args){
        int[] arr={1,5,10,11};
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++)
            if(arr[i]<arr[i+1]){
                System.out.println(arr[i]+" " +"->" +" "+arr[i+1]);
                break;
            }
            else{   
                System.out.println(arr[i]+"->"+"-1");
                break;
            }
            
        }
     System.out.println(arr[arr.length-1]+"->"+"-1");
    }
}