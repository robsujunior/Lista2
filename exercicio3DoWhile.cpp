#include <iostream>
using namespace std;

int main(){
    float numero = 0.0f;
    float menor = 0.0f; 
    float maior = 0.0f;
    int aux = 1;
    cout << "Digite 15 numeros reais: \n" ;
    cout << "1° numero: " ;
    cin >> numero ;
    maior = numero ;
    menor = numero ;
    do{
        cout << aux + 1 << "° numero: " ;
        cin >> numero ; 

        if(numero > maior){
            maior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
        aux++;
    } while(aux < 15);
    cout << "O maior numero entre esses " << aux << " numeros e: " << maior << "\n";
    cout << "O menor numero entre esses " << aux << " numeros e: " << menor;
    return 0;
}