#include <iostream>
#include <string>


using namespace std;


// Definição da estrutura "cliente"

struct Cliente {
    string nome;
    string endereco;
    string cidade;
    string uf;
    string telefone;
    string cpf;
    int idade;
    char estado_civil;
    char email;
    
};

int main() {


    // Criando uma instância da estrutura "cliente"

    Cliente cliente1;
    
     
    // Preenchendo os campos da instância

    cout << "Digite o Nome: ";
    cin >> cliente1.nome;

    cout << "Digite o Endereço: ";
    cin >> cliente1.endereco;

    cout << "Digite o Cidade: ";
    cin >> cliente1.cidade;

    cout << "Digite o UF: ";
    cin >> cliente1.uf;

    cout << "Digite o telefone: ";
    cin >> cliente1.telefone;

    cout << "Digite o estado civil: ";
    cin >> cliente1.telefone;

    cout << "Digite a idade: ";
    cin >> cliente1.idade;

    cout << "Digite o cpf sem os pontos: ";
    getline (cin >> ws, cliente1.cpf);

    cout << "Digite o email: ";
    cin >> cliente1.email;
        
    
    // Exibindo informações do cliente
 
    cout << " " << endl;

    cout << "Informações do cliente " << endl;

    cout << " " << endl;

    cout << "Nome: " << cliente1.nome << endl;
    cout << "Endereço: " << cliente1.endereco << endl;
    cout << "cidade: " << cliente1.cidade << endl;
    cout << "UF: " << cliente1.uf << endl;
    cout << "Telefone: " << cliente1.telefone << endl;
    cout << "Estado Civil: " << cliente1.estado_civil << " anos" << endl;
    cout << "Idade: " << cliente1.idade << " anos" << endl;
    cout << "CPF: " << cliente1.cpf << endl;
    cout << "E-mail: " << cliente1.email << endl;

    cout << " " << endl;

    return 0;
}
