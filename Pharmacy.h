#ifndef PHARMACY_H
#define PHARMACY_H
#include "PatientAccount.h"
class Pharmacy : public PatientAccount
{   double price1;
    double price2;
    double price3;
    double price4;
    double price5;
    int choice;
	public:	
		Pharmacy(); 
		
		int medicationType();
		
		void updateAccount(PatientAccount&, int);
		
		
};

#endif

