#include <iostream>
using namespace std;

int main()
{
    int idade;
    int aux = 0;
    for(int i = 0; i < 10; i++)
    {
        cout << "Digite a idade da " << i+1 << "º pessoa: ";
        cin >> idade;
        
        if(idade >= 18)
        {
            aux++;
        }
    }

    cout << "O número de pessoas com idade igual ou superior a 18 anos é: " << aux;

    return 0;
}
