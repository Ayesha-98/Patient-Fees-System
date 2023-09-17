#include <iostream>
#include "Pharmacy.h"
#include "Surgery.h"
#include "PatientAccount.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int  surgeryType;
	int  medicationType;
	char type,checks,rate;
	int choice;
	int number;
	int dailyrate;
	
	PatientAccount patient;
	Surgery surgery;
	Pharmacy pharmacy;
	
	cout << "     PATIENT FEES SYSTEM" << endl;
	cout <<"------------------------------------" << endl;
	cout <<"Do you want to change the daily rate: " << endl;
	cout << "Enter y for yes and n for no"<< endl;
	cin >> rate;
	if(rate=='y')
	{ cout << "Enter daily rate: " << endl;
	  cin >> dailyrate;
	   patient.setdailyrate(dailyrate);
	}
	else if(rate=='n')

	{ 
	  cout << "The default daily rate is: Rs.800 " << endl;
	  dailyrate = 800;
	  patient.setdailyrate(dailyrate);
	  }
    else
    {
      cout << "Incorrect alphabet placed!"<< endl;
      return 0;
  }
	    cout << ":SURGERY TYPES: " << endl;
		cout <<"-------------------"<< endl;
		cout <<"1. Foot Surgery " << endl;
		cout <<"2. Knee Surgery" << endl;
		cout <<"3. Shoulder Surgery\n4. Hand Surgery " << endl;
		cout <<"5. Head and Neck Surgery" << endl;
		
	     cout << "Please select from 1 to 5" << endl;
	     cin >> choice;
	     cout << "The Surgery you have selected is: ";
			  if (choice==1)
			  	 cout <<"Foot Surgery"<< endl;
			  else if(choice==2)
			     cout << "Knee Surgery"<<endl;
			  else if(choice==3)
			     cout << "Shoulder Surgery"<<endl;
			  else if(choice==4)
			     cout << "Hand Surgery"<<endl;
			  else if(choice==5)
			     cout << "Head and Neck Surgery"<<endl;
	     surgery.updateAccount(patient,choice);

	//else if (type=='m')
       cout<< ":MEDICATION TYPES:" << endl;
	cout << "1. Capsules\n2. Inhalers\n3. Injections\n";
	cout << "4. Strong Pain\n5. Light Pain "<< endl;
    cout << "Please select from 1 to 5" << endl;
    cin >> choice;
	cout << "The medicatation you have selected is: ";
			  if (choice==1)
			  	 cout <<"Capsules"<< endl;
			  else if(choice==2)
			     cout << "Inhalers"<<endl;
			  else if(choice==3)
			     cout << "Injections"<<endl;
			  else if(choice==4)
			     cout << "Strong Pain"<<endl;
			  else if(choice==5)
			     cout << "Light Pain"<<endl;
	   	pharmacy.updateAccount(patient,choice);
       
cout <<"Checking the patient out of hospital?" << endl;
cout << "Enter y for yes and n for no: " << endl;
cin >> checks;
if (checks=='y')
{     cout << "Enter total number of days: " << endl;
	cin >> number;
	if(number<0)
	{ 
	   cout <<"Invalid number." << endl;
	   cin >> number;
	   }
	patient.setnoOfDays(number);
     cout << "Total Charges: Rs."<< patient.gettotalCharges() << endl;
}
else  
cout << "Can not display the total charges." << endl;
	return 0;
}

