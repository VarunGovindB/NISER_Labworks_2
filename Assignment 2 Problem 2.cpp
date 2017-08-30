#include <iostream>
using namespace std;

int main() 
{
float cel,fahr;
cout<<"Enter temperature in Celcius:";
cin>>cel;
cout<<cel<<"\n";
fahr=cel*9/5 + 32;
cout<<"Temperature in Fahrenheit:"<<fahr;
return 0;
}
