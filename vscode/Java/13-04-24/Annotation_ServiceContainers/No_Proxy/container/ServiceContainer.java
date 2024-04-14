package container;

public class ServiceContainer {
    
    public static <I,J extends I> I getService(Class<I> iface, Class<J> impl) throws Exception
    {
        Class<?> c = Class.forName(impl.getName());
        System.out.println("Creating the instance for "+impl.getSimpleName());
        return (I) c.getConstructor().newInstance();
    }
}
