#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=8;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=8;j++)
            {
                cout<<" ";
                cout<<"*";
            }
            cout<<endl;
        }
        if(i%2!=0)
        {
            for(int j=1;j<=8;j++)
            {
                cout<<"*";
                cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
