#include <iostream>
using namespace std;

int main()
{
    int num;
    int aux = 0;

    cout << "Digite um número inteiro entre 1 e 10: ";
    cin >> num;
    
    do{
        cout << aux << " x " << num << " = " << aux*num << endl;
        aux++;
    }while(aux<10);

    return 0;
}
