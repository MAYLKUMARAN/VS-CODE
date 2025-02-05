import java.util.*;

class number_conversion{
    public static void main (String[] args) {
    {
        Scanner input = new Scanner(System.in);
        System.out.printf("enter a number:");
        int n=input.nextInt();
        if (n%2==0)
        {
            System.out.printf("The hex value is: %s",Integer.toHexString(n));
        }
        else 
        {
            System.out.printf("The octal value is: %s",Integer.toOctalString(n));
        }
    }
}
}