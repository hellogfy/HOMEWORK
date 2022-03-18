//FileName:T2_19.cpp
//Author:Õı√ŒÏ 
//E-mail:1756610297@qq.com
//Time:Mar 12,2022
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,m,n;
    cin>>a>>b>>c;
    d=a+b+c;
    e=d/3;
    f=a*b*c;
    if(a>b) g=a;
    else g=b;
    if(g>c) h=g;
    else h=c;
    if(a<b) m=a;
    else m=b;
    if(m<c) n=m;
    else n=c;
    cout<<"Input three different integers: "<<a<<" "<<b<<" "<<c<<endl;
    cout<<"Sum is "<<d<<endl;
    cout<<"Average is "<<e<<endl;
    cout<<"Product is "<<f<<endl;
    cout<<"Smallest is "<<n<<endl;
    cout<<"Largest is "<<h<<endl;


    return 0;
}
