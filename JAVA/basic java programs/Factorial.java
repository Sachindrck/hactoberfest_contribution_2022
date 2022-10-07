//calculating factorial
import java.util.*;
class Factorial{
public static void main(String args[]){
int n;
Scanner sc=new Scanner(System.in);
System.out.println("enter a no");
n=sc.nextInt();
int fact=1;
for(int i=1;i<=n;i++){fact*=i;}
System.out.println("Factorial of"+n+"is"+fact);
}
}