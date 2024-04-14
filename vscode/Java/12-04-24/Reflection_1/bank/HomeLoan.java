package bank;
public class HomeLoan{
    public double comm(int amount,int year){
        return 6.5;
    }
    public double woman(int amount,int year){
        return (comm(amount,year)-1);
    }
}