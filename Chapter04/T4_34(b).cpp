#include <iostream>

using namespace std;

int main()
{

    int n=0;
    cin>>n;
    double sum=1.0;
    double a=1.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
            a=a*j;
        sum+=1/a;
    }
    cout<<sum;

    return 0;
}
