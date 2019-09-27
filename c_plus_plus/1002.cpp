#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << setprecision (4) << fixed;

    double PI = 3.14159,A,R;

    cin >> R;

    A = PI * (R * R);

    cout << "A=" << A << endl;

    return 0;
}
