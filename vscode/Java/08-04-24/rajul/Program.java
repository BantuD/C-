class MyStack<E>{
    public Node head=null;;

    public class Node{
        public E data;
        public Node below;
        Node(E d){
            data=d;
            below=head; 
        }
    }
    
    public void push(E pe){
        head =  new Node(pe);
    }
    
    public E pop(){
        E temp =  head.data;
        head=head.below;
        return temp;
    }

    

}


public class Program{

    public static void cantMakeList(MyStack<?> a){
        for(int i=0;i<10;i++)
            System.out.println(a.pop());

           //a.push(22);  will give you an error
    }
    public static void main(String[] args) {
        var stack = new MyStack<String>();

        System.out.println("Insert values: ");
        for(int i=0;i<10;i++){
            stack.push("Rajul");
        }

        System.out.println("Printing the elements now");

        cantMakeList(stack);

        // for(int i=0;i<10;i++){
        //     System.out.println(stack.pop());
        // }
        // System.out.println(stack.pop());

    }
}