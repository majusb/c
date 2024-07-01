
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    char nome [20], naturalidade [30];
    int idade;
    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "\n Digite a cidade em que nasceu: ";
    cin >> naturalidade;
    cout << "\n Digite sua idade: ";
    cin >> idade;
    cout << "Voce nasceu em :" << naturalidade << "\n Seu nome é: " << nome << "\n e voce tem: " << idade << "Anos";

    return 0;
}
