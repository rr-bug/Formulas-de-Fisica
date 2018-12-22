#include<iostream> 
#include<cstdlib> 
#include<cmath>

using namespace std; 

double converteParaCentimetros(double distancia, string unidade)
{     
   double resposta; 
   if (unidade=="mm") 
   { 
                      resposta = distancia/10; 
   }
   if (unidade=="cm") 
   { 
                      resposta = distancia; 
   } 
   if (unidade=="dm") 
   { 
                      resposta = distancia*10; 
   }
   if (unidade=="m") 
   { 
                      resposta = distancia*100; 
   }
   if (unidade=="dam") 
   { 
                      resposta = distancia*1000; 
   }
   if (unidade=="hm") 
   { 
                      resposta = distancia*10000; 
   }
   if (unidade=="km") 
   { 
                      resposta = distancia*100000; 
   }   
  
   return resposta; 
} 

double converteParaMetros(double distancia, string unidade)
{     
   double resposta; 
   if (unidade=="mm") 
   { 
                      resposta = distancia/1000; 
   }
   if (unidade=="cm") 
   { 
                      resposta = distancia/100; 
   } 
   if (unidade=="dm") 
   { 
                      resposta = distancia/10; 
   }
   if (unidade=="m") 
   { 
                      resposta = distancia; 
   }
   if (unidade=="dam") 
   { 
                      resposta = distancia*10; 
   }
   if (unidade=="hm") 
   { 
                      resposta = distancia/100; 
   }
   if (unidade=="km") 
   { 
                      resposta = distancia/1000; 
   }   
  
   return resposta; 
} 

int main () 
{ 
    double distancia; string unidade; 
    int opcao; 
    cout << "Instituto Federal da Bahia " << endl; 
    cout << "Projeto de Pesquisa - Fisica " << endl; 
    cout << "Componentes: Andre Burigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Logica de Programacao) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma serve para converter os valores para metros ou centimetros; " << endl; 
    cout << "\nEx.: mm(milimetro), cm(centimetro), dm(decimetro), m(metro), " << endl; 
    cout << "dam(decametro), hm(hectometro) e km(quilometro) " << endl;    

    cout << "\n\n Digite a unidade que quer converter;  1 - metros / 2 - centimetros / 0 - para sair: "; 
    cin >> opcao; 
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                   
    case 1:
         
    double distancia;      
    cout << "\nDigite a distancia, os numeros: " << endl; 
    cin >> distancia; 
   
    string u = "\nAgora digite a unidade (em letras minusculas): ";
    cout << u << endl; 
    cin >> unidade;  
    double conversao; 

    conversao = converteParaMetros(distancia,unidade); 
    cout << "\nA conversao: " << conversao << " metros " << endl << endl;

    break; 

    case 2:

    double distancia1; 
    cout << "\nDigite a distancia, os numeros: " << endl; 
    cin >> distancia1; 
   
    string u1 = "\nAgora digite a unidade (em letras minusculas): ";
    cout << u1 << endl; 
    cin >> unidade1;  
    double conversao1; 

    conversao1 = converteParaCentimetros(distancia1,unidade1); 
    cout << "\nA conversao: " << conversao1 << " centimentros " << endl << endl;
 
    break; 
          }
        
          cout << "\n\n Digite a unidade que quer converter;  1 - metros / 2 - centimetros / 0 - para sair: "; 
          cin >> opcao; 
    
    }        
    
    system("pause"); 
    return 0; 
}   
