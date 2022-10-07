import java.util.Arrays;
import java.util.Stack;
public class ab38_ReverseOfArray {
   public static void main(String args[]) {
      Stack<Integer> stack = new Stack<Integer>();
      int[] myArray = {23, 93, 56, 92, 39};
      int size = myArray.length;
      for(int i=0; i<size; i++) {
        stack.push(myArray[i]);
      }
      int[] reverseArray = new int[size];
      for(int i=0; i<size; i++) {
         reverseArray[i] = stack.pop();
      }
      System.out.println("Reversed array is ::"+Arrays.toString(reverseArray));
   }
}
