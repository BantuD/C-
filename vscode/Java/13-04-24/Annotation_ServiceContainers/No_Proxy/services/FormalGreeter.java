package services;

public class FormalGreeter implements Greet {
    
    public FormalGreeter(){
        System.out.println("Formal Greeter has been activated");
    }
    public String greet(String person){

        return "Hello " + person;
    }
    
}
