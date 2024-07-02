#include <iostream>
#include <fstream> 
#include <iomanip> 


using namespace std;
 
   
int main(int argc, char** argv) {

   int num[]={10,9,8,7,6,5,4,3,2,1};
   int num2[]={1,2,3,4,5,6,7,8,9,10};
   
   cout << "Os valores do vetor são:\n";
   
   for (int i=0;i<10 ;i++){
       cout << num[i] << " - ";
   }
   
   cout << "\neles invertidos são:\n";
   
   for(int i=9; i>=0; i--){
       cout << num2[i] << " - ";
   }
   return 0;
}
