#include <iostream>

using namespace std;

int main()
{
     int n=0;
    int sum=1;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        sum*=i;
    }
    cout<<sum<<endl;
    return 0;
}
