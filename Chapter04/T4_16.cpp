#include <iostream>

using namespace std;

int main()
{
    int a,c;
    cout<<"Enter hour worked (-1 to end):";
    cin>>a;
    cout<<"Enter hourly rate of the employee (500.00):10"<<endl;
    if(a>40)
       {

       c=400+(a-40)*15;
    cout<<"Salary is $"<<c;}
    else
    cout << "Salary is $400"<< endl;
    return 0;
}
