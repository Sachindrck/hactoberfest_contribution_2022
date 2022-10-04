import java.util.Scanner;
public class leapyear {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your year : ");
        int year = in.nextInt();
        if (((year % 400 ==0) && (year % 4 ==0)) || (year % 100!= 0))
            System.out.println("This is a leap year");
        else {
            System.out.println("This is not a leap year");
        }

    }
} 