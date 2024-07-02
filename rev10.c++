#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;


 float imc(float p, float a){
    float massa;
  massa= p/(a*a);
  return massa;
 }
   
int main(int argc, char** argv) {
    
    float peso,alt;
    
    cout << "Digite o peso:";
    cin >> peso;
    cout << endl;
    cout << "Digite altura:";
    cin >> alt;
     cout << endl;
     
    cout << "O IMC é: ";
    cout << imc(peso,alt);
    
    return 0;
}