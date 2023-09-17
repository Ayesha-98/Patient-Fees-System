#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

// Hospital Daily Rate
const int DAILY_RATE = 800;

class PatientAccount
{   private:
	     double totalCharges;
	     int noOfDays;
	     int DAILY_RATE;
     public:
      PatientAccount();
    PatientAccount(int);
    
    void updatetotalCharges(double);
    
    double gettotalCharges();
    
    void setnoOfDays(int);
    
    int getnoOfDays();
    
    void setdailyrate(int);
    
    

};

#endif

