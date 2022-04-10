/*
  FileName:T5_9.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    for(int i=1;i<=15;i+=2)
    {
        sum*=i;
    }
    cout<<sum;
    return 0;
}
