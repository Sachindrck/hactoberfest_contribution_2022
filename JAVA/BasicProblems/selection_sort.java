import java.util.Scanner;
import java.util.Arrays;

class selection_sort
{
	public static void main(String[] args)
	{
	Scanner x=new Scanner(System.in);

	System.out.println("enter the number of elements in the array");
	int n=x.nextInt();
	int[] arr=new int[n];

	for (int i=0;i<n;i++)
		{	
			System.out.println("enter element -"+i);
			arr[i]=x.nextInt();
		}	

	System.out.println("before sorting");
	System.out.println(Arrays.toString(arr));
	/*
	int l=0;
	int min=0;
	int temp;

	while(l<n-1){

	for(int i=l;i<n;i++)
	{if (arr[i]<arr[min])
  	{min=i;}
		
	}

	temp=arr[l];
	arr[l]=arr[min];
	arr[min]=temp;
	l++;

	}
	*/

	//implementation-2
	int min;
	int temp;
	for(int i=0;i<n;i++)
	{
		min=i;
		for (int k=i+1;k<n;k++)
		{

			if(arr[k]<arr[min])     //after each iteration, smallest element will be 
			{     
				min=k;
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;}
			}
		}
	}

	System.out.println("");
	System.out.println("after sorting");
	System.out.println(Arrays.toString(arr));
	}
}


	







	
	
		
