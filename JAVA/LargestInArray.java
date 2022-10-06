import java.util.Scanner;
public class LargestInArray 
{
    public Integer[] input()
    {
        int n;
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter size of array:");
        n = ob.nextInt();

        Integer a[] = new Integer[n];

        System.out.println("Enter elements in array:");
        for(int i=0; i<n; i++)
        {
            a[i] = ob.nextInt();
        }

        ob.close();

        return a;
    }

    public int largest(Integer a[])
    {
        int l = a[0];

        for(int i=1; i<a.length; i++)
        {
            if(a[i] > l)
            {
                l = a[i];
            }
        }
        return l;
    }

    public static void main(String[] args) 
    {
        LargestInArray ob = new LargestInArray();
        System.out.println("Largest element in array is: "+ob.largest(ob.input()));
    }
}
