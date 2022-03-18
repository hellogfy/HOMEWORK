//FileName:T2_30.cpp
//Author:王梦焓
//E-mail:1756610297@qq.com
//Time:Mar 12,2022
#include <iostream>
using namespace std;

int main()
{
    float a,b,BMI;//a是以千为单位的体重；b是以米为单位的身高；
    cin>>a>>b;
    BMI=a/(b*b);
    if(BMI<18.5)cout<<"Underweight"<<endl;
    else if(BMI<24.9)cout<<"Normal"<<endl;
    else if(BMI<29.9)cout<<"Overweight"<<endl;
    else(BMI>=30); cout<<"Obese"<<endl;
    return 0;
}
