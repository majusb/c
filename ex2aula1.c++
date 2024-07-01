
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int salario = 1000;
    int comissao = 5;
    int ValorVendas, SalarioFinal;
    cout << "Digite o valor do total de venda no mes: ";
    cin >> ValorVendas;
    SalarioFinal = salario + ((ValorVendas * comissao) / 100);
    cout << "Osalario final é de: \n" << SalarioFinal;
    return 0;
}
