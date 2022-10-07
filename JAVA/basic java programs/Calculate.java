//calculating circumference and arc length of circle
import java.util.*;


class Calculate{
public static void main(String args[]){
Circle c=new Circle(10,37);
System.out.println("Circumference of circle is "+c.circumference());
System.out.println("Arc length is "+c.arcLength());
}
}
class Circle{
double r;
double angle;
Circle(double rad,double a){
r=rad;
angle=a;
}
double circumference(){
return 2*Math.PI*r;
}
double arcLength(){
return angle*r;
}
}