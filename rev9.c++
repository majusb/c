#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
   

   
int main(int argc, char** argv) {
    int n;
   
    cout << "Quantos animais serão cadastrados? ";
    cin >> n;
    
  struct{
    char nome[60];
    char esp[60];
    char raca[60];
    char sexo[60];
    int idade;
    char dono[60];
    int rg;
    int tele;
} strpet[n];

  for(int i=0;i<n;i++){  
    cout << "INFORME O NOME DO PET: ";
    cin.getline(strpet[i].nome,60);
    cin.ignore();
    cout << "INFORME A ESPÉCIE DO PET: ";
    cin.getline(strpet[i].esp,60);
    cin.ignore();
    cout << "INFORME A RAÇA DO PET: ";
    cin.getline(strpet[i].raca,60);
    cin.ignore();
    cout << "INFORME O SEXO DO PET: ";
    cin.getline(strpet[i].sexo,60);
    cin.ignore();
    cout << "INFORME A IDADE DO PET: ";
    cin >> strpet[i].idade;
    cin.ignore();
    cout << "INFORME O NOME DO DONO DO PET: ";
    cin.getline(strpet[i].dono,60);
    cout << "INFORME O RG DO DONO DO PET: ";
    cin >> strpet[i].rg;
    cin.ignore();
    cout << "INFORME O TELEFONE DO DONO DO PET: ";
    cin >> strpet[i].tele;
    cin.ignore();
  }

ofstream arq("pet.txt");
if (arq.is_open()){

    for (int i=0;i<n;i++){
        arq << "NOME DO PET: ";
        arq << strpet[i].nome << endl;
        arq << "ESPÉCIE DO PET: ";
        arq << strpet[i].esp<< endl;
        arq << "RAÇA DO PET: ";
        arq << strpet[i].raca<< endl;
        arq << "SEXO DO PET: ";
        arq << strpet[i].sexo<< endl;
       arq << "IDADE DO PET: ";
        arq << strpet[i].idade<< endl;
       arq << "NOME DO DONO DO PET: ";
        arq << strpet[i].dono<< endl;
        arq << "RG DO DONO DO PET: ";
        arq << strpet[i].rg<< endl;
       arq << "TELEFONE DO DONO DO PET: ";
       arq << strpet[i].tele<< endl << endl;
    } 
    
arq.close();  
}  
    return 0;
}
