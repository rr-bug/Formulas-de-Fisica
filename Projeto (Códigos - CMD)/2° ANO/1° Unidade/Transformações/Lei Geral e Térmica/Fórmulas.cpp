#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double geralp1(double v1, double t1, double p2, double v2, double t2)
{
    double a = v1/t1; 
    double b = p2 * v2; 
    double c = b/t2; 
    double P1 = c/a;
    return P1;    
}

double geralv1(double p3, double t3, double p4, double v3, double t4)
{
    double a1 = p3/t3; 
    double b1 = p4 * v3; 
    double c1 = b1/t4; 
    double V1 = c1/a1;
    return V1;    
}

double geralt1(double v4, double p5, double p6, double v5, double t5)
{
    double a2 = v4*p5; 
    double b2 = p6 * v5; 
    double c2 = b2/t5; 
    double T1 = c2*a2;
    return T1;    
}

double geralp2(double v6, double t6, double p7, double v7, double t7)
{
    double a3 = v7/t7; 
    double b3 = p7 * v6; 
    double c3 = b3/t6; 
    double P2 = c3/a3;
    return P2;    
}

double geralv2(double t9, double p8, double p9, double v8, double t8)
{
    double a4 = t9/p9; 
    double b4 = p8 * v8; 
    double c4 = b4/t8; 
    double V2 = c4/a4;
    return V2;    
}

double geralt2(double v9, double p10, double p11, double v10, double t10)
{
    double a5 = p10 * v9; 
    double b5 = p11 * v10; 
    double c5 = b5/t10; 
    double T2 = c5*a5;
    return T2;    
}

double IsoTP1(double v, double p, double v1)
{
       double a = p * v; 
       double P1 = a / v1;
       return P1; 
}

double IsoTV1(double v2, double p1, double p2)
{
       double a1 = p2 * v2; 
       double v1 = a1 / p1;
       return v1; 
}

double IsoTP2(double v3, double p3, double v4)
{
       double a2 = p3 * v3; 
       double P2 = a2 / v4;
       return P2; 
}

