#include <iostream>
using namespace std;

int main()
{
    int idade;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    float percentuala = 0.0f;
    float percentuale = 0.0f;
    int aux = 0;

    do
    {
        cout << "Digite a idade da " << aux+1 << "º pessoa: ";
        cin >> idade;

        if(idade <= 0){
            cout << "Idade inválida!\n";
        }
        else if(idade<16){
            a++;
        }
        else if(idade < 31){
            b++;
        }
        else if(idade < 46){
            c++;
        }
        else if(idade < 61){
            d++;
        }
        else{
            e++;
        }
        aux++;
    }    while (aux < 15);

    cout << "A quantidade de pessoas com idade até 15 anos é: " << a << endl;
    cout << "A quantidade de pessoas com idade entre 16 e 30 anos é: " << b << endl;
    cout << "A quantidade de pessoas com idade entre 31 e 45 anos é: " << c << endl;
    cout << "A quantidade de pessoas com idade entre 46 e 60 anos é: " << d << endl;
    cout << "A Quantidade de pessoas com idade superior a 61 anos é: " << e << endl;
    
    percentuala = (100*a)/15;
    percentuale = (100*e)/15;

    cout << "O percentual de pessoas na primeira faixa etária é: " << percentuala << "%\n";
    cout << "O percentual de pessoas na última faixa etária é: " << percentuale << "%\n";
    return 0;
}
