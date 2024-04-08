class stack<V>{

    private Node head;

    class Node {

        V value;
        Node tail;

        Node(V item){
            value = item;
            tail = head;
        }

        public void push(V item){
            head = new Node(item);
        }

        public V pop(){
            V val = head.value;
            head = head.tail;
            return val;
        }

        public boolean empty(){
            return head == null;
        }

    }
}