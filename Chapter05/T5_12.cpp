/*
  FileName:T5_12.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=11-i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<i;j++)
            cout<<" ";
        for(int j=1;j<=11-i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
