#include<iostream> 
#include<cstdlib> 
#include<cmath> 
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double deltaV(double l, double y, double t) 
{
       double V; 
       V = l * y * t; 
       return V;  
} 

double y1(double t1, double l1)
{
       double y2; 
       y2 = t1 * l1; 
       return y2; 
}

double Vo(double y3, double t2)
{
       double Vo1; 
       Vo1 = y3 * t2; 
       return Vo1;
} 

double T(double Vo2, double y4)
{
       double T1;
       T1 = Vo2 * y4;
       return T1;        
}


int main () 
{ 
	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre dilatação térmica volumétrica; " << endl; 
    
    cout << "\nValores serão atribuidos de acordo com o S.I: (Metros, Kelvin) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += "1 - Para saber o Delta Volume        (Vo * Y * Delta T) \n";
    fisica += "2 - Para saber o Y                   (Delta V / Delta T * Vo) \n";
    fisica += "3 - Para saber o Volume Inicial      (Delta V / Y * Delta T) \n";
    fisica += "4 - Para saber o Delta V             (Delta V / Vo * Y) \n";
    fisica += "0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1:
                      
                      double comprimentoI, y5, temp; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp; 
                      cout << "\n Digite o Y: " << endl; 
                      cin >> y5; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI;
                      double DeltaV; 
                      DeltaV = deltaV(comprimentoI,y5,temp); 
                      cout << "\n A variação do volume: " << DeltaV << " metros " << endl; 
                      
                 break;
                 
                 case 2: 
                 
                      double comprim, vC, tempo; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> tempo; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> vC; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprim;
                      double y6; 
                      y6 = y1(comprim,tempo); 
                      double y7; 
                      y7 = y6 / vC;                  
                      cout << "\n Y: " << y7 << " °C-¹ " <<  endl; 
                                          
                 break;
                 
                  case 3: 
                      
                      double y8, temp2, VC; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp2; 
                      cout << "\n Digite o Y: " << endl; 
                      cin >> y8; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC;
                      double Voo; 
                      Voo = Vo(y8,temp2); 
                      double Vooo; 
                      Vooo = Voo / VC;
                      cout << "\n O volume inicial: " << Vooo << " metros " << endl; 
                                            
                 break;
                                  
                 case 4: 
                      
                      double comprimentoI3, y9, VC2; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC2; 
                      cout << "\n Digite o alfa: " << endl; 
                      cin >> y9; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI3;
                      double temperatura; 
                      temperatura = T(comprimentoI3,y9);
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
