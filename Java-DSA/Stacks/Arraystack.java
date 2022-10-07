public class ArrayStack implements Stack {
    int size;
    Object[] a;

    public ArrayStack() {
        size=0;
    }

    public ArrayStack(int size) {
        a=new Object[size+1];
    }


    @Override
    public int size() {
        // TODO Auto-generated method stub
        return size;
    }


    @Override
    public void push(Object obj) {
        if(size==(a.length)) {
            resize();
        }
        a[size++]=obj;
    }


    @Override
    public Object pop() {
        // TODO Auto-generated method stub
        if(size==0) {
            throw new IllegalArgumentException("Stack is Empty");
        }

        return a[--size];
    }


    @Override
    public Object peek() {
        // TODO Auto-generated method stub
        return a[--size];
    }

    public void resize() {
        int len=a.length;
        Object[] copy=new Object[len+1];
        for(int i=0;i<a.length;i++) {
            copy[i]=a[i];
        }
        a=copy;
    }

    public static class List {
        Object data;
        List next;
        public List() {
        }
        public List(Object data) {
            this.data=data;
        }
        public List(Object data, List next) {
            this.data=data;
            this.next=next;
        }
        public static List insert(List node,Object elem) {
//			if(node==null||node.data>elem) {
//				node=new List(elem,node);
//				return node;
//			}
            List t=node;
//			for(t=node;t.next!=null;t=t.next) {
//				if(t.next.data>elem) {
//					break;
//				}
//			}
            t.next=new List(elem,t.next);
            t=t.next;
            return node;
        }
    }

    public List toLinkedList() {
        List list=new List(a[0]);
        for(int i=1;i<a.length;i++) {
            list.next=new List(a[i]);
            list=list.next;
        }
        return list;
    }

    public LinkedListStack1 toLinkedStack() {
        LinkedListStack1 lts=new LinkedListStack1(a[0]);
        LinkedListStack1 ltsCopy=lts;
        for(int i=1;i<a.length;i++) {
            lts.next=new LinkedListStack1(a[i]);
            lts=lts.next;
        }
        return ltsCopy;
    }

    public String toString() {
        String str="Element 1:\t"+a[0];
        for(int i=1;i<a.length;i++) {
            str+="\nElement "+(i+1)+":\t"+a[i];
        }
        return str;
    }

    public void printStack() {
        for(int i=0;i<a.length;i++)
            System.out.println(a[i]);
    }

    public boolean isEmpty() {
        return (size==0)?true:false;
    }

    public boolean equals(Object obj) {
        int found=0;
        for(int i=0;i<a.length;i++) {
            if(a[0]==obj) {
                found++;
            }
        }
        return (found==0)?false:true;
    }

    public Object bottomElement() {
        return a[size-1];
    }

    public Object secondElement() {
        return a[size-2];
    }

    public void removeBottomElement()
    {
        if(size==0)
        {
            throw new IllegalArgumentException("Stack is Empty");
        }
        int len=a.length;
        Object[] copy=new Object[len-1];
        size--;
        for(int i=0;i<(a.length-1);i++)
        {
            copy[i]=a[i+1];
        }
        a=copy;
    }

    public void removeSecondElement()
    {
        if(size==0)
        {
            throw new IllegalArgumentException("Stack is Empty");
        }
        size--;
        for(int i=0;i<(a.length-1);i++)
        {
            if(i>0)
                a[i]=a[i+1];
        }
        this.a[size] = null;
    }

    public static void main(String[] args) {
        ArrayStack as=new ArrayStack(5);
//		System.out.println(as.isEmpty());
        as.push("KIWI");
        as.push("PineApple");
        as.push("Banana");
// 		as.pop();
        as.push("Orange");
        as.push("Apple");
        as.push("Guava");
        as.push("Strawberry");
//		System.out.println("Size of Array is: "+as.size());
//		System.out.println(as.peek());

//		List list=as.toLinkedList();


        LinkedListStack1 lts=as.toLinkedStack();

        for(LinkedListStack1 i=lts;i!=null;i=i.next) {
            System.out.println(i.data);
        }
//		System.out.println(as.equals("KIW"));
//		System.out.println(as.bottomElement());
//		as.removeBottomElement();
//		System.out.println(as.secondElement());
//        as.removeSecondElement();
//		System.out.println(as.toString());

    }
}