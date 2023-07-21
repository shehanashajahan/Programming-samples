import java.util.*;
class password{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER YOUR PASSWORD:");
        String pass=sc.nextLine();
        if(pass.length()<8|| pass.length()>10){
            System.out.println("the password should be in between 8 to 10 ");
        }
        else if(!pass.matches("^[a-zA-Z0-9]*$")){
            System.out.println("The password can contains only the letters and numbers ");
        }
        else if(!pass.matches(".*[a-zA-Z0-9].*")){
            System.out.println("The password can contains only one capital letter  ");
        }
        else{
            System.out.println("The password is valid");
        }
        }

    }