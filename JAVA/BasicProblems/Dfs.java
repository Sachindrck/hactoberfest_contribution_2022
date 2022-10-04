import java.util.Scanner;
import java.util.Arrays;


class Dfs
{
	static void search(int[][] arr,int n,int[] visited,int r)               // r is the node being explored.
	{
		visited[r]=1;
		System.out.print(r+1+" ");
		
		for(int i=0;i<n;i++)                                             // checking all the nodes if they are adjacent to r
		{
			if(visited[i]==0 && arr[r][i]==1)                         //   checking if there is an unvisited adjacent node to r
			{
				search(arr,n,visited,i);                           // explore the unvisited adjacnet node.
			}
		}
	}
	

	public static void main(String[] args)
	{
		Scanner x=new Scanner(System.in);
		System.out.println("Breadth First search");
		System.out.println(" ");
		System.out.println("enter the number of elements");
		
		int n=x.nextInt();
		int[][] arr=new int[n][n];                                      // adjacency matrix

		for(int i=0;i<n;i++)
		{
			
			int[] temp=new int[n];

			for(int j=0;j<n;j++)
			{
				System.out.println("enter element "+i+" "+j);         // enter the adjacecny matrix elements
				temp[j]=x.nextInt();
			}
			arr[i]=temp;
		}

		int[] visited=new int[n];
		System.out.println("the shortest path is -");

		search(arr,n,visited,0);
	}
}
			


		
		

				
			
