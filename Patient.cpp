#include <iostream>
#include <string>
#include <climits>
#include "Patient.h"

using namespace std;

Patient::Patient(string name, int healthcnumber, double cervix,int condition) 
{
this->name=name;
this->healthcnumber=healthcnumber;
this->cervix=cervix;
this->condition=condition;
}

Patient::~Patient(){}

const string Patient::getname()
{
return name;
}

const int Patient::gethealthcnumber()
{
return healthcnumber;
}

const double Patient::getcervix()
{
return cervix;
}

const int Patient::getcondition()
{
return condition;
}

void Patient::setcervix(int cervixNEW)
{
this->cervix=cervixNEW;
}

void Patient::setcondition(int conditionNEW)
{
this->condition=conditionNEW;
}
