package services;
public class FormalGreeter implements Greet{
    
    public FormalGreeter(){
        System.out.println("FormalGreeter has been activated");
    }

    public String greet(String person){
        return "Hello "+person;
    }
}