double IsoTV2(double v5, double p4, double p5)
{
       double a3 = p5 * v5; 
       double V2 = a3 / p4;
       return V2; 
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre lei geral e transformações dos gases perfeitos; " << endl; 

    cout << "\nValores serão atribuidos de acordo com o S.I: " << endl; 
    cout << "(Kelvin, Litros, Atm) " << endl; 
   
    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a pressão 1 da lei geral       ((p2 * v2 / t2) / (v1 / t1)) \n"; 
    fisica += " 2 - Para saber o volume 1 da lei geral        ((p2 * v2 / t2) / (p1 / t1)) \n";
    fisica += " 3 - Para saber a temperatura 1 da lei geral   ((p2 * v2 / t2) / (p1 * v1)) \n";
    fisica += " 4 - Para saber a pressão 2 da lei geral       ((p1 * v1 / t1) / (v2 / t2)) \n";
    fisica += " 5 - Para saber o volume 2 da lei geral        ((p1 * v1 / t1) / (p2 / t2)) \n";
    fisica += " 6 - Para saber a temperatura 2 da lei geral   ((p1 * v1 / t1) / (p2 * v2)) \n";
    fisica += " 7 - Para saber a pressão 1 na Isotérmica           (p1 = p2 * v2 / v1) \n";
    fisica += " 8 - Para saber o volume 1 na Isotérmica           (v1 = p2 * v2 / p1) \n";
    fisica += " 9 - Para saber a pressão 2 na Isotérmica           (p2 = p1 * v1 / v2) \n";
    fisica += "10 - Para saber o voulme 2 na Isotérmica           (v2 = p1 * v1 / p2) \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                 double volume1, temperatura1, volume2, temperatura2, pressao2;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> volume1; 
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temperatura1; 
                 cout << "Digite o volume 2: " << endl; 
                 cin >> volume2; 
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temperatura2; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao2; 
                 double PRESSAO;
                 PRESSAO = geralp1(volume1,temperatura1,pressao2,volume2,temperatura2);
                 cout << "A pressão 1 é: " << PRESSAO << " atm " << endl; 
                                  
                 break; 
                 
                 case 2:

                 double pressao4, temperatura3, volume3, temperatura4, pressao3;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pressao4; 
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temperatura3; 
                 cout << "Digite o volume 2: " << endl; 
                 cin >> volume3; 
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temperatura4; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao3; 
                 double VOLUME;
                 VOLUME = geralv1(pressao4,temperatura3,pressao3,volume3,temperatura4);
                 cout << "O volume 1 é: " << VOLUME << " L (litros) " << endl;                     
                                  
                 break;
                 
                 case 3: 

                 double pressao6, volume4, volume5, temperatura5, pressao5;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pressao5; 
                 cout << "Digite o volume 1: " << endl; 
                 cin >> volume4; 
                 cout << "Digite o volume 2: " << endl; 
                 cin >> volume5; 
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temperatura5; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao6; 
                 double TEMPERATURA;
                 TEMPERATURA = geralt1(pressao5,volume4,pressao6,volume5,temperatura5);
                 cout << "A temperatura 1 é: " << TEMPERATURA << " °C " << endl;                     
                                  
                 break;
                 
                 case 4: 

                 double temperatura6, volume6, volume7, temperatura7, pressao7;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temperatura6; 
                 cout << "Digite o volume 1: " << endl; 
                 cin >> volume6; 
                 cout << "Digite o volume 2: " << endl; 
                 cin >> volume7; 
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temperatura7; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao7; 
                 double PRESSAO1;
                 PRESSAO1 = geralp2(temperatura6,volume6,pressao7,volume7,temperatura7);
                 cout << "A pressão 2 é: " << PRESSAO1 << " atm " << endl;                     
                                  
                 break;
                 
                 case 5: 

                 double temperatura8, pressao8, volume8, temperatura9, pressao9;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temperatura8; 
                 cout << "Digite o volume 1: " << endl; 
                 cin >> volume8; 
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pressao8; 
                 cout << "Digite a temperatura 2: " << endl; 
                 cin >> temperatura9; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao9; 
                 double VOLUME1;
                 VOLUME1 = geralv2(temperatura8,volume8,pressao8,temperatura9, pressao9);
                 cout << "O volume 2 é: " << VOLUME1 << " L (Litros)" << endl;                     
                                  
                 break; 
                 
                 case 6:

                 double volume9, pressao10, volume10, temperatura10, pressao11;
                 cout << "Digite a temperatura 1: " << endl; 
                 cin >> temperatura10; 
                 cout << "Digite o volume 1: " << endl; 
                 cin >> volume9; 
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pressao10; 
                 cout << "Digite o volume 2: " << endl; 
                 cin >> volume10; 
                 cout << "Digite a pressão 2: " << endl;
                 cin >> pressao11; 
                 double VOLUME2;
                 VOLUME2 = geralv2(temperatura10,volume9,pressao10,volume10, pressao11);
                 cout << "O volume 2 é: " << VOLUME2 << " L (Litros)" << endl;                     
                                  
                 break;
                 
                 case 7: 
                 
                 double pre2, vol2, vol1;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre2;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> vol2;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> vol1; 
                 double PRE1;
                 PRE1 = IsoTP1(pre2,vol2,vol1);
                 cout << "A pressão 1 é: " << PRE1 << " atm " << endl;
                                  
                 break;
                 
                 case 8: 
                      
                 double pre3, vol3, pre1;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre3;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> vol3;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre1; 
                 double VOL1;
                 VOL1 = IsoTV1(pre3,vol3,pre1);
                 cout << "O volume 1 é: " << VOL1 << " L (litros) " << endl;
                                  
                 break;                 

                 case 9: 
                 
                 double pre4, vol5, vol4;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre4;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> vol4;
                 cout << "Digite o volume 1: " << endl; 
                 cin >> vol5; 
                 double PRE2;
                 PRE2 = IsoTP2(pre4,vol5,vol4);
                 cout << "A pressão 2 é: " << PRE2 << " atm " << endl;
                                  
                 break;
                 
                 case 10: 
                      
                 double pre6, vol6, pre5;
                 cout << "Digite a pressão 2: " << endl; 
                 cin >> pre6;
                 cout << "Digite o volume 2: " << endl; 
                 cin >> vol6;
                 cout << "Digite a pressão 1: " << endl; 
                 cin >> pre5; 
                 double VOL2;
                 VOL2 = IsoTP2(pre6,vol6,vol5);
                 cout << "O volume 2 é: " << VOL2 << " L (litros) " << endl;
                                  
                 break;                 
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
