# include <iostream>
using namespace std;

int main()
{
    string sexo, corOlho, corCabelo;
    int idade, contador = 0;

    for (int i = 0; i < 500; i++)
    {   
        cout << "Para uma pesquisa, forneça as seguintes informações:\n"; 

        cout << "a - sexo: M (masculino) e F (feminino)" << endl;
        cin >> sexo;
        cout << "b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)" << endl;
        cin >> corOlho;
        cout << "c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)" << endl;
        cin >> corCabelo;
        cout << "d - idade" << endl;
        cin >> idade;

        if(sexo == "F" && idade >= 18 && idade <= 35 && corOlho == "V" && corCabelo == "L"){
            contador++;
        }

    }
    
    cout << "A quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e que tem olhos verdes e cabelos louros é: " << contador;
    
    return 0;
}
