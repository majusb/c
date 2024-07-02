#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
 
   
int main(int argc, char** argv) {
    //receber 16 num
    //matriz 4x4
    int matriz[2][2];
   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        cout << " digite um valor para a posição " << "("<< i << "," << j << "):";
        cin>> matriz[i][j];
            }
         }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){   
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
        }
   return 0;
}
