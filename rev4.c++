#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
 
   
int main() {
   
   
   
   float prova1[5];
   float prova2[5];
   float media[5]; 
   
   for (int i=0;i<5;i++){
   cout << "Digite a nota da P1 do aluno " << i+1 << " :" ;
   cin >> prova1[i];
  //cout << "\n";
  
   cout << "Digite a nota da P2 do aluno " << i+1<< " :";
   cin >> prova2[i];
   cout << "\n";
   }
   
   cout << "Situação dos alunos:" << endl;
   for (int i=0;i<5;i++){
    media[i] = (prova1[i]+prova2[i])/2;
    cout << endl << "aluno " << i+1 << "P1=" << prova1[i] << "P2=" << prova2[i]<<endl;
    cout << "Média:" << media[i] << " " << endl;
    if(media[i]<7){
        cout << "Reprovado"; 
   }
    else{
        cout << "aprovado";
    }
    
}
   return 0;
}
