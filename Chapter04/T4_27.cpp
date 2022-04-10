#include <iostream>

using namespace std;

int main()
{
    int a;
    int p=0;
    cin>>a;
    while(a>0)
        p=p*2+a%10;
    a=a/10;
    cout << p<< endl;
    return 0;
}
