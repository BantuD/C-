namespace bank{

class Loan{
    private:
        double principle;
        float period;
        // float rate;
    
    public:
        double GetPrinciple() const
        {
            return principle;
        }
        void SetPrinciple(double  amount){
            this->principle=amount;
        }
        float GetPeriod() const{
            return period;
        }
        void SetPeriod(float pr){
            this->period=pr;
        } 

        virtual float GetRate() const = 0;

        double GetEMI(){
        //    return 12345.0001;
         return (principle*(1+ GetRate()*period/100 )/(12*period));
            
        } 


};

class PersonalLoan : public Loan
{


    public:
    PersonalLoan() {}

  
        float GetRate() const
        {
            return GetPrinciple() < 500000 ? 0.15 : 0.16;
        }        

};
class HomeLoan : public Loan{
    private:

    public:
        HomeLoan(){}
        
            float GetRate() const
        {
            return GetPrinciple() < 2000000 ? 0.1 : 0.11;
        } 
};

}
