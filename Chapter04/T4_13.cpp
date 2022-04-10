#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
     double mile=0.0;
    int gallon=0;
    double total_mile=0;
    double total_gallon=0;
    while(cin>>mile>>gallon)
    {
        total_mile+=mile;
        total_gallon+=gallon;
        double n1=mile/gallon;
        double n2=total_mile/total_gallon;
        cout<<"Enter miles driven(-1 to quit):"<<mile<<endl;
        cout<<"Enter gallons used:"<<gallon<<endl;
        cout<<"MPG this trip:"<<n1<<endl;
        cout<<"Total MPG:"<<n2<<endl;
    }


    return 0;
}
