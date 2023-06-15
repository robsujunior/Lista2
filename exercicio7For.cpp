#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    float num = 0.0f, maior = 0.0f, menor = 0.0f, soma = 0.0f, media = 0.0f;
    float positivo = 0.0f, negativo = 0.0f, porcentagemN = 0.0f, porcentagemP = 0.0f;

    for(;;)
    {
        cout << "Digite a quantidade de números desejada (Positivo e menor que 20): ";
        cin >> N;
        if(N > 0 && N <= 20){
            cout << "Digite o 1° valor: ";
            cin >> num;
            maior = num;
            menor = num;
            soma = soma + num;
            if(num >= 0){
            positivo++;
            }
            else{
            negativo++;
            }
            break;
        }
        else{
            cout << "Valor inválido, digite novamente" << endl;
        }
    }
    for(int i = 1; i < N; i++)
    {
        cout << "Digite o " << i+1 << "° valor: ";
        cin >> num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
        soma = soma + num;

        if(num >= 0){
            positivo++;
        }
        else{
            negativo++;
        }
    }
    porcentagemP = 100*(positivo/N);
    porcentagemN = 100 - porcentagemP;
    media = soma/N;

    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;
    cout << "A soma dos valores é: " << soma << endl;
    cout << "A média aritmética dos valores é: " << media << endl;
    cout << "A porcentagem de valores que são positivos é: " << porcentagemP << "%\n";
    cout << "A porcentagem de valores negativos é: " << porcentagemN << "%";

    return 0;
}



