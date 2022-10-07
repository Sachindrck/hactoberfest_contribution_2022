//taking four double inputs and dsiplaying average and product
import java.util.*;
class averageAndProduct{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
double a,b,c,d,avg,product;
a=sc.nextDouble();
b=sc.nextDouble();
c=sc.nextDouble();
d=sc.nextDouble();
avg=(a+b+c+d)/4;
product=a*b*c*d;
System.out.println("Average is: "+avg+" product is: "+product);
}
}