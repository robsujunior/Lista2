#include <iostream>
using namespace std;

int main()
{
    int idade;
    int aux = 0;
    int contador = 0;
    while(contador < 10)
    {
        cout << "Digite a idade da " << contador+1 << "º pessoa: ";
        cin >> idade;
        
        if(idade >= 18)
        {
            aux++;
        }
        contador++;
    }

    cout << "O número de pessoas com idade igual ou superior a 18 anos é: " << aux;

    return 0;
}
