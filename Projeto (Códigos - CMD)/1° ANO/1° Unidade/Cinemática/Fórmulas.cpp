#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double velocidadeM(double s, double t) 
{
       double VM; 
       VM = (s / t); 
       return VM;
}

double velocidadeM1(double sf, double si, double tf, double ti) 
{
       double VM1; 
       VM1 = (sf - si / tf - ti); 
       return VM1;
}

double MRUSF(double si1, double v1, double t1)
{
       double MRU = (v1 * t1);
       double MRU1 = (MRU + si1);
       return MRU1; 
}

double MRUT(double sf2, double si2, double v2)
{     
   double T; 
   T = (sf2 - si2/v2); 
   return T; 
} 

double MRUV(double v3, double t3)
{     
   double A; 
   A = (v3 / t3);
   return A; 
} 

double MRUVA(double vf3, double tf3, double vi3, double ti3)
{     
   double A1; 
   A1 = (vf3 - vi3 / tf3 - ti3);
   return A1; 
} 

double MRUVV(double vi4, double a, double t4)
{ 
    double Vf = a * t4; 
    double Vf1 = Vf + vi4;
    return Vf1; 
}

double MRUVT(double vf5, double vi5, double a1)
{ 
   double T1; 
   T1 = (vf5 - vi5 / a1); 
   return T1;
}

double MRUV2(double vi22, double a5, double DeltaS1)
{ 
       double V2; 
       V2 = (2 * a5 * DeltaS1) + (pow(vi22,2)); 
       return sqrt(V2); 
}

