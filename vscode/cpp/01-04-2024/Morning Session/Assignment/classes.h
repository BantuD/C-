namespace bank{

class Loan{
    private:
        double principle;
        float period;
    
    public:
        double GetPrinciple(){

            return principle;
        }
        void SetPrinciple(double  amount){
            this->principle=amount;
        }
        float GetPeriod(){
            return period;
        }
        void SetPeriod(float pr){
            this->period=pr;
        } 

        virtual float GetRate() = 0;

        double GetEMI(){
            return (principle*(1+ GetRate()*period/100 )/(12*period));
            
        } 


};

class PersonalLoan : public Loan
{

    private:
        float rate;

    public:
    PersonalLoan(float amount){
        //rate=amount<=5?0.15:0.16;
        rate = 1;
        SetPrinciple(amount);
    }

  
        float GetRate(){
            return rate;
        }        

};
class HomeLoan : public Loan{
    private:
        float rate;

    public:
        HomeLoan(float amount){
            rate = amount <= 20 ? 0.10 : 0.11;
            SetPrinciple(amount);
        }
        float GetRate(){
            return rate;
        }
};
};