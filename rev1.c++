#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
 
   int num[5];
   int soma=0;
    
    for (int i=0;i<5; i++){
        cout << "Número " << (i+1) << ":\n";
        cin >> num[i];
        soma += num[i];
    }
   cout << "Seus números foram:" ;
   
    for (int i=0;i<5; i++){
      cout  << num[i]<< "-";
    }
   cout << "\nA soma é de " << soma;
    return 0;
}


