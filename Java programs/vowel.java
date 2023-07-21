import java.util.*;

class Vowels {
    public static void main(String args[]) {
        String str = "hi how are you";
        String result = "";
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                int asciiCode = (int) c;
                int uppercaseCode = asciiCode - 32;
                char uppercaseLetter = (char) uppercaseCode;
                result += uppercaseLetter;
            } else {
                result += c;
            }
        }
        System.out.println("Result: " + result);
    }
}
