#include <iostream>
using namespace std;

int main() 
{
float cel,fahr;
cout<<"Enter temperature in Fahrenheit:";
cin>>cel;
cout<<cel<<"\n";
cel=(fahr-32)*5/9;
cout<<"Temperature in celcius:"<<cel;
return 0;
}
