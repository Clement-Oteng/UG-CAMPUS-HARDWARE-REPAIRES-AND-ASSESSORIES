#include <iostream>
using namespace std;
int main()
{
string accountNumber = "";
char serviceCode = ' ';
int numMinUsed = 0;
int over=0;
int minDay = 0, minNight = 0;
double bill = 0.0;
cout.setf(ios::fixed,ios::floatfield);
cout.precision(2);
//prompt user account number
cout<<"Please enter your account number:";
cin>>accountNumber;
//prompt user for service code
cout<<"Please enter service code: (R/P only)";
cin>>serviceCode;
while(serviceCode!='r'&&serviceCode!='R'&&serviceCode!='p'&&serviceCode!='P')
{cout<<"Must be P or R\n";
cout<<"Please enter service code: (R/P only)";
cin>>serviceCode;
}
//prompt user for minutes usage
if (serviceCode == 'P'|| serviceCode=='p'){
cout<<"Enter minutes used during the day:";
cin>>minDay;
while(minDay<0)
{"invalid entry, must be >=0\n";
cout<<"Enter minutes used during the day:";
cin>>minDay;
}
cout<<"Enter minutes used during the night:";
cin>>minNight;
while(minNight<0)
{"invalid entry, must be >=0\n";
cout<<"Enter minutes used during the night:";
cin>>minNight;
}
cout<<"\nAccount #: " << accountNumber;
cout<<"\nService type: " << serviceCode;
cout<<"\nMinutes used during Day: " << minDay;
cout<<"\nMinutes used during Night: " <<minNight;
bill=25; //base cost
if(minDay > 75){
over = minDay - 75;
bill =bill+ over * .10; //add cost of extra daytime minutes
}
if(minNight > 100){
over = minNight - 100; //add cost of extra nighttime minutes
bill =bill+ over * .05;
}
}
else{ //service code is R
cout<<"Enter minutes used:";
cin>>numMinUsed ;
while(numMinUsed<0)
{"invalid entry, must be >=0\n";
cout<<"Enter minutes used:";
cin>>numMinUsed;
}
cout<<"\nAccount #: " << accountNumber;
cout<<"\nService type: " <<serviceCode;
bill = 10; //base price
if(numMinUsed > 50)
{
over = numMinUsed - 50;
bill =bill+ over * .20; //mins over 50 is .20
}
}
cout<<"\nYour total bill is: $" <<bill << endl;
system("pause");
return 0;

}