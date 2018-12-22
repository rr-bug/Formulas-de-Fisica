#include<iostream> 
#include<cstdlib> 
#include<cmath>

using namespace std; 

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
    cout << "Instituto Federal da Bahia " << endl; 
    cout << "Projeto de Pesquisa - Fisica " << endl; 
    cout << "Componentes: Andre Burigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Logica de Programacao) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma serve para converter os valores para metros; " << endl; 
    cout << "\nEx.: mm(milimetro), cm(centimetro), dm(decimetro), m(metro), " << endl; 
    cout << "dam(decametro), hm(hectometro) e km(quilometro) " <<endl;    
    cout << "\nDigite a distancia, os numeros: " << endl; 
    cin >> distancia; 
   
    string u = "\nAgora digite a unidade (em letras minusculas): ";
    cout << u << endl; 
    cin >> unidade;  
    double conversao; 

    conversao = converteParaMetros(distancia,unidade); 
    cout << "\nA conversao: " << conversao << " metros " << endl << endl;

    system("pause"); 
    return 0; 
}   
