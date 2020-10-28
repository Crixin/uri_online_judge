#include <iostream>
#include <cmath>
using namespace std;

int maior (int a,int b,int c) {
    int result=0;
    result = (a+b+abs(a-b)) / 2;
    result = (result + c + abs(result - c))/2;
    return result;
}

int main() {

    int a,b,c;
    cin>>a>>b>>c;
    cout<< maior(a,b,c)<<" eh o maior"<<endl;

    return 0;
}