double MRUVdeltaS(double vf6, double t6, double a2, double t7)
{ 
   double DeltaS = (pow(t7,2));
   double S = a2 * DeltaS / 2;  
   double DeltaS1 = (vf6 * t6);
   double DeltaS2 = DeltaS1 + S; 
   return DeltaS2;
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre cinemática; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: (Metros, Segundos, m/s, m/s²) " << endl << endl; 
    
    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a velocidade média               (S / T)                        "; 
    fisica += " 2 - Para saber a velocidade média               (sf - si / tf - ti)            ";
    fisica += " 3 - Para saber a função horária do espaço       (So + V * t)                   ";
    fisica += " 4 - Para saber a função horária do tempo        (Sf - Si / V)                  ";
    fisica += " 5 - Para saber a aceleração média               (v / t)                        ";
    fisica += " 6 - Para saber a aceleração média               (vf - vi / tf - ti)            ";
    fisica += " 7 - Para saber a função horária da velocidade   (Vo + a * t)                   ";
    fisica += " 8 - Para saber a função horária do tempo        (Vf - Vi / a)                  ";
    fisica += " 9 - Para saber a equação de torricelli          (Vo²  + 2 * a * Delta S)       ";    
    fisica += "10 - Para saber a função horária da posição      (So + Vo * t + a * t² / 2)     ";
    fisica += " 0 - Para sair  \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double s, t;      
                    cout << "\n Digite o espaço: " << endl; 
                    cin >> s; 
                    cout << "\n Digite o tempo: " << endl; 
                    cin >> t;
                    double ST1; 
                    ST1 = velocidadeM(s,t);
                    cout << "\n A velocidade média: " << ST1 << " m/s" << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double si, sf, ti, tf;      
                    cout << "\n Digite o espaço inicial: " << endl; 
                    cin >> si; 
                    cout << "\n Digite o espaço final: " << endl; 
                    cin >> sf; 
                    cout << "\n Digite o tempo inicial: " << endl; 
                    cin >> ti; 
                    cout << "\n Digite o tempo final: " << endl; 
                    cin >> tf;
                    double velocidade5; 
                    velocidade5 = velocidadeM1(si, sf, ti, tf);
                    cout << "\n A velocidade média: " << velocidade5 << " m/s" << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double si1, v, t1;      
                    cout << "\n Digite o espaço inicial: " << endl; 
                    cin >> si1; 
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> v; 
                    cout << "\n Digite o tempo: " << endl; 
                    cin >> t1;
                    double m; 
                    m = MRUSF(si1, v, t1);
                    cout << "\n O espaço final: " << m << " metros " << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double sf2, si2, v2;      
                    cout << "\n Digite o espaço final: " << endl; 
                    cin >> sf2; 
                    cout << "\n Digite o espaço inicial: " << endl; 
                    cin >> si2; 
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> v2;
                    double te2; 
                    te2 = MRUT(sf2, si2, v2);
                    cout << "\n O tempo: " << te2 << " s (segundos) "<< endl;  
                      
                 break;
                 
                 case 5: 
                      
                    double v3, t3;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> v3; 
                    cout << "\n Digite o tempo: " << endl; 
                    cin >> t3;
                    double m3; 
                    m3 = MRUV(v3, t3);
                    cout << "\n A aceleração: " << m3 << " m/s² " << endl;  
                                                     
                 break; 
                 
                 case 6:
                    
                    double vi1, ti1, vf1, tf1;      
                    cout << "\n Digite a velocidade inicial: " << endl; 
                    cin >> vi1; 
                    cout << "\n Digite a velocidade final: " << endl; 
                    cin >> vf1; 
                    cout << "\n Digite o tempo inicial: " << endl; 
                    cin >> ti1; 
                    cout << "\n Digite o tempo fnal: " << endl; 
                    cin >> tf1;
                    double m1; 
                    m1 = MRUVA(vi1, vf1, ti1, tf1);
                    cout << "\n A aceleração: " << m1 << " m/s² " << endl;  
                    
                 break;
                 
                 case 7: 
                 
                    double vi2, a, t2;      
                    cout << "\n Digite a velocidade inicial: " << endl; 
                    cin >> vi2; 
                    cout << "\n Digite a aceleração: " << endl; 
                    cin >> a; 
                    cout << "\n Digite o tempo: " << endl; 
                    cin >> t2;
                    double velocidade8; 
                    velocidade8 = MRUVV(vi2, a,t2);
                    cout << "\n A velocidade: " << velocidade8 << " m/s " << endl;  
                    
                 break;
                 
                 case 8: 
                      
                    double vf3, vi3, a2;      
                    cout << "\n Digite a velocidade inicial: " << endl; 
                    cin >> vi3; 
                    cout << "\n Digite a velocidade final: " << endl; 
                    cin >> vf3; 
                    cout << "\n Digite a aceleração: " << endl; 
                    cin >> a2;
                    double ve; 
                    ve = MRUVT(vi3, vf3, a2);
                    cout << "\n O tempo: " << ve << " s (segundos) " << endl;  
                      
                 break;
                 
                 case 9: 
                      
                    double vi4, a3, deltaS;      
                    cout << "\n Digite a velocidade inicial: " << endl; 
                    cin >> vi4; 
                    cout << "\n Digite a aceleração: " << endl; 
                    cin >> a3; 
                    cout << "\n Digite a variacao de espaço: " << endl; 
                    cin >> deltaS;
                    double m4; 
                    m4 = MRUV2(vi4, a3, deltaS);
                    cout << "\n A velocidade: " << m4 << " m/s " << endl;  
                                                     
                 break; 
                 
                 case 10:
                      
                      double vf6, t5, t6, a5; 
                      cout << "\n Digite a velocidade final: " << endl; 
                      cin >> vf6;
                      cout << "\n Digite o tempo: " << endl; 
                      cin >> t5; 
                      cout << "\n Digite o tempo: " << endl; 
                      cin >> t6; 
                      cout << "\n Digite a aceleraçãi: " << endl; 
                      cin >> a5;                     
                      double vel1;
                      vel1 = MRUVdeltaS(vf6, t5, t6, a5);
                      cout << "\n O espaço final: " << vel1 << " metros " << endl;          
                 
                      
                 break;               
                
                                  
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
