#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double a,b,c,media;
  cout <<setprecision(1)<<fixed;
  cin >> a >> b>>c;
  a = a * 2;
  b = b * 3;
  c = c * 5;
  media = ((a+b+c)/10);

  cout << "MEDIA = "<<media<<endl;

  return 0;
}
