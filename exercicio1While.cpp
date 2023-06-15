#include <iostream>
using namespace std;

int main() {
    int numero = 100;

    while(numero < 200){
        
        if(numero%2 != 0){
        cout << numero << endl;
        }
        numero++;
    }
    return 0;
}