import java.util.Scanner;

public class decimal_limmiter2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a float value: ");
        float value = scanner.nextFloat();
        
        // Format output to 2 decimal places
        String formattedValue = String.format("%.2f", value);
        
        System.out.println("Formatted value: " + formattedValue);
        
        scanner.close();
    }
}
