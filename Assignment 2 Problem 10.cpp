#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
float a,b,c,d,e;
cout<<"Enter marks:";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
cout<<"Total="<<a+b+c+d+e<<"\n";
cout<<"Average="<<(a+b+c+d+e)/5<<"\n";
cout<<"Percentage="<<(a+b+c+d+e)*100/5<<"\n";
return 0;
}
