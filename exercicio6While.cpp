#include <iostream> 
using namespace std;

int main()
{
    float base = 0.0f, altura = 0.0f, area = 0.0f;
    int comando;
    bool encerrar = false;
    string decisao;

    while(encerrar == false){
        cout << "Escolha uma opção para calcular a área:\n";
        cout << "Triângulo - 1\n";
        cout << "Quadrado - 2\n";
        cout << "Retângulo - 3\n";
        cout << "Círculo - 4\n";
        cout << "Fim - 5\n";
        cin >> comando;

        if(comando == 1){
            cout << "Qual a medida da base do triângulo? ";
            cin >> base;
            cout << "Qual a medida da altura do triângulo? ";
            cin >> altura;

            area = base*altura/2;
            cout << "A área desse triângulo é: " << area << endl;
        }

        else if(comando == 3){
            cout << "Qual a medida da base do retângulo? ";
            cin >> base;
            cout << "Qual a medida da altura do retângulo? ";
            cin >> altura;

            area = base*altura;
            cout << "A área desse retângulo é: " << area << endl;
        }

        else if(comando == 2){
            cout << "Qual a medida do lado do quadrado? ";
            cin >> base;

            area = base*base;
            cout << "A área desse quadrado é: " << area << endl;
        }

        else if(comando == 4){
            cout << "Qual a medida do raio do círculo? ";
            cin >> base;

            area = 3.14*base*base;
            cout << "A área desse círculo é: " << area << " (Utilizando π = 3,14)" << endl;
        }

        else if(comando == 5){
            cout << "Programa encerrado";
            encerrar = true;
        }
        else {
           cout << "Comando inválido!\n";
        }
        decisao = "null";

        while (decisao != "S" && decisao != "N")
        {
            cout << "Deseja continuar?\nS - SIM\nN - NÃO\n";
            cin >> decisao;
            
            if(decisao != "S" && decisao != "N"){
                cout << "Comando inválido, digite apenas S ou N\n";
            }

        }

        if (decisao == "N"){
            cout << "Programa encerrado";
            encerrar = true;
        }

    }

    return 0;
}
