#ifndef Patient_h
#define Patient_h
#include <stdio.h>
#include <iostream>
#include <climits>


using namespace std;

class Patient{

private:
string name;
int healthcnumber;
double cervix;
int condition;

public:
Patient(string, int, double, int);
~Patient();
const string getname();
const int gethealthcnumber();
const double getcervix();
const int getcondition();
void setcondition(int);
void setcervix(int);
};




#endif /* Patient_h */