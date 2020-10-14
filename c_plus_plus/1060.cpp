#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
    double a,b,c=0;
    for(a=1;a<=6;a++)
    {
        cin >> b;
        if(b>0) c++;
    }
    cout << c << +" valores positivos" << endl;
    return 0;
}
