import java.util.ListIterator;
import java.util.Stack;  
   
public class Test 
{  
public static void main (String[] args)   
{   
Stack <Integer> stk = new Stack<>();  
stk.push(119);  
stk.push(203);  
stk.push(988);  
ListIterator<Integer> ListIterator = stk.listIterator(stk.size());  
System.out.println("Iteration over the Stack from top to bottom:");  
while (ListIterator.hasPrevious())   
{  
Integer avg = ListIterator.previous();  
System.out.println(avg);  
}  
}  
}  