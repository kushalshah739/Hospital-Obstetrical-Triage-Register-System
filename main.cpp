#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <deque>
#include "OTPRegister.h"
#include "Patient.h"

using namespace std;


int main (){
OTPRegister OTPregistering;
int numpat = OTPregistering.patientnumb();
int useroption=0;


while (useroption != 4)
{
cout<<"There are currently"<<" "<<numpat<<" "<<"in the list"<<endl;
cout<<"Please choose an option:"<<endl;
cout<<"1. Register Patient"<<endl;
cout<<"2. Examine Patient"<<endl;
cout<<"3. Display Patients"<<endl;
cout<<"4. Quit"<<endl;
cin>>useroption;

if(useroption==1)
{
string patName;
int healthcardnumber;
double cervixsituation=0;
int patientCondition=0;

cout<<"[REGISTER PATIENT]"<<endl;
cout<<"Enter name:"<<endl;
cin>>patName;
cout<<"Enter health card number:"<<endl;
cin>>healthcardnumber;

OTPregistering.enroll(patName,healthcardnumber,cervixsituation,patientCondition);
}

else if(useroption==2)
{
OTPregistering.examine();
}

else if(useroption==3)
{
OTPregistering.display();
}

}
return 0;
}
