import java.util.*;

public class birthday{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.nextLine();
            int[] count = new int[26]; // count the frequency of each color
            for (char c : s.toCharArray()) {
                count[c - 'a']++;
            }
            char prev = '\0';
            StringBuilder result = new StringBuilder();
            for (int i = 0; i < s.length(); i++) {
                char curr = '\0'; // current color
                for (int j = 0; j < 26; j++) {
                    if (count[j] > 0 && j + 'a' != prev) {
                        curr = (char)(j + 'a');
                        count[j]--;
                        prev = curr;
                        result.append(curr);
                        break;
                    }
                }
                if (curr == '\0') {
                    System.out.println("-1"); // cannot arrange balloons
                    break;
                }
            }
            if (result.length() == s.length()) {
                System.out.println(result.toString());
            }
        }
        sc.close();
    }
}
