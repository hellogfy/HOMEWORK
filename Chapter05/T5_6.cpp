/*
  FileName:T5_6.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
#include <iostream>

using namespace std;

int main()

{
    int n=0;
    int sum1=0;
    double sum=0.0;
    while(cin >> n)
    {
        if(n!=9999)
        {
            sum+=n;
            sum1 += 1;

        }
        else break;
    }

    cout << sum/sum1 << endl;
    return 0;
}
