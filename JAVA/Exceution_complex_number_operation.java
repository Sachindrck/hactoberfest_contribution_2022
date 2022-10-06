/*Complex number operations Class */
import java.util.Scanner;                    //importing scanner class
public class first                           //Creating the class first    
{
    public static void main(String arg[])
    {
        int n;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("\nComplex Number Operations :-\n");
            System.out.print("Enter real part of first number: "); 
            Double r1 = sc.nextDouble();
            System.out.print("\nEnter imaginary part of first number: ");
            Double i1 = sc.nextDouble();
            System.out.print("\nEnter real part of second number: ");
            Double r2 = sc.nextDouble();
            System.out.print("\nEnter imaginary part of second number: ");
            Double i2 = sc.nextDouble();
            System.out.println("\n--------------------------------------------------------------------------------");
            complex c1= new complex(r1,i1);      //Creating object of complex class
            complex c2 =new complex(r2,i2);
            boolean cas=true;
            while(cas)                        
            {   
                System.out.println("\nThe choice for operation on complex number :\nEnter choice:1) for Addition\nEnter choice:2) for Substraction\nEnter choice:3) for Multiplication\nEnter choice:4) for Division\nEnter choice:5) to change the input\nEnter the choice:6) Exit\n");
                System.out.println("--------------------------------------------------------------------------------");
                System.out.print("Enter your choice : ");
                n=sc.nextInt();
                System.out.println("\n--------------------------------------------------------------------------------");
                switch(n)                        
                {                                //Switch case for output based on choice
                    case 1:
                        complex res = new complex();
                        res = res.add(c1, c2);
                        System.out.print("\nYour first complex number is: "); 
                        c1.show(c1);
                        System.out.print("Your second complex number is: ");
                        c2.show(c2);
                        System.out.print("The sum is ");
                        res.show(res);
                        System.out.println("\n--------------------------------------------------------------------------------");
                        break;
                    case 2:
                        complex tar = new complex();
                        tar = tar.subtract(c1, c2);
                        System.out.print("\nYour first complex number is: ");
                        c1.show(c1);
                        System.out.print("Your second complex number is: ");
                        c2.show(c2);
                        System.out.print("The difference is ");
                        tar.show(tar);
                        System.out.println("\n--------------------------------------------------------------------------------");
                        break;
                    case 3:
                        complex mu = new complex();
                        mu = mu.multiply(c1, c2);
                        System.out.print("\nYour first complex number is: ");
                        c1.show(c1);
                        System.out.print("Your second complex number is: ");
                        c2.show(c2);
                        System.out.print("The product is ");
                        mu.show(mu);
                        System.out.println("\n--------------------------------------------------------------------------------");
                        break;
                    case 4:
                        complex di = new complex();
                        di = di.div(c1, c2);
                        System.out.print("\nYour first complex number is: ");
                        c1.show(c1);
                        System.out.print("Your second complex number is: ");
                        c2.show(c2);
                        System.out.print("The division is ");
                        di.show(di);
                        System.out.println("\n--------------------------------------------------------------------------------");
                        break;
                    case 5:
                        Scanner obj=new Scanner(System.in);   //Creating scanner object for taking input
                        System.out.print("\nEnter real part of first number: ");
                        Double real1 = obj.nextDouble();
                        System.out.print("\nEnter imaginary part of first number: ");
                        Double img1 = obj.nextDouble();
                        System.out.print("\nEnter real part of second number: ");
                        Double real2 = obj.nextDouble();
                        System.out.print("\nEnter imaginary part of second number: ");
                        Double img2 = obj.nextDouble();
                        c1= new complex(real1,img1);          //Creating object of complex class
                        c2 =new complex(real2,img2);
                        System.out.println("\n--------------------------------------------------------------------------------");
                        break;
                    case 6:
                        System.out.println("\nThank you for using Complex Number Calculator\n");
                        System.out.println("--------------------------------------------------------------------------------");
                        cas=false;
                        break;
                    default:
                        System.out.println("\nInvalid choice .\n");
                        System.out.println("--------------------------------------------------------------------------------");
                        break;
                }
            }
        }

    }
}
/*Validation of input value :-

Complex Number Operations :-

Enter real part of first number: 1

Enter imaginary part of first number: 2

Enter real part of second number: 3

Enter imaginary part of second number: 4

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 1

--------------------------------------------------------------------------------

Your first complex number is: 1.0+2.0i
Your second complex number is: 3.0+4.0i
The sum is 4.0+6.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 2

--------------------------------------------------------------------------------

Your first complex number is: 1.0+2.0i
Your second complex number is: 3.0+4.0i
The difference is -2.0-2.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 3

--------------------------------------------------------------------------------

Your first complex number is: 1.0+2.0i
Your second complex number is: 3.0+4.0i
The product is -5.0+10.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 4

--------------------------------------------------------------------------------

Your first complex number is: 1.0+2.0i
Your second complex number is: 3.0+4.0i
The division is 15.0+6.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 5

--------------------------------------------------------------------------------

Enter real part of first number: 0

Enter imaginary part of first number: 0

Enter real part of second number: 0

Enter imaginary part of second number: 0

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 1

--------------------------------------------------------------------------------

Your first complex number is: 0.0
Your second complex number is: 0.0
The sum is 0.0

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 2

--------------------------------------------------------------------------------

Your first complex number is: 0.0
Your second complex number is: 0.0
The difference is 0.0

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 3

--------------------------------------------------------------------------------

Your first complex number is: 0.0
Your second complex number is: 0.0
The product is 0.0

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 4

--------------------------------------------------------------------------------

Your first complex number is: 0.0
Your second complex number is: 0.0
The division is NaNNaNi

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 5

--------------------------------------------------------------------------------

Enter real part of first number: 0

Enter imaginary part of first number: -1

Enter real part of second number: 0

Enter imaginary part of second number: -2

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 1

--------------------------------------------------------------------------------

Your first complex number is: -1.0i
Your second complex number is: -2.0i
The sum is -3.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 2

--------------------------------------------------------------------------------

Your first complex number is: -1.0i
Your second complex number is: -2.0i
The difference is 1.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 3

--------------------------------------------------------------------------------

Your first complex number is: -1.0i
Your second complex number is: -2.0i
The product is -2.0

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 4

--------------------------------------------------------------------------------

Your first complex number is: -1.0i
Your second complex number is: -2.0i
The division is InfinityNaNi

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 5

--------------------------------------------------------------------------------

Enter real part of first number: -1

Enter imaginary part of first number: -2

Enter real part of second number: -3

Enter imaginary part of second number: -4

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 1

--------------------------------------------------------------------------------

Your first complex number is: -1.0-2.0i
Your second complex number is: -3.0-4.0i
The sum is -4.0-6.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 2

--------------------------------------------------------------------------------

Your first complex number is: -1.0-2.0i
Your second complex number is: -3.0-4.0i
The difference is 2.0+2.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 3

--------------------------------------------------------------------------------

Your first complex number is: -1.0-2.0i
Your second complex number is: -3.0-4.0i
The product is -5.0+10.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 4

--------------------------------------------------------------------------------

Your first complex number is: -1.0-2.0i
Your second complex number is: -3.0-4.0i
The division is 15.0+6.0i

--------------------------------------------------------------------------------

The choice for operation on complex number :
Enter choice:1) for Addition
Enter choice:2) for Substraction
Enter choice:3) for Multiplication
Enter choice:4) for Division
Enter choice:5) to change the input
Enter the choice:6) Exit

--------------------------------------------------------------------------------
Enter your choice : 6

--------------------------------------------------------------------------------

Thank you for using Complex Number Calculator

-------------------------------------------------------------------------------- */