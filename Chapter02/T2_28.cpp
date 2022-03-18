//FileName:T2_28.cpp
//Author:Õı√ŒÏ 
//E-mail:1756610297@qq.com
//Time:Mar 12,2022
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    cin>>a;
    b=a/10000;
    c=a%10000;
    d=c/1000;
    e=c%1000;
    f=e/100;
    g=e%100;
    h=g/10;
    i=g%10;
    cout<<b<<" "<<d<<" "<<f<<" "<<h<<" "<<i<<" "<<endl;
    return 0;
}
