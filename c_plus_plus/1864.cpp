#include <iostream>

using namespace std;

int main(void) {

    string texto = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int i;
    cin>>i;
    
    for (int j = 0; j < i; j++){
        cout << texto[j] ;
    }
    cout << endl;
    
    return (0);
}
