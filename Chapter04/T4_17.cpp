#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest=0;
    for(counter=1;counter<=10;counter++)
        cin>>number;
    while(number>largest)
        largest=number;
    cout << largest << endl;
    return 0;
}
