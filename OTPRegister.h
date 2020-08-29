#ifndef OTPRegister_h
#define OTPRegister_h
#include <stdio.h>
#include <deque>
#include <climits>
#include "Patient.h"

using namespace std;

class OTPRegister{

private:
deque< Patient * >q;

public:
OTPRegister();
~OTPRegister();
int patientnumb();
void enroll(string, int, double, int);
void examine();
void display();

};

#endif /* OTPregister_hpp */