#include<iostream>
#include<math.h>
#define f(x) 1/(1+pow(x,2))

using namespace std;
int main()
  {
    float lower, upper, integration=0.0, h, k;
     int i,n;

    cout<<"Enter lower limit of integration: ";
    cin>>lower;
    cout<<"Enter upper limit of integration: ";
    cin>>upper;
    cout<<"Enter number of sub intervals: ";
    cin>>n;

   h= (upper - lower)/n;
   integration = f(lower) + f(upper);

    for(i=1; i<= n-1; i++)
     {
       k = lower + i*h;
    if(i%3==0)
    {
    integration = integration + 2 * (f(k));
    }
   else
   {
    integration = integration + 3 * (f(k));
  }
 }
  integration = integration * h*3/8;

 cout<< endl <<"Required value of integration is: "<< integration;

 return 0;
}

