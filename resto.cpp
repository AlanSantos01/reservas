#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct resto
{
    int num = 0;
    int divisor = 2;
    double resultado = 0;
};


int main()
{
    vector<resto> novaCompra;
    resto calculo;


    cout << "Favor Digitar os números: " ;
    cin >> calculo.num;
    calculo.resultado = calculo.num % calculo.divisor;
    cout << endl;
    cout << fixed << setprecision(2) << "O resto da divisão foi: " << calculo.resultado << endl;
    
    return 0;
}