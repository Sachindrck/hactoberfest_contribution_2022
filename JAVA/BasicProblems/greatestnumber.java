import java.util.Scanner;

public class greatestnumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter your three numbers: ");
        int num1=in.nextInt(); 
        System.out.print("Enter the second number: "); 
        int num2=in.nextInt();
        System.out.print("Enter the third numbers: ");  
        int num3=in.nextInt();  
        if (num1 > num2 && num1 > num3)  
        System.out.println("The largest number is: "+num1);  
        else if (num2 > num1 && num2 > num3)  
        System.out.println("The largest number is: "+num2);  
        else if (num3 > num1 && num3 > num2)  
        System.out.println("The largest number is: "+num3);  
        else {
        System.out.println("The numbers are same.");  
   }  
}  

    }
    

