import exceptionpk.*;

public class Program {
    
    public static void display(int x) throws IllegalTransectionException
    {
        System.out.println("Hello world");
        if(x==5)
            throw new IllegalTransectionException();
    }
    public static void main(String args[]){

        try{
            display(5);
        }
        catch(IllegalFundException e){
            e.printStackTrace();
        }
        catch(IllegalTransectionException e){
            e.printStackTrace();
        }
    }
}
