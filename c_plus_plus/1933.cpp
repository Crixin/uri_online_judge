#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

    int valor1, valor2;
    
    cin>>valor1>>valor2;
    
    if (valor1 == valor2){
        cout << valor1 << endl;
    }else{
        cout<<max(valor1,valor2)<<endl;
    }
        
    return (0);
}
