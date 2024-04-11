public class Program
{
    public static void myname(){
        System.out.println("Rajul Dubey");
    }
    public static void main(String args[]){
        var pc = new PrinterClass();
        pc.display(Program::myname);
        pc.display(()->{System.out.println("hello Lambda World");});
        System.out.println("Hello world");
    }
}