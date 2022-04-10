/*
  FileName:T5_8.cpp
  Author:wangmenghan
  E-mail:17566610297@qq.com
  Time:April 2th,2022
*/
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int a[1000];
    cin>>a[0];
    int small=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(small>a[i])
            small=a[i];
    }
    cout<<small;

    return 0;
}
