#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double energiaC(double m, double v) 
{
       double C = (m * (pow(v,2))) / 2; 
       return C;
}

double energiaP(double m1, double h) 
{
       double P = m1 * 10 * h; 
       return P;
}

double energiaP1(double k, double x) 
{
       double P1 = (k * (pow(x,2))) / 2; 
       return P1;
}

double energiaM(double C, double P)
{
       double M = C + P;
       return M; 
}

double raio(double r, double f, double f1)
{ 
    double R = r * f;
    double Rr = R / f1; 
    return Rr; 
}

double fre(double r1, double f1, double r2)
{ 
    double F = r1 * f1;
    double Ff = F / r2; 
    return Ff; 
}

double raio1(double r3, double f2, double f3)
{ 
    double R1 = r3 * f2;
    double Rr1 = R1 / f3; 
    return Rr1; 
}

double fre1(double r4, double f4, double r5)
{ 
    double F1 = r4 * f4;
    double Ff1 = F1 / r5; 
    return Ff1; 
}

int main () 
{ 
  	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre gravitação e energia; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: "; 
    cout << "\n(Kilogramas, g = 10, N/m, Metros, m/s, Joules, Hertez) " << endl << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a energia cinética                             (m * v² / 2)\n"; 
    fisica += " 2 - Para saber a energia potencial gravitacional              (m * g * h)\n";
    fisica += " 3 - Para saber a energia potencial elastica                   (k * x² / 2)\n";
    fisica += " 4 - Para saber a energia mecânica                             (Ec + Ep)\n";
    fisica += " 5 - Para saber o raio 1                                       (r2 * f1 / f2)\n";
    fisica += " 6 - Para saber a frequência 1                                 (r1 * f2 / r2)\n";
    fisica += " 7 - Para saber o raio 2                                       (r1 * f1 / f2)\n";
    fisica += " 8 - Para saber a frequência 2                                 (r1 * f2 / r2)\n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double m,v;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> m; 
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> v;
                    double ST1; 
                    ST1 = energiaC(m,v);
                    cout << "\n A energia cinética: " << ST1 << " J (joules) " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double m1,h;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> m1; 
                    cout << "\n Digite a altura: " << endl; 
                    cin >> h;
                    double e; 
                    e = energiaP(m1,h);
                    cout << "\n A energia potencial gravitacional: " << e << " J (joules) " << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double k,x;      
                    cout << "\n Digite a constante: " << endl; 
                    cin >> k; 
                    cout << "\n Digite a deformação: " << endl; 
                    cin >> x;
                    double e1; 
                    e1 = energiaP1(k,x);
                    cout << "\n A energia potencial elastica: " << e1 << " J (joules) " << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double C,P;      
                    cout << "\n Digite a energia cinética: " << endl; 
                    cin >> C; 
                    cout << "\n Digite a energia potencial: " << endl; 
                    cin >> P;
                    double et; 
                    et = energiaM(C,P);
                    cout << "\n A energia mecânica: " << et << " J (joules) "<< endl;  
                      
                 break;
                                 
                 case 5: 
                      
                    double r,f,f1;      
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> r; 
                    cout << "\n Digite a frequência 1: " << endl; 
                    cin >> f; 
                    cout << "\n Digite a frequência 2: " << endl; 
                    cin >> f1;
                    double fe; 
                    fe = raio(r,f,f1);
                    cout << "\n O raio 1: " << fe << " UA " << endl;  
                      
                 break;
                 
                 case 6: 
                      
                    double f2,r1,r2;      
                    cout << "\n Digite a frequência 2: " << endl; 
                    cin >> f2; 
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> r1; 
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> r2;
                    double frequencia4; 
                    frequencia4 = fre(f2,r1,r2);
                    cout << "\n A frequência 1: " << frequencia4 << " Hz " << endl;  
                                                     
                 break; 
                 
                 case 7:
                      
                      double r3, f3,f4; 
                      cout << "\n Digite o raio 1: " << endl; 
                      cin >> r3;
                      cout << "\n Digite a frequência 1: " << endl; 
                      cin >> f3; 
                      cout << "\n Digitea a frequência 2: " << endl; 
                      cin >> f4; 
                      double R;
                      R = raio1(r3,f3,f4); 
                      cout << "\n O raio 2: " << R << " UA " << endl;          
                 
                      
                 break; 
                 
                 case 8:
                      
                      double r4, f5,r5; 
                      cout << "\n Digite o raio 1: " << endl; 
                      cin >> r4;
                      cout << "\n Digite a frequência 1: " << endl; 
                      cin >> f5; 
                      cout << "\n Digitea o raio 2: " << endl; 
                      cin >> r5; 
                      double F1;
                      F1 = fre1(r4,f5,r5); 
                      cout << "\n A frequência 2: " << F1 << " Hz " << endl;          
                 
                      
                 break; 
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
