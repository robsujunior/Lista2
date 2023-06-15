#include <iostream>
using namespace std;

int main()
{
    int num;
    int aux = 0;

    cout << "Digite um número inteiro entre 1 e 10: ";
    cin >> num;
    
    while(aux < 10){
        cout << aux << " x " << num << " = " << aux*num << endl;
        aux++;
    }

    return 0;
}
