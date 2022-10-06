import java.util.Scanner;

class leapYear
{
    int y;
    public void input()
    {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter year:");
        y = ob.nextInt();
        ob.close();
    }

    public boolean checkLeap()
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(y%4 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    public static void main(String [] args)
    {
        leapYear ob = new leapYear();
        ob.input();
        
        if(ob.checkLeap())
        {
            System.out.println("Leap year");
        }
        else
        {
            System.out.println("Not a leap year");
        }
    }
}