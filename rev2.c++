#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
 
   int num[5];
   int soma=0,ni=0;
    
    for (int i=0;i<5; i++){
        cout << "Número " << (i+1) << ":\n";
        cin >> num[i];
       
    }
   cout << "Seus números foram:" ;
   
    for (int i=0;i<5; i++){
      cout  << num[i]<< "-";
    }
    for (int i=0;i<5; i++){
        if(num[i]%3==0){
            ni=ni+1;
            cout << num[i];
        }
    }
   
   cout << "\nforam digitados " << ni << " multiplos de tres";
    return 0;
}


