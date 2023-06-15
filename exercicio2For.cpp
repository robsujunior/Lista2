#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um número inteiro entre 1 e 10: ";
    cin >> num;

    for(int i = 0; i < 10; i++){
        cout << i << " x " << num << " = " << i*num << endl;
    }

    return 0;
}
