//generating 10 random numbers between 15 and 20 and calculating mean
import java.util.*;
class Random{
public static void main(String args[]){
int min=15;
int max=20;
double sum=0;
for(int i=0;i<4;i++){
sum+=Math.random()*(max-min+1)+min;  

}
System.out.println("mean of 4 random numbers is"+sum/4);

}

}