#include "Pharmacy.h"
using namespace std;

        Pharmacy::Pharmacy() 
        { price1 = 60.0;
          price2 = 70.0;
          price3 = 80.0;
          price4 = 90.0;
          price5 = 100.0;
		}	 	
		void Pharmacy::updateAccount(PatientAccount& object, int charges)
		{ switch(charges)
		       { case 1:
		       	     object.updatetotalCharges(price1);
		       	     break;
		       	 case 2:
		       	     object.updatetotalCharges(price2);
		       	     break;
		       	 case 3:
		       	     object.updatetotalCharges(price3);
		       	     break;
		       	 case 4:
		       	     object.updatetotalCharges(price4);
		       	     break;
		       	 case 5:
		       	     object.updatetotalCharges(price5);
		       	     break;
			   }
		} 
		
