#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"
class Surgery : public PatientAccount
{   int     charge1;
    int     charge2;
    int     charge3;
    int     charge4;
    int     charge5;
    
	public:
		Surgery();
		
		void setChoice(int);
		
		int selectedType();
		
		void updateAccount(PatientAccount&, int);
	
	
};

#endif

