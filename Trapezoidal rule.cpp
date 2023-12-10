#include<iostream>
#include<math.h>
#define f(x) 1/(1+pow(x,2))

using namespace std;
int main()
{
 float lower, upper, integration=0.0, h, k;
 int i, subInterval;

 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;

 h = (upper - lower)/subInterval;

 integration = (f(lower) + f(upper))/2;

 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*h;
  integration = integration + (f(k));
 }

 integration = integration * h;

 cout<< endl<<"Required value of integration is: "<< integration;

 return 0;
}
