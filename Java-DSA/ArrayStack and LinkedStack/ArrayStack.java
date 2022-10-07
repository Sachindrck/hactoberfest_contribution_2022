import java.util.Arrays;


interface Stack{
    public Boolean isEmpty();
    public void push(Object element);
    public Object pop();
    public Object peak();
    
}
public class ArrayStack implements Stack{
    private static Object a[];
    private static int top;
    private static int size;


    ArrayStack(int size){
        this.size=size;
        a=new Object[size];
        top=-1;
    }

    public Boolean isEmpty(){
        return (top<0);
    }
    public void topOfStack(){
        System.out.println("Stack top postion is "+top);
    }
    public void printStack() {
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
    @Override
    public void push(Object element) {
        // TODO Auto-generated method stub
        if (top==a.length-1) {
            int newsize= a.length+1;
            a=Arrays.copyOf(a,newsize);
        } 
        top++;
        a[top]=element;
        System.out.println(element+ " pushed");      
    }
    
public Object pop() {
    if (top<0) {
        throw new IllegalStateException("Stack is Empty");
    }
    Object object =a[top];
    top--;
    int newsize=a.length-1;
    a=Arrays.copyOf(a,newsize);
    return object;
}
@Override
public Object peak() {
    // TODO Auto-generated method stub
 if (top<0) {
     throw new IllegalStateException("Stack is empty");
 }   
 return a[top];
}
public String toString() {
    String s="";
    for (int i =  a.length-1; i >=0; i--) {
        if (a[i]==null) break;
       if (i==0) s+=a[i];
       else{
           s+=a[i]+", ";
       }
    }
    return "["+s+"]";
}
public LinkedStack toLinkedStack() {
    LinkedStack temp=new LinkedStack();
    for (int i = 0; i < a.length; i++) {
        temp.push(a[i]);
    }
    return temp;
}
public static void main(String[] args) {
    ArrayStack arraystack=new ArrayStack(5);
    System.out.println("Is stack empty: "+arraystack.isEmpty());
    arraystack.push(1);
    arraystack.push(2);
    arraystack.push(3);
    arraystack.push(4);
    arraystack.push(5);
    // System.out.println("Is stack empty: "+arraystack.isEmpty());
    // arraystack.printStack();
    // arraystack.peak();
    // arraystack.pop();
    // arraystack.printStack();
    //System.out.println(arraystack.toString());
    LinkedStack temp= arraystack.toLinkedStack();
    temp.printStack();
}
}