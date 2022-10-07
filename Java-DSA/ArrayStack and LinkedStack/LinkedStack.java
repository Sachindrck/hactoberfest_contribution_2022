import java.util.Arrays;

public class LinkedStack {
    Node top;
    LinkedStack(){
        this.top=top;
    }
   class Node{
    Object data;
    Node link;
    }
   
    public void push(Object x) {
        Node temp=new Node();
        if (temp==null) {
            System.out.println("Heap Overflow");
            return;
        }
        temp.data=x;
        temp.link=top;

        top=temp;
    }
    public boolean IsEmpty() {
        return (top==null);
    }

    public Object peak() {
        if (!IsEmpty()) {
            return top.data;
        } else {
            System.out.println("Stack is empty");
            return -1;
        }
    }
    public void printStack() {
        if (top==null) {
            System.out.println("Stack is empty");
        }
        else{
            Node temp=top;
            while(temp!=null){
                System.out.println(temp.data);
                temp=temp.link;
            }
        }
    }
    public void pop() {
        if (top==null) {
            System.out.println("Stack is null");
            return ;
        }
        top=top.link;
    }
    // public void equals(LinkedStack top) {
    //     for (LinkedStack i = top; i!=null; i=i.link) {
            
    //     }
    // }
    
public String toString() {
    String s="";
    for (Node i = top; i!=null; i=i.link) {
       
           s+=i.data+", ";
    }
    return "["+s+"]";
}
public int size() {
    int size=0;
    for (Node i = top; i!=null; i=i.link) {
        size++;
    }
    return size;
}
    public ArrayStack toArrayStack() {
       ArrayStack as=new ArrayStack(size());
       for (Node i = top; i!=null; i=i.link) {
           as.push(i.data);
       } 
       return as;
    }
    public boolean isEqual(LinkedStack n) {
        Node firstNode=top;
        Node secondNode=n.top;
        while (firstNode!=null&& secondNode!=null) {
            if (firstNode.data!=secondNode.data) {
                return false;
            }
            firstNode=firstNode.link;
            secondNode=secondNode.link;
        }
        return true;
    }
    public Object showbottom() {
        Node i;
        for ( i = top; i.link !=null; i=i.link) {
            
        }
        return i.data;
    }
    
    public void removebottom() {
        Node i;
        for ( i = top; i.link.link !=null; i=i.link) {
            
        }
        i.link=i.link.link;
    }

    
    public Object showSecond() {
        return top.link.data;
    }
    
    public void removeSecond() {
      top.link=top.link.link;
    }
    public static void main(String[] args) {
        LinkedStack obj = new LinkedStack();
		// insert Stack value
		obj.push(11);
		obj.push(22);
		obj.push(33);
		obj.push(44);

        LinkedStack obj2 = new LinkedStack();
 		// insert Stack value
		obj2.push(11);
		obj2.push(22);
		obj2.push(33);
		obj2.push(44);

        System.out.println("TO Array Stack");
        ArrayStack as=obj.toArrayStack();
        System.out.println(as.toString());
        System.out.println();

        System.out.println("check for equal");
        boolean x=obj.isEqual(obj2);
        System.out.println(x );
        System.out.println();
        
        
        System.out.println("Most bottom element is: "+obj.showbottom());
        System.out.println("remove bottom");
         obj.removebottom();
         obj.printStack();

         System.out.println();

         System.out.println("Show second element");
       System.out.println( obj.showSecond());
     System.out.println();

     System.out.println("Remove Second element");
       obj.removeSecond();
       obj.printStack();
    }
}
