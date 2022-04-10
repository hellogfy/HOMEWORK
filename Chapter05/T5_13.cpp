/*
  FileName:T5_13.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
  int n=5;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<=5;j++)
    {
        for(int i=1;i<=a[j-1];i++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
