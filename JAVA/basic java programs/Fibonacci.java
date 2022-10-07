//printing  first m fibonacci numbers
import java.util.*;
class Fibonacci{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int m=sc.nextInt();
    int prevVal = 1;
     int prevPrevVal = 0;
     System.out.print(prevVal+" ");
     int ctr=1;

     do{
         int currVal = prevVal + prevPrevVal;
         prevPrevVal = prevVal;
         prevVal = currVal;
         System.out.print(currVal+" ");
         ctr++;
     }while(ctr<m);

}

}