package bank;
public class PersonalLoan{
    public double comm(int amount,int year){
        return amount>5000000?amount*0.25*year:amount*0.20*year;
    }
    public double woman(int amount,int year){
        return comm(amount,year)-amount*0.2;
    }
}