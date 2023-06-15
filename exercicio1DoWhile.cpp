#include <iostream>
using namespace std;

int main() {
    int numero = 100;

    do{
        
        if(numero%2 != 0){
        cout << numero << endl;
        }
        numero++;
        
    }while((numero < 200));

    return 0;
}