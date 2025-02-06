import java.util.*;
public class All_input_types {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Character input
        System.out.print("Enter a character: ");
        char c = input.next().charAt(0);

        // Integer input
        System.out.print("Enter an integer: ");
        int i = input.nextInt();

        // Double input
        System.out.print("Enter a double: ");
        double d = input.nextDouble();

        // String input (single word)
        System.out.print("Enter a single word string: ");
        String s1 = input.next();

        // String input (full line)
        System.out.print("Enter a full sentence: ");
        input.nextLine();  // Consume the leftover newline
        String s2 = input.nextLine();

        // Integer array input
        System.out.print("Enter the size of integer array: ");
        int n = input.nextInt();
        int[] intArray = new int[n];
        System.out.println("Enter " + n + " integers: ");
        for (int j = 0; j < n; j++) {
            intArray[j] = input.nextInt();
        }

        // Character array input
        System.out.print("Enter a word (to store as character array): ");
        String charString = input.next();
        char[] charArray = charString.toCharArray();

        // Display the inputs
        System.out.println("\nYou entered:");
        System.out.println("Character: " + c);
        System.out.println("Integer: " + i);
        System.out.println("Double: " + d);
        System.out.println("Single word string: " + s1);
        System.out.println("Full sentence: " + s2);
        
        System.out.print("Integer array: ");
        for (int num : intArray) {
            System.out.print(num + " ");
        }

        System.out.print("\nCharacter array: ");
        for (char ch : charArray) {
            System.out.print(ch + " ");
        }

        input.close(); // Close the scanner
    }
}
