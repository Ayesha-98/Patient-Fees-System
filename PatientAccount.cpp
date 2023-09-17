#include "PatientAccount.h"
PatientAccount::PatientAccount()
{ totalCharges = 0.0;
  noOfDays=0;
}
    
PatientAccount::PatientAccount(int d)
    { 
      noOfDays= d;
	}
    
    void PatientAccount::setdailyrate(int i)
        { DAILY_RATE =i;
		}

    void PatientAccount::updatetotalCharges(double c)
    { totalCharges += c;
	}
    double PatientAccount::gettotalCharges()
    { return totalCharges;
	}
    
    void PatientAccount::setnoOfDays(int d)
    {   noOfDays =d;   
	    totalCharges+= noOfDays* DAILY_RATE;
	}
    int PatientAccount::getnoOfDays()
    { return noOfDays;
	}

