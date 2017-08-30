#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
float P,T,R,n;
cin>>P;
cin>>T;
cin>>R;
cin>>n;
cout<<"Compound interest:"<<pow(P*R/n,n*T);
return 0;
}
