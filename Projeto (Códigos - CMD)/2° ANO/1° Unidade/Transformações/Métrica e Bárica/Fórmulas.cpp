#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double MeTP1(double t, double p, double t1)
{
       double a = p / t; 
       double P1 = a * t1;
       return P1; 
}

double MeTT1(double t2, double p1, double p2)
{
       double a1 = p2 / t2; 
       double T1 = a1 * p1;
       return T1; 
}

double MeTP2(double t3, double p3, double t4)
{
       double a2 = p3 / t3; 
       double P2 = a2 * t4;
       return P2; 
}

double MeTT2(double t5, double p4, double p5)
{
       double a3 = p5 / t5; 
       double T2 = a3 * p4;
       return T2; 
}

double BaV1(double v, double t6, double t7)
{
       double a4 = v / t7; 
       double V1 = a4 * t6;
       return V1; 
}

double BaT1(double v1, double v2, double t8)
{
       double a5 = v1 / t8; 
       double T1 = a5 * v2;
       return T1; 
}

double BaV2(double v3, double t9, double t10)
{
       double a6 = v3 / t9; 
       double V2 = a6 * t10;
       return V2; 
}

double BaT2(double v5, double v4, double t11)
{
       double a7 = v5 / t11; 
       double T2 = a7 * v4;
       return T2; 
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre transformações dos gases perfeitos; " << endl; 

    cout << "\nValores serão atribuidos de acordo com o S.I: (Kelvin, Litros, Atm) " << endl; 
   
    string fisica = "\nDigite: \n"; 
    fisica += "1 - Para saber a pressão 1 na Métrica         (p1 = (p2 / t2) * t1) \n";
    fisica += "2 - Para saber a temperatura 1 na Métrica     (t1 = (p2 / t2) * p1) \n";
    fisica += "3 - Para saber a pressão 2 na Métrica         (p2 = (p1 / t1) * t2) \n";
    fisica += "4 - Para saber a temperatura 2 na Métrica     (t2 = (p1 / t1) * p2) \n";
    fisica += "5 - Para saber o volume 1 na Bárica           (v1 = (v2 / t2) * t1) \n";
    fisica += "6 - Para saber a temperatura 1 na Bárica      (t1 = (v2 / t2) * v1) \n";
    fisica += "7 - Para saber o volume 2 na Bárica           (v2 = (v1 / t1) * t2) \n";
    fisica += "8 - Para saber a temperatura na Bárica        (t2 = (v1 / t1) * v2) \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                 double pre1, temp1, temp2;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre1;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temp1;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temp2; 
                 double PREP1;
                 PREP1 = MeTP1(pre1,temp1,temp2);
                 cout << "A pressão 1 é: " << PREP1 << " atm " << endl;
                                  
                 break;
                 
                 case 2: 
                      
                 double pre3, temp3, pre2;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre3;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temp3;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre2; 
                 double TEMPT1;
                 TEMPT1 = MeTT1(pre3,temp3,pre2);
                 cout << "A temperatura 1 é: " << TEMPT1 << " °C " << endl;
                                  
                 break;                 

                 case 3: 
                 
                 double temp4, temp5, pre4;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre4;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temp4;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temp5; 
                 double PREP2;
                 PREP2 = MeTP2(pre4,temp4,temp5);
                 cout << "A pressão 2 é: " << PREP2 << " atm " << endl;
                                  
                 break;
                 
                 case 4: 
                                       
                 double temp6, pre5, pre6;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre5;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temp6;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre6; 
                 double TEMPT2;
                 TEMPT2 = MeTT2(pre4,temp4,temp5);
                 cout << "A temperatura 2 é: " << TEMPT2 << " °C " << endl;
                                                                    
                 break;                 
                       
                 case 5: 
                 
                 double v, tempe, tempe1;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> v;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> tempe;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> tempe1; 
                 double VOLV1;
                 VOLV1 = BaV1(v, tempe, tempe1);
                 cout << "O volume 1 é: " << VOLV1 << " L (litros) " << endl;
                                  
                 break;
                 
                 case 6: 
                      
                 double v1, v2, tempe2;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> v1;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> v2;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> tempe2; 
                 double TEMPET1;
                 TEMPET1 = BaT1(v1, v2, tempe2);
                 cout << "A temperatura 1 é: " << TEMPET1 << " °C " << endl;
                                  
                 break;                 

                 case 7: 
                 
                 double v3, tempe3, tempe4;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> v3;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> tempe3;
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> tempe4; 
                 double VOLV2;
                 VOLV2 = BaV2(v3, tempe3, tempe4);
                 cout << "O volume 2 é: " << VOLV2 << " atm " << endl;
                                                                    
                 break;
                 
                 case 8: 
                      
                 double v4, v5, tempe5;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> v4;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> v5;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> tempe5; 
                 double TEMPET2;
                 TEMPET2 = BaT2(v4, v5, tempe5);
                 cout << "A temperatura 2 é: " << TEMPET2 << " °C " << endl;
                                                            
                 break;
                                   
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
