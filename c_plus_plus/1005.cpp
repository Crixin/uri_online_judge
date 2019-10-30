#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a,b,media;
  cout <<setprecision(5)<<fixed;
  cin >> a >> b;
  a = a * 3.5;
  b = b * 7.5;
  media = ((a+b)/11);

  cout << "MEDIA = "<<media<<endl;

  return 0;
}
