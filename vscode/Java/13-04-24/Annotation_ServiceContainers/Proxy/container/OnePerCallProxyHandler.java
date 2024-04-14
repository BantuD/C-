package container;
import java.lang.reflect.*;

public class OnePerCallProxyHandler{

    static class OnePerCall implements InvocationHandler{
        Class<?> targetClass;
        
        OnePerCall(Class<?> targetClass){
            this.targetClass=targetClass;
        }

        public Object invoke(Object proxyObject,Method targetMethod,Object[] args) throws Exception{
            
            Object targetObject = targetClass.getConstructor().newInstance();

            return targetMethod.invoke(targetObject,args);
        }

        
    }
       @SuppressWarnings("unchecked")
        public static <I,J extends I> I getService(Class<I> iface,Class<J> impl){
            return (I)Proxy.newProxyInstance(impl.getClassLoader(),impl.getInterfaces(),new OnePerCall(impl));
        }
}
