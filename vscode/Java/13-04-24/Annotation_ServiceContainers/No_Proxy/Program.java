import services.*;
import container.*;
public class Program{
    public static void main(String args[]) throws Exception{
        //Crating for casual greeting 
        var casual = ServiceContainer.getService(Greet.class,CasualGreeter.class);
        System.out.println(casual.greet("rajul"));
        System.out.println();
        System.out.println(casual.greet("Kaushik"));
        System.out.println();
        
        
        var formal = ServiceContainer.getService(Greet.class,FormalGreeter.class);
        System.out.println(formal.greet("Bantu"));
        System.out.println();
        System.out.println(formal.greet("Devesh"));
        

    }
}