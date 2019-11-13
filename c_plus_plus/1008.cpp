#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int numero,htrabalhadas;
  double vhtrabalhadas;
  cout << setprecision(2)<<fixed;
  cin >> numero>>htrabalhadas>>vhtrabalhadas;

  cout << "NUMBER = " << numero<<endl;
  cout << "SALARY = U$ " << htrabalhadas * vhtrabalhadas<<endl;

  return 0;
}
