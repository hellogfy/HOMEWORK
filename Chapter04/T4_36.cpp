#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d;
    cin>>a,b,c,d;
    char t=a;
    a=c;
    c=t;
    t=b;
    b=d;
    d=b;
    a=a+3;
    b+=3;
    c+=3;
    d+=3;

    cout <<a<<b<<c<<d << endl;
    return 0;
}
