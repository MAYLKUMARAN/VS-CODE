import java.util.*;
public class GCD_HCF_LCM {
    public static void main(String[] args)
    {
        Scanner input= new Scanner(System.in);
        System.out.println("PROGRAM TO FIND GCD AND LCM");
        System.out.print("\t Enter a value 1: ");
        int a=input.nextInt();
        System.out.print("\t Enter a value 2: ");
        int b=input.nextInt();
        int val=0;
        if(a<b)
        {
            val=a;
        }
        else
        {
            val=b;
        }
        int GCD_val=0;
        int i=val;
        while(i!=0)
        {
            if(a%i==0 && b%i==0)
            {
                GCD_val=i;
                break;
            }
            i--;
        }
        System.out.println("The GCD is: "+GCD_val);
        System.out.println("The LCM is: "+a*b/GCD_val);
        input.close();
    }
}
