//FileName:T2_30.cpp
//Author:������
//E-mail:1756610297@qq.com
//Time:Mar 12,2022
#include <iostream>
using namespace std;

int main()
{
    float a,b,BMI;//a����ǧΪ��λ�����أ�b������Ϊ��λ����ߣ�
    cin>>a>>b;
    BMI=a/(b*b);
    if(BMI<18.5)cout<<"Underweight"<<endl;
    else if(BMI<24.9)cout<<"Normal"<<endl;
    else if(BMI<29.9)cout<<"Overweight"<<endl;
    else(BMI>=30); cout<<"Obese"<<endl;
    return 0;
}
