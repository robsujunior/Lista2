#include <iostream>
using namespace std;

int main()
{
    int num = 0, aux = 0, soma = 0;
    float media = 0.0f;
    bool condicao = false;

    while(condicao == false)
    {
        cout << "Digite o número desejado: ";
        cin >> num;

        soma = soma + num;
        aux++;

        if(soma >= 100){
            condicao = true;
        }
        
    }
        media = soma/aux;
        cout << "Foram lidos " << aux << " numeros" << endl;
        cout << "A média deles foi: " << media;

    return 0;
}
