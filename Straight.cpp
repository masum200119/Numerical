#include<iostream>
#include<math.h>
#define S 50
using namespace std;

int main()
 {
  int n, i;
  float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b, A;

  cout<<"How many data points? " << endl;
   cin >> n;

   for(i=1;i<=n;i++)
   {
   cout << "x["<< i <<"] = ";
   cin >> x[i];
   cout << "y["<< i <<"] = ";
   cin >> y[i];
 }

  for(i=1;i<=n;i++)
   {
  sumX = sumX + log(x[i]);
  sumX2 = sumX2 + log(x[i])*log(x[i]);
  sumY = sumY + log(y[i]);
  sumXY = sumXY + log(x[i])*log(y[i]);
 }
  b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
  A = (sumY - b*sumX)/n;
  a = exp(A);
 cout << "Values are: a = " << a << " and b = " << b;
 return(0);
}
