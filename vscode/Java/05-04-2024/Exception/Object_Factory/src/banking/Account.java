package banking;
import exceptions.*;
public abstract class Account{
    protected long id;
    protected double balance;

    public void deposit(double dep){};
    public void withdraw(double wd) throws InsufficentFundsException{};
    public final void transfer(double amount,Account that) throws InsufficentFundsException
    {
        if(that==this){
            throw new IllegalTransferException();
        }
        this.withdraw(amount);
        that.deposit(amount);

    }
}