// method to transpose a 2D matrix
import java.util.*;
class transposematrix
{
void transpose(int A[][], int B[][],int N)
{
    for (int i = 0; i < N; i++)
    {   for (int j = 0; j < N; j++)
        {    B[i][j] = A[j][i];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            System.out.print(B[i][j]+" ");
        }
        System.out.println();
    }
    
}
public static void main(String args[])
{   Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of the array");
    int N=sc.nextInt();
    int A[][]=new int[N][N];
    int B[][]=new int[N][N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            A[i][j]=sc.nextInt();
        }
    }
    transposematrix ob=new transposematrix();
    ob.transpose(A,B,N);
 }
}
 
