import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class Hello {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
String dicenumbers = sc.nextLine();
int gainAmount = sc.nextInt();
int lossAmount = sc.nextInt();
int result = 0;
Matcher match = Pattern.compile("[0-9]+").matcher(dicenumbers);
while (match.find()) {
int currDiceNumber = Integer.parseInt(match.group());
if (currDiceNumber % 2 == 1) {
result += gainAmount;
} else {
result -= lossAmount;
}
}
System.out.println(result);
}
}
