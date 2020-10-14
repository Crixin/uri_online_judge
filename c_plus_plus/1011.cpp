#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
int r;
double pi = 3.14159, volume;
cout << setprecision(3)<<fixed;
cin >> r;
volume = (4.0/3)*pi*r*r*r;
cout << "VOLUME = "<<volume<<endl;
return 0;
}
