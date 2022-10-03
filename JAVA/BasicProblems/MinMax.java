import java.util.Scanner;
import java.util.Arrays;

class MinMax
{

	static int[] extremes(int [] a, int i,int j)
        {
	 	int low=i;
	        int high=j;
		int min=a[low];                                   	 // dummy initialization
		int max=a[high];                                   	// dummy initialization
		if(low==high)                                        // base case-1: only one element in subarray
		{	
			min=a[i];
			max=a[j];
		}

		else if(low==high-1)                               // base case-2: only two elements in subarray    
		{

			if(a[low]<=a[high])
			{
				min=a[low];
				max=a[low];
			}
			
			else
			{
				min=a[high];
				max=a[low];
			}
		}

		else
		{
			int mid=(low+high)/2;                               //split the subarray ( divide and conquer strategy)
			int[] l=extremes(a,low,mid);
			int[] l1=extremes(a,mid+1,high);
			min=l[0];
			max=l[1];
			int min1=l1[0];
			int max1=l1[1];

			if(min1<min)
			{
				min=min1;
			}
			if(max1>max)
			{
				max=max1;
			}
		}
		
		int[] l={min,max};
		return l;                                                        // l is a vector containing the minimum and maximum elements respectively
	}

	public static void main(String[] args)
	{
		Scanner x=new Scanner(System.in);
		System.out.println("enter the number of elements");
		int n=x.nextInt();
		int[] arr=new int[n];

		for(int i=0;i<n;i++)
		{	System.out.println("enter element "+i);
			arr[i]=x.nextInt();
		}

		int l[]=extremes(arr,0,n-1);


		System.out.println("the maximum element is "+l[1]);
		System.out.println("the minimum element is "+l[0]);
	}
}






	
