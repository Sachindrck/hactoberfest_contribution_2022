
import java.util.*;
class MSD 
{
   public static void main(String args[]) 
    { 
	double[] input={5,10,15,20,25};
    System.out.println("Values: "+Arrays.toString(input));
	double n=5,sum=0,mean;
	for(int i=0;i<n;i++) 
	{
		sum=sum+input[i];
	}
	mean=sum/n;
       	System.out.println("Mean :"+mean);
	sum=0;  
	for(int i=0;i<n;i++) 
	{
		sum+=Math.pow((input[i]-mean),2);
	
	}
	mean=sum/(n-1);
	double deviation=Math.sqrt(mean);
	System.out.println("standard deviation :"+deviation);
   }
}

