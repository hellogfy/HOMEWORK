#include <iostream>

using namespace std;

int main()
{
    int  number;
    cin>> number;
    double  a,b,c,d,e;
    cin>>a>>b>>c>>d;
    e=a+b-c;

    cout<<"Enter  number (or -1 to quit ):"<<number<<endl;
    cout<<"Enter beginning balance:"<<a<<endl;
    cout<<"Enter total charges:"<<b<<endl;
    cout<<"Enter credit limit"<<d<<endl;
    cout << "New balance is"<<e<< endl;
    cout<<"Account:"<< number<<endl;
    cout<<"Credit limit:"<<d<<endl;
    cout<<"Balance:"<<e<<endl;
    if(e >d)
        cout<<"Credit limit Exceeded."<<endl;
    return 0;
}
