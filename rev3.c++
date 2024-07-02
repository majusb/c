#include <iostream>
#include <fstream> // Biblioteca para manipulação de arquivos
#include <iomanip> // Para formatação de saída

//2 vetores de 10
//mostre eles
//multiplique os dois
using namespace std;

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetorfinal[10];
    
    for (int i=0; i<5;i++){
    cout << "Digite o " << i+1 << "º valor do VETOR 1:";
    cin >> vetor1[i];
    }
    for (int i=0; i<5;i++){
       cout << "Digite o " << i+1 << "º valor do VETOR 2:";
       cin >> vetor2[i];
    }
    
    cout << "Os valores digitados no VETOR1 são: ";
    for (int i=0;i<5;i++){
    cout << vetor1[i] << "-";
    }
    cout << "\nOs valores digitados no VETOR2 são: ";
    for(int i=0;i<5;i++){
        cout << vetor2[i] << "-";
    }
    cout << "\nos valores dos vetores multiplicados são:";
    for(int i=0;i<5;i++){
    vetorfinal[i]= vetor1[i]*vetor2[i];
    cout << vetorfinal[i] << "-";
    }
    return 0;
}
