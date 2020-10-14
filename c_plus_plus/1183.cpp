#include <bits/stdc++.h>

using namespace std;

int main() {
   /// freopen ("entrada.in", "r", stdin );

    cout << fixed << setprecision(1);

    int i, j;
    char op;
    double M[12] [12];
    cin >> op;
    for (i = 0; i <= 12; i++){
        for (j = 0; j <=11; j++){
            cin >> M[i][j];
        }
    }
    int cont = 0;
    double soma = 0;
    cin >> op;
    for (i = 0; i <= 12; i++){
        for (j = i+1; j <=11; j++){
            soma = soma + M[i][j];
            cont = cont + 1;
        }
    }
    if (op =='S')
        cout << soma << endl;
    else
        cout << soma/cont << endl;
    return 0;
}
