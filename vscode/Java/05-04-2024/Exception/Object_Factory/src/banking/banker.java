package banking;

public class banker {
    private static long nid = System.currentTimeMillis();

    public static Account OpenSavingsAccount(){
        var acc = new SavingsAccount();
        acc.id = ++nid;
        return acc;
    }

    public static Account OpenCurrentAccount(){
        var acc = new CurrentAccount();
        acc.id = ++nid;
        return acc;
    }
}
