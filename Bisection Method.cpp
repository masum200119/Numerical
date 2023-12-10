#include<iostream>
#include<iomanip>
#include<math.h>
#define f(x)  cos(x) - x * exp(x)

using namespace std;
int main()
{
	 float x0, x1, x, f0, f1, f, e;
	 int count = 1;

     cout<< setprecision(4)<< fixed;

	 while(1)
     {
      cout<<"Enter first guess: ";
     cin>>x0;
     cout<<"Enter second guess: ";
     cin>>x1;
     cout<<"Enter tolerable error: ";
     cin>>e;

	 f0 = f(x0);
	 f1 = f(x1);

	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  continue;
	 }
	 else
        break;
     }

	 cout<<"\nBisection Method"<< endl;
	 do
	 {
		  x = (x0 + x1)/2;
		  f = f(x);
		  cout<<"Iteration-"<< count<<":\t x = "<< setw(10)<< x<< endl;
		  if( f0 * f < 0)
		  {
			   x1 = x;
		  }
		  else
		  {
             x0 = x;
		  }
        count++;
	 }while(fabs(f)>e);

	 cout<< endl<< "Root is: "<<  x<< endl;
	 return 0;
}
