#include <iostream>
using namespace std;

struct compra{
    
    double valor;
    double desconto;
        
    string data;

    string formaPagamento;
    bool reembolso;

};

int main(){
    compra compras;

    cout << "Valor da compra: ";
    cin >> compras.valor;

    cout << "Qual forma de pagamento: [credito/debito/pix]: ";
    cin >> compras.formaPagamento;

    cout << "Data da compra: ";
    cin >> compras.data;

    





    return 0;
}