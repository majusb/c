#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
 
   
int main(int argc, char** argv) {
    float matriz[4][5];
    float matriz2[4][5];
    
    
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
           cout << "Digite um valor para a posição " << i << ", " << j << " da matriz:";
           cin >> matriz[i][j];
        }
    }
    
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
   for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
         matriz2[i][j]= matriz[i][j]/2;
         cout << matriz2[i][j] << "\t";
        }
        cout << endl;
   }
  
    return 0;
}

