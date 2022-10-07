//calculating sum of digits
import java.util.*;
class SumOfDigits{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int m;
System.out.println("Enter no between 0 and 1000:");
m=sc.nextInt();
int sum=0;
int n=m;
while(n!=0){
sum+=(n%10);
n=n/10;
}
System.out.println("Sum Of Digits of "+m+"is"+sum);
}
}