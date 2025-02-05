import java.util.Scanner;

public class decimal_limiter{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a float value: ");
        float value = scanner.nextFloat();
        
        // Print output directly with 2 decimal places
        double val=Math.ceil(value*100)/100;
        System.out.printf("Formatted value: %.2f", val);
    scanner.close();
    }
}
