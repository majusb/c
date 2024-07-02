#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
 
   
int main(int argc, char** argv) {
    
    int matriz[6][6];
    
    
    for (int i=0;i<6;i++){
        for (int j=0; j<6; j++){
        cout << "Digite um valor para a posição " << i << ", " << j << " da matriz:";
                cin >> matriz[i][j];
    }
    }
    cout << "Os valores da matriz são:\n";
    
    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\n Os valores da diagonal secundária são:\n";
    
    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){  
            if(i+j == 6-1 ){
            cout <<matriz[i][j] << "\t" ;   
        }
            else{
                cout << "\t";
            }
    }
        cout << endl; 
    }
       
    
   return 0;
}
