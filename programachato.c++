#include <cstdlib>
#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>

using namespace std;

  

int main(int argc, char** argv) {
    
 
    string nome;
    char fofoca,bebida,vctemfofoca,feriado,dorama;
    int acucar,chacomacucar,musica,tipodorama;
    float repmusica;
    
    cout << "Olá meu nome é Jessica!\n";
    cout << "Vamos conversar um pouco. Como posso te chamar?\n";
    getline(cin,nome);
    //nome=toupper(nome);
    
    
    if(nome == "Jessica")
    {
        cout << "Ah que legal temos o mesmo nome, mas acho que fica melhor em mim...\n\n";
    }
    else
    {
        cout << "Que nome estranho, espero que você não seja estranho como seu nome...\n\n";
    }
    
    cout << "Bom, vamos falar de outra coisa\n";
    cout << "Você prefere tomar cafe ou cha?\n" << "Digite C: para café ou T:para chá\n";
    cin >> bebida;
    bebida=toupper(bebida);
    
    
    if (bebida != 'T' && bebida != 'C') {
    cout << "Você escreveu algo que eu não perguntei\n";
    }

        switch(bebida){
            case 'T':
            
            cout << "Eu também gosto de chá!" << endl << "O meu favorito é erva doce\n" << endl << "Você toma com açúcar?\n";
            cout << "1: Sim\n";
            cout << "2: Não\n";
            cin >> chacomacucar;
                
                switch(chacomacucar){
                    case 1:
                    cout << "Isso mesmo tem que adoçar a vida de algum jeito\n";
                    break;
                
                    case 2:
                    cout << "Por isso da vida amargurada\n";
                    break;
                   
                    default:
                    cout << "Não foi isso que eu perguntei\n";
                    break;
                }
            break;   
            
            case 'C':
            cout << "Tinha cara mesmo. Suas olheiras estão fundas\n\n";
            cout << nome << ", você toma com açúcar?\n\n" ;
            cout << "1: Sim\n";
            cout << "2: Não\n";
            cin >> acucar;
                
                switch (acucar){        
                    case 1:
                    cout << "Isso mesmo tem que adoçar a vida de algum jeito\n";
                    break;
                
                    case 2:
                    cout << "Por isso da vida amargurada\n";
                    break;
                   
                    default:
                        cout << "Não foi isso que eu perguntei\n";
                        break;
        }
        break;
        default:
            cout << "Respoda certo! Você respondeu algo que eu não perguntei\n";
    }
     
 
    cout << "\nApesar de ser esquisito vou continuar falando com você, " << nome << endl;
    cout << "Quer ouvir uma fofoca? responda com s ou n\n";
    cin >> fofoca;
    
    
    switch(fofoca)
    { 
        case's':
            cout << "Mas é fofoqueiro hein...\n" << "infelizmente não tenho fofoca só queria te conhecer melhor\n";
            break;
                  
        case 'n':
        cout << "Ah, qual é você não gosta de fofoca, que chato :P\n"; 
        break;
    }
    
    cout << "Escolha sua data comemorativa preferida:\n";
            cout << "C-Carnaval\n";
            cout << "F-Festa Junina\n";
            cout << "N-Natal\n";
            cout << "P-Pascóa\n";
            cout << "S-Seu aniversário\n";
            cin >> feriado;
            feriado=toupper(feriado);
            switch(feriado){
                
                case 'C':
                    cout << "Deve gostar por causa que fica em casa vários dias\n";
                    break;
                    
                case 'F':
                    cout << "Adoro quadrilha\n";
                    break;
                    
                case 'N':
                    cout << "Mas esse pavê é pra ver ou pra cume?\n";
                    break;
                    
                case 'P':
                    cout << "Que o coelinho te traga saúde mental porque acho que ta precisando\n";
                    break;
                    
                case 'S':
                    cout << "Se eu te falar que o sol não gira sua volta você acredita?\n";
                    break;
                    
            }
    
    cout << nome << " Escolha uma música para a gente cantar:\n";
    cout << "1: Dynamite do BTS\n";
    cout << "2: The Driver de Maneskin\n";
    cout << "3: Lover da taylor Swift\n";
    cout << "4: País tropical da Ivete Sangalo";
    cin >> musica;
    
    cout << "Agora quantas vezes vamos cantar?\n";
    cin >> repmusica;
    
    for(int i=1; i<=repmusica; i++){        
    cout << "Cause I, I, I'm in the stars tonight\n";
    cout << "So watch me bring the fire, and set the night alight (hey)\n";
    cout << "Shining through the city with a little funk and soul\n";
    cout << "So I'ma light it up like dynamite, whoa-oh-oh\n";
    cout << "Dyn-na-na-na, na-na-na-na-na, na-na-na, life is dynamite\n";
    cout << "Dyn-na-na-na, na-na-na-na-na, na-na-na, life is dynamite\n";
    cout << "Shining through the city with a little funk and soul\n";
    cout << "So I'ma light it up like dynamite, whoa-oh-oh\n";
    cout << "~~~~~~~~~~~~~~~~~\n";
    }

    
    while(dorama != 'S'){
    cout << "Eu gosto de dorama!\n" << "Posso te dar uma sugestão? responda com S ou N\n";
    cin >> dorama;
    dorama=toupper(dorama);
        cout << "Mas eu quero muito te dar uma sugestão\n";
    
    if(dorama == 'S'){
    cout << "Ótimo! qual seu gênero favorito?\n";
    cout << "1: Terror\n";
    cout << "2: Suspense\n";
    cout << "3: Romance\n";
    cout << "4: Sobrenatural\n";
    cin >> tipodorama;
    
      switch(tipodorama){
      
        case 1:
            cout << "Round 6: pessoas entram em jogos mortais para tentarem pegar um premio milionário,mas apartir de qual custo?\n";
                    break;
        case 2:
            cout << "As três irmãs: 3 irmãs que cresceram sozinhas e pobres se envolvem em um acidente com uma família poderosa\n";
            break;
        case 3:
            cout << "Pretendente Surpresa: é uma comédia romantica que mostra um encontro ás cegas arranjado que vira um amor verdadeiro\n";
            break;
        case 4: 
            cout << "Sweet Home: humanos se transformam em monstros e residentes de um prédio lutam para tentar sobreviver\n";
            break;
        default:
            "Essa resposta não existe coloque uma das que eu te falei!\n";
            break;
      }        
    }       
    }
          
      
    
   cout << "\nJá acabou Jéssica? Sim, acabei!\n";
   cout << "Adeus, espero te ver logo!";
    
   
       
    return 0;
}