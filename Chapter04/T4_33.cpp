#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)cout<<"sanjiaoxing";
    if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
    cout << "yes" << endl;
    return 0;
}
