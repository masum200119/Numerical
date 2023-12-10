#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    pow(x,3)-2*x+5
#define   g(x)   3*pow(x,2)-2

void main()
{
	 float x0, x1, f0, f1, g0, e;
	 int count = 1, N;

	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);

	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   break;
		  }


		  x1 = x0 - f0/g0;


		  printf("%d\t\t%f\t%f\t%f\t%f\n",count,x0,f0,x1,f1);
		  x0 = x1;

		  count++;

		  if(count> N)
		  {
			   printf("Not Convergent.");
			   break;
		  }

		  f1 = f(x1);

	 }while(fabs(f1)>e);

	 printf("\nRoot is: %f", x1);
	 getch();
}
