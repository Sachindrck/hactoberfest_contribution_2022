import java.util.Scanner;
public class maxInThreeNumbers
{
    int a, b, c;
    public maxInThreeNumbers(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    public int max()
    {
        if(a>b)
        {
            if(a>c)
            {
                return a;
            }
            else
            {
                return c;
            }
        }
        else
        {
            if(b>c)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
    }

    public static void main(String[] args) 
    {

        Scanner ob = new Scanner(System.in);
        int a, b, c;
        System.out.println("Enter three numbers:");
        a = ob.nextInt();
        b = ob.nextInt();
        c = ob.nextInt();
        ob.close();
        maxInThreeNumbers kb = new maxInThreeNumbers(a, b, c);
        System.out.println("Largest number is: "+kb.max());
    }
}
