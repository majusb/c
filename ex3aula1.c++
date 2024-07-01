
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    const int ano = 2024;
    int nascimento, idade;

    cout << "Digite sua idade: ";
    cin >> idade;
    nascimento = ano - idade;
    cout << "voce nasceu em: " << nascimento ;
    
    
    return 0;
}
