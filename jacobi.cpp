#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    cout.precision(6);
    cout.setf(ios::fixed);
    int n,i,j,k,flag=0,count=0;
    cout<<"Enter the no. of equations\n";
    cin>>n;
    double a[n][n+1];
    double x[n],xn[n+1];
    double eps,y;
    cout<<"\nEnter the elements of the augmented matrix row-wise:\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)
            cin>>a[i][j];
    cout<<"\nEnter the initial values of the variables:\n";
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the accuracy upto which you want the solution:\n";
    cin>>eps;
    for (i=0;i<n;i++)
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }

     cout<<"Iter"<<setw(10);

    for(i=0;i<n;i++)
    cout<<"x"<<i<<setw(18);

    cout<<"\n----------------------------------------------------------------------";
    do
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)
        {
            xn[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                xn[i]=xn[i]-a[i][j]*x[j];
            }
            xn[i]=xn[i]/a[i][i];

            if (fabs(xn[i]-x[i])<=eps)
                flag++;
            cout<<xn[i]<<setw(18);
        }
        for(int i=0; i<n;i++)
        x[i]=xn[i];
        cout<<"\n";
        count++;
    }while(flag<n);

    cout<<"\n The solution is as follows:\n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;
    return 0;
}
