#include<iostream> 
#include<cstdlib> 
#include<cmath> 
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double deltaS(double l, double beta, double t) 
{
       double L; 
       L = l * beta * t; 
       return L;  
} 

double beta1(double t1, double l1)
{
       double beta2; 
       beta2 = t1 * l1; 
       return beta2; 
}

double So(double beta3, double t2)
{
       double So1; 
       So1 = beta3 * t2; 
       return So1;
} 

double T(double So2, double beta4)
{
       double T1;
       T1 = So2 * beta4;
       return T1;        
}


int main () 
{ 
  	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre dilatação térmica superficial; " << endl; 
    
    cout << "\nValores serão atribuidos de acordo com o S.I: (Metros, Kelvin) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += "1 - Para saber o Delta Area          (So * beta * Delta T) \n";
    fisica += "2 - Para saber o Beta                (Delta S / Delta T * So) \n";
    fisica += "3 - Para saber o Area Incial         (Delta S / beta * Delta T) \n";
    fisica += "4 - Para saber o Delta T             (Delta S / So * beta ) \n";
    fisica += "0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1:
                      
                      double comprimentoI, bet, temp; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp; 
                      cout << "\n Digite o beta: " << endl; 
                      cin >> bet; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI;
                      double DeltaL; 
                      DeltaL = deltaS(comprimentoI,bet,temp); 
                      cout << "\n A variação da área: " << DeltaL << " metros " << endl; 
                      
                 break;
                 
                 case 2: 
                 
                      double comprim, vC, tempo; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> tempo; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> vC; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprim;
                      double be; 
                      be = beta1(comprim,tempo); 
                      double betaa; 
                      betaa = be / vC;                  
                      cout << "\n Beta: " << betaa << " °C-¹ " <<endl; 
                                          
                 break;
                 
                  case 3: 
                      
                      double bet2, temp2, VC; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp2; 
                      cout << "\n Digite o beta: " << endl; 
                      cin >> bet2; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC;
                      double Soo; 
                      Soo = So(bet2,temp2); 
                      double Sooo; 
                      Sooo = Soo / VC;
                      cout << "\n A área incial: " << Sooo << " metros " << endl; 
                                            
                 break;
                                  
                 case 4: 
                      
                      double comprimentoI3, bet3, VC2; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC2; 
                      cout << "\n Digite o alfa: " << endl; 
                      cin >> bet3; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI3;
                      double temperatura; 
                      temperatura = T(comprimentoI3,bet3);
                      double tempe; 
                      tempe = temperatura / VC2;  
                      cout << "\n A temperatura: " << tempe << " °C " << endl; 
                                                                           
                 break; 
                              
             
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
