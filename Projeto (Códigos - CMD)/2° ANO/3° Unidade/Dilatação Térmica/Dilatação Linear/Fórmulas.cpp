#include<iostream> 
#include<cstdlib> 
#include<cmath> 
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double deltaL(double l, double alfa, double t) 
{
       double L; 
       L = l * alfa * t; 
       return L;  
} 

double alfa1(double t1, double l1)
{
       double alfa2; 
       alfa2 = t1 * l1; 
       return alfa2; 
}

double Lo(double alfa3, double t2)
{
       double Lo1; 
       Lo1 = alfa3 * t2; 
       return Lo1;
} 

double T(double Lo2, double alfa4)
{
       double T1;
       T1 = Lo2 * alfa4;
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
    cout << "\nPrograma com fórmulas sobre dilatação térmica linear; " << endl; 
  
    cout << "\nValores serão atribuidos de acordo com o S.I: (Metros, Kelvin) " << endl; 
  
    string fisica = "\nDigite: \n"; 
    fisica += "1 - Para saber o Delta Comprimento   (Lo * alfa * Delta T) \n";
    fisica += "2 - Para saber o Alfa                (Delta L / Delta T * Lo) \n";
    fisica += "3 - Para saber o Comprimento Incial  (Delta L / alfa * Delta T) \n";
    fisica += "4 - Para saber o Delta T             (Delta L / Lo * alfa ) \n";
    fisica += "0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1:
                      
                      double comprimentoI, alf, temp; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp; 
                      cout << "\n Digite o alfa: " << endl; 
                      cin >> alf; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI;
                      double DeltaL; 
                      DeltaL = deltaL(comprimentoI,alf,temp); 
                      cout << "\n A variação de comprimento: " << DeltaL << " metros " << endl; 
                      
                 break;
                 
                 case 2: 
                 
                      double comprim, vC, tempo; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> tempo; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> vC; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprim;
                      double al; 
                      al = alfa1(comprim,tempo); 
                      double alfaa; 
                      alfaa = al / vC;                  
                      cout << "\n Alfa: " << alfaa << " °C-¹ " << endl; 
                                          
                 break;
                 
                  case 3: 
                      
                      double alf2, temp2, VC; 
                      cout << "\n Digite a temperatura: " << endl; 
                      cin >> temp2; 
                      cout << "\n Digite o alfa: " << endl; 
                      cin >> alf2; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC;
                      double Loo; 
                      Loo = Lo(alf2,temp2); 
                      double Looo; 
                      Looo = Loo / VC;
                      cout << "\n O comprimento inicial: " << Looo << " metros " << endl; 
                                            
                 break;
                                  
                 case 4: 
                      
                      double comprimentoI3, alf3, VC2; 
                      cout << "\n Digite a variação de comprimento: " << endl; 
                      cin >> VC2; 
                      cout << "\n Digite o alfa: " << endl; 
                      cin >> alf3; 
                      cout << "\n Digite o comprimento inicial: " << endl; 
                      cin >> comprimentoI3;
                      double temperatura; 
                      temperatura = T(comprimentoI3,alf3);
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
