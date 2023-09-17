#include "Surgery.h"

Surgery::Surgery()
{ charge1=5000;
  charge2=6000;
  charge3=7000;
  charge4=8000;
  charge5=9000;
}

  void Surgery::updateAccount(PatientAccount& object,int charge)
  { switch(charge)
    {  case 1:
    	  object.updatetotalCharges(charge1);
    	  break;
       case 2:
    	  object.updatetotalCharges(charge2);
    	  break;
    	case 3:
    	  object.updatetotalCharges(charge3);
    	  break;
        case 4:
    	  object.updatetotalCharges(charge4);
    	  break;
    	case 5:
    	  object.updatetotalCharges(charge5);
    	  break;
	} 
}



