//FileName:T2_23.cpp
//Author:ÍõÃÎìÊ
//E-mail:1756610297@qq.com
//Time:Mar 12,2022
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,n,m,j,k;
    cin>>a>>b>>c>>d>>e;
    if(a>b)f=a;
    else f=b;
    if(c>f)g=c;
    else g=f;
    if(d>g)h=d;
    else h=g;
    if(e>h)i=e;
    else i=h;
    if(a>b)n=b;
    else n=a;
    if(c>n)m=n;
    else m=c;
    if(d>m)j=m;
    else j=d;
    if(e>j)k=j;
    else k=e;
    cout << "Largest is " << i<<endl;
    cout<<"Smallest is "<<k<<endl;
    return 0;
}
