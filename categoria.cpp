#include <iostream>
#include <string>

using namespace std;

//Categoria das passagens

struct Tipopassagem {

string classePassagem;
string equivalencia;
};

int main (){

Tipopassagem tipoPassagem;

cout << "Escolha o tipo de passagem (Econômica, Primeira Classe, Executiva) " << endl;
getline(cin >> ws, tipoPassagem.classePassagem);

cout << "Digite equivalência da passagem (Nacional, Internacional): " << endl;
getline(cin >> ws, tipoPassagem.equivalencia);

return 0;
}