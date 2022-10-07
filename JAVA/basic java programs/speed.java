//calculating speed in km/h,m/s,miles/h
import java.util.*;
class speed{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
double dist,time,speed;
dist=sc.nextInt();
time=sc.nextInt();
speed=dist/time;
System.out.println("speed in m/s is  "+speed);
System.out.println("speed in km/h is  "+(speed*(18))/5);
System.out.println("speed in miles/h is  "+((speed*(18))/5)*0.621);
}
}