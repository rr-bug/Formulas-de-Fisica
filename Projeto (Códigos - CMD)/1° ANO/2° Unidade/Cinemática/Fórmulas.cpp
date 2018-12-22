#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double frequenci(double T) 
{
       double fre; 
       fre = (1 / T); 
       return fre;
}

double velocidadeR(double R, double T1) 
{
       double VR; 
       VR = (2 * 3.14 * R / T1); 
       return VR;
}

double velocidadeF(double R, double F) 
{
       double VF; 
       VF = (2 * 3.14 * R * F); 
       return VF;
}

double omega(double O, double T2)
{
       double OM = O / T2;
       return OM; 
}

double omega1(double T3)
{     
   double OM1 = 2 * 3.14 / T3; 
   return OM1; 
} 

double omega2(double freq)
{     
   double OM2 = 2 * 3.14 * freq; 
   return OM2; 
} 

double velocidadeO(double omegaa, double raio)
{     
   double VO = omegaa * raio; 
   return VO; 
} 

double Ac(double v, double r)
{ 
    double AC = (pow(v,2)) / r; 
    return AC; 
}

double Ac1(double omega1, double r1)
{ 
   double AC1 = (pow(omega1,2)) / r1; 
   return AC1;
}

double omegaa(double velo, double R)
{ 
       double OME = velo / R; 
       return OME; 
}

double velocidadeH(double t, double velo) 
{ 
       double VH = (10 * t) +- velo; 
       return VH; 
}

double velo2H(double velo6, double h)
{ 
   double V2H = (2 * 10 * h) +- velo6;
   return sqrt(V2H);
}
      

int main () 
{ 
  	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nProgramas com fórmulas sobre cinemática 2; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: "; 
    cout << "\n(Hertez, Segundos, m/s, PI = 3.14, Metros, g = 10, Radianos) " << endl << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a frequência                       (1/T)                     \n"; 
    fisica += " 2 - Para saber a velocidade linear                (2 * pi * raio / T)       \n";
    fisica += " 3 - Para saber a velocidade linear                (2 * pi * raio * f)       \n";
    fisica += " 4 - Para saber o ômega                            (Delta O / T)             \n";
    fisica += " 5 - Para saber o ômega                            (2 * pi / T)              \n";
    fisica += " 6 - Para saber o ômega                            (2 * pi * f)              \n";
    fisica += " 7 - Para saber a velocidade angular               (omega * R)               \n";
    fisica += " 8 - Para saber a aceleracao centrípeta            (v² / R)                  \n";
    fisica += " 9 - Para saber a aceleracao centrípeta            (w² * R)                  \n";    
    fisica += "10 - Para saber o ômega                            (v / R)                   \n";
    fisica += "11 - Para saber a velocidade no movimento vertical (Vo +- g * t)             \n";
    fisica += "12 - Para saber a equação de torricelli vertical   (Vo² +- 2 * g * Delta H)  \n";    
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double t;      
                    cout << "\n Digite periodo: " << endl; 
                    cin >> t; 
                    double f; 
                    f = frequenci(t);
                    cout << "\n A frequência: " << f << " Hz (hertez) " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double r, t1;      
                    cout << "\n Digite o raio: " << endl; 
                    cin >> r; 
                    cout << "\n Digite o periodo: " << endl; 
                    cin >> t1;
                    double velocidade5; 
                    velocidade5 = velocidadeR(r,t1);
                    cout << "\n A velocidade: " << velocidade5 << " m/s" << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double R, F;      
                    cout << "\n Digite o raio: " << endl; 
                    cin >> R; 
                    cout << "\n Digite a frequência: " << endl; 
                    cin >> F;
                    double rf; 
                    rf = velocidadeF(R,F);
                    cout << "\n A velocidade: " << rf << " m/s " << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double o, t2;      
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> o; 
                    cout << "\n Digite o periodo: " << endl; 
                    cin >> t2;
                    double om; 
                    om = omega(o,t2);
                    cout << "\n O ômega: " << om << " radianos "<< endl;  
                      
                 break;
                 
                 case 5: 
                      
                    double t3;      
                    cout << "\n Digite o periodo: " << endl; 
                    cin >> t3; 
                    double ome; 
                    ome = omega1(t3);
                    cout << "\n O ômega: " << ome << " radianos " << endl;  
                                                     
                 break; 
                 
                 case 6:
                    
                    double freq;      
                    cout << "\n Digite a frequência: " << endl; 
                    cin >> freq; 
                    double omeg; 
                    omeg = omega2(freq);
                    cout << "\n O ômega: " << omeg << " radianos " << endl;  
                    
                 break;
                 
                 case 7: 
                 
                    double o1, raio;      
                    cout << "\n Digite o ômega: " << endl; 
                    cin >> o1; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> raio;
                    double velocidade8; 
                    velocidade8 = velocidadeO(o1, raio);
                    cout << "\n A velocidade: " << velocidade8 << " m/s " << endl;  
                    
                 break;
                 
                 case 8: 
                      
                    double v1,r1;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> v1; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> r1;
                    double a; 
                    a = Ac(v1,r1);
                    cout << "\n A aceleracao centrípeta: " << a << " m/s² " << endl;  
                      
                 break;
                 
                 case 9: 
                      
                    double o2, r2;      
                    cout << "\n Digite o ômega: " << endl; 
                    cin >> o2; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> r2;
                    double ace;
                    ace = Ac1(o2,r2); 
                    cout << "\n A aceleracao centrípeta: " << ace << " m/s² " << endl;  
                                                     
                 break; 
                 
                 case 10:
                      
                      double velo1, R1; 
                      cout << "\n Digite a velocidade: " << endl; 
                      cin >> velo1;
                      cout << "\n Digite o raio " << endl; 
                      cin >> R1;
                      double vel;
                      vel = omegaa(velo1,R1);
                      cout << "\n O ômega: " << vel << " radianos " << endl;    
                                                 
                 break; 
                 
                 case 11:
                      
                      double te,velo2; 
                      cout << "\n Digite a velocidade: " << endl; 
                      cin >> velo2; 
                      cout << "\n Digite o tempo: " << endl; 
                      cin >> te;
                      double vel1;
                      vel1 = velocidadeH(velo2, te);
                      cout << "\n A velocidade: " << vel1 << " m/s " << endl;    
                                                 
                 break; 
                 
                 case 12:
                      
                      double velo3, h3; 
                      cout << "\n Digite a altura: " << endl; 
                      cin >> h3;
                      cout << "\n Digite a velocidade: " << endl; 
                      cin >> velo3;
                      double vel2;
                      vel2 = velo2H(velo3,h3);
                      cout << "\n A velocidade: " << vel2 << " m/s " << endl;    
                                                 
                 break;           
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
