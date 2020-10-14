#include <iostream>
#include <iomanip>
using namespace std;
int main(){
string nome;
cout <<setprecision(2)<<fixed;
double salario,vendas;
cin >> nome>>salario>>vendas;
cout <<"TOTAL = R$ " << salario + (vendas*0.15)<<endl;
return 0;
}
