import java.util.*;
class GCD  {   
	public static void main(String[] args)   {  
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter the first number : ");
		int a = scn.nextInt();
		System.out.println("Enter the second number : ");
		int b = scn.nextInt();
		System.out.println("GCD of " + a +" and " + b + " is " + findGCD(a, b));   
	}  
	static int findGCD(int a, int b)   {   
		if (b == 0)   
			return a;     
		return findGCD(b, a % b);   
	}   
}  
