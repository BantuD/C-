package services;
public class CasualGreeter implements Greet{
    
    public CasualGreeter(){
        System.out.println("Casual Greeter has been activated");
    }

    public String greet(String person){
        
        return "Hi "+person;
    }
}