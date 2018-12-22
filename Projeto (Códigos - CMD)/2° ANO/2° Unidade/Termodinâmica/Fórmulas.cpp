#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double a(double Q, double W) 
{
       double a1; 
       a1 = (Q - W); 
       return a1;
}

double IsoT(double W1)
{
       double IsoT1; 
       IsoT1 = W1;
       return IsoT1; 
}

double IsoM(double Q1)
{     
   double IsoM1; 
   IsoM1 = Q1; 
   return IsoM1; 
} 

double IsoB(double Q2, double W2)
{     
   double IsoB1; 
   IsoB1 = Q2 - W2;
   return IsoB1; 
} 

double A(double W3)
{
       double A1; 
       A1 = - W3; 
       return A1;
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre Termodinâmica; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: (W (waltts), Joules) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a 1° Lei                (Delta U = Q - W) \n"; 
    fisica += " 2 - Para saber a Isotérmica            (Q = W) \n";
    fisica += " 3 - Para saber a Isométrica            (Delta U = Q) \n";
    fisica += " 4 - Para saber a Isobárica             (Delta U = Q - W) \n";
    fisica += " 5 - Para saber a Adiabática            (Delta U = - W ) \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double quantidade, trabalho;      
                    cout << "\n Digite a quantidade de calor: " << endl; 
                    cin >> quantidade; 
                    cout << "\n Digite o trabalho: " << endl; 
                    cin >> trabalho;
                    double energia; 
                    energia = a(quantidade, trabalho);
                    cout << "\n A energia: " << energia << " Joules " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double quantidade1;      
                    cout << "\n Digite a quantidade de calor ou trabalho: " << endl; 
                    cin >> quantidade1;
                    double energia1; 
                    energia1 = IsoT(quantidade1);
                    cout << "\n A quantidade de calor é a igual do trabalho: " << energia1 << " Joules " << endl;  
                                  
                 break;
                 
                 case 3: 
                 
                    double quantidade2;      
                    cout << "\n Digite a quantidade de calor ou energia: " << endl; 
                    cin >> quantidade2;
                    double energia2; 
                    energia2 = IsoM(quantidade2);
                    cout << "\n A energia é igual a quantidade de calor: " << energia2 << " Joules " << endl;  
                                  
                 break;
                 
                 case 4: 
                      
                    double quantidade3, trabalho3;      
                    cout << "\n Digite a quantidade de calor: " << endl; 
                    cin >> quantidade3; 
                    cout << "\n Digite o trabalho: " << endl; 
                    cin >> trabalho3;
                    double energia3; 
                    energia3 = IsoB(quantidade3, trabalho3);
                    cout << "\n A energia: " << energia3 << " Joules " << endl;  
                                  
                 break;
                 
                 case 5: 
                      
                    double trabalho4;  
                    cout << "\n Digite o trabalho ou energia: " << endl; 
                    cin >> trabalho4;
                    double energia4; 
                    energia4 = A(trabalho4);
                    cout << "\n A energia é a igual do trabalho, porem o trabalho eh negativo: " << energia4 << " Joules " << endl;  
                                  
                 break; 
                 
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
