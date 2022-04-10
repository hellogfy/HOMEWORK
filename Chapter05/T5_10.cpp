/*
  FileName:T5_10.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
     int sum=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
            sum*=j;
        cout<<sum<<"\t";
    }
    return 0;
}
