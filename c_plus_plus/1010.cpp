#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int c1,c2,n1,n2;
double valor1,valor2;
cout<<setprecision(2)<<fixed;
cin >> c1>>n1>>valor1;
cin >> c2>>n2>>valor2;
cout << "VALOR A PAGAR: R$ "<< n1*valor1 + n2*valor2<<endl;
return 0;
}
