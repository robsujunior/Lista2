#include <iostream>

using namespace std;

int main(){
    float numero = 0.0f;
    float menor = 0.0f; 
    float maior = 0.0f;

    cout << "Digite 15 numeros reais: \n" ;
    cout << "1° numero: " ;
    cin >> numero ;
    maior = numero ;
    menor = numero ;
    for (int i = 1; i < 15; i++)
    {
        cout << i + 1 << "° numero: " ;
        cin >> numero ; 

        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
    }
    cout << "O maior numero entre esses 15 numeros e: " << maior << "\n";
    cout << "O menor numero entre esses 15 numeros e: " << menor ;
    return 0;
}