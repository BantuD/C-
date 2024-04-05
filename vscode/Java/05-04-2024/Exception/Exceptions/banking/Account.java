package banking;

public abstract class Account {
    long id;
    protected double balance;

public long id(){
    return id;
}

public double balance(){
    return balance;
}

public abstract void deposit(double amount);

public abstract void withdraw(double amount) throws InsufficentFundsException;

public void transfer(double amount, Account that) throws InsufficentFundsException{
    if(this == that)
        throw new IllegalTransferException();
    this.withdraw(amount);
    that.deposit(amount);
}

}
