#include <iostream>

using namespace std;

int main()
{
    int a=200;
    int b,c;
    cout<<"Enter sales in dolllar (-1 to end);";
    cin>>b;
    c=0.09*b+a;;
    cout<<"Salary is:"<<"$"<<c<<endl;

    return 0;
}

