import java.util.Scanner;

public class Duck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String num = sc.nextLine();
        int a = num.indexOf('0', 1);
        if (a != -1 && num.charAt(0) != '0') {
            System.out.println("Given number is a Duck number");
        } else {
            System.out.println("Given number is not a Duck number");
        }
    }
}
