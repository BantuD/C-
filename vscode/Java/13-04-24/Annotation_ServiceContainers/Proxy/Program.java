import container.*;
import services.*;
public class Program{

    public static void main(String arg[]) throws Exception
    {

        var fg = OnePerCallProxyHandler.getService(Greet.class, FormalGreeter.class);
        System.out.println(fg.greet("rajul"));
        System.out.println("From: "+fg.getClass());
    }
}