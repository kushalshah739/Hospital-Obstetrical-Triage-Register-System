#include <climits>

#include "OTPRegister.h"


OTPRegister::OTPRegister(){}


OTPRegister::~OTPRegister(){
int qSize=q.size();
for(int i=0;i<qSize;i++)
{
delete q[i];
q[i]=0;
}
}

void OTPRegister::enroll(string name,int healthcnumber , double cervix , int condition){
Patient * p = new Patient(name,healthcnumber,cervix,condition);
q.push_back(p);
}


void OTPRegister::examine(){
if(q.empty()){
return;}
Patient* p=q[0];
q.pop_front();
int updatecondition;
int insertdilation;
int query;
updatecondition=p->getcondition();
if (updatecondition == 0)
{
cout<<"Enter Cervix Dilation:"<<endl;
cin>>insertdilation;
p->setcervix(insertdilation);
if(p->getcervix() >= 4)
{
p->setcondition(2);
cout<<p->getname();
cout<<p->gethealthcnumber();
cout<<p->getcervix();
query=p->getcondition();
if(query == 0)
cout<<"UNKNOWN";
if(query == 1)
cout<<"LABOUR";
if(query == 2)
cout<<"ADMIT";
delete p;
p=0;
cout<<endl;
}
else if (p->getcervix() < 4)
{
p->setcondition(1);
q.push_back(p);
}
}
else if(updatecondition==1)
{
cout<<"Enter Cervix Dilation:"<<endl;
cin>>insertdilation;
p->setcervix(insertdilation);
if(p->getcervix() >= 4)
{
p->setcondition(2);
cout<<p->getname();
cout<<p->gethealthcnumber();
cout<<p->getcervix();
query=p->getcondition();
if(query == 0)
cout<<"UNKNOWN";
if(query == 1)
cout<<"LABOUR";
if(query == 2)
cout<<"ADMIT";
delete p;
p=0;
cout<<endl;
}
else if (p->getcervix()<4)
{
p->setcondition(1);
q.push_back(p);
}
}
}


int OTPRegister::patientnumb()
{
int qSize=q.size();
return qSize;
}

void OTPRegister::display()
{
int qSize=q.size();
int query;
for(int i=0;i<qSize;i++)
{
cout<<q[i]->getname();
cout<<" ";
cout<<q[i]->gethealthcnumber();
cout<<" ";
cout<<q[i]->getcervix();
cout<<" ";
cout<<q[i]->getcondition();
cout<<" ";
query=q[i]->getcondition();
if(query == 0)
cout<<"UNKNOWN";
if(query == 1)
cout<<"LABOUR";
if(query == 2)
cout<<"ADMIT";
cout<<endl;
}
}
