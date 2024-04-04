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
        virtual double getLimit()=0;

};

class PersonalLoan : public Loan
{

    public:

        float GetRate() 
            {
                return GetPrinciple()<=500000?0.15:0.16;
            } 
        

};
class HomeLoan : public Loan{

    public:
        // HomeLoan()
        // {
               
        // }
 
         float GetRate() 
            {
               float rate = GetPrinciple()<=20?0.1:.11;
               rate += GetPrinciple()>=25000?0.01:0;

                
                // return  GetPrinciple()<=20?0.1:.11;
                return rate;
            }

            double getLimit(){
                return limit;
            }
    
    private:
        static double limit;    
    
    };

double HomeLoan::limit=1500000;

class IncRateLoans{  //Asbstract Class
    public:
        virtual void setLimit()=0;
        virtual double getLimit()=0;
    
    private:
};

}
