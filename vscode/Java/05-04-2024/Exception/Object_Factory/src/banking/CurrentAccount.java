package banking;

import exceptions.InsufficentFundsException;

final class CurrentAccount extends Account {
    
    public void withdraw(double amount) throws InsufficentFundsException
    {
        balance -= amount;
    }
    public void deposit(double amount){
        if(balance<0)
            amount *= 0.9;
        balance += amount;
    }
    
}
