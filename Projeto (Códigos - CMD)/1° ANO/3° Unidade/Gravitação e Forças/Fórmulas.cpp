#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double constante(double k,double t) 
{
       double A; 
       A = (k * t); 
       return A;
}

double veloAre(double A, double T1) 
{
       double K; 
       K = A / T1; 
       return K;
}

double raioP(double t1, double t2, double r1) 
{
       double pot = (pow(t1,2));
       double pot1 = (pow(t2,2));
       double pot2 = (pow(r1,3)); 
       double R = (pot2 / pot1 ) * pot; 
       return R;
}

double raioP1(double t90, double r2, double r3) 
{
       double pote = (pow(t90,2));
       double pote1 = (pow(r2,3));
       double pote2 = (pow(r3,3)); 
       double R1 = (pote1 / pote ) * pote2; 
       return R1;
}

double raioS(double t4, double t3, double r4) 
{
       double poten = (pow(t3,2));
       double poten1 = (pow(t4,2));
       double poten2 = (pow(r4,3)); 
       double R2 = (poten2 / poten ) * poten1; 
       return R2;
}

double raioS1(double t6, double r6, double r5) 
{
       double potenc = (pow(t6,2));
       double potenc1 = (pow(r6,3));
       double potenc2 = (pow(r5,3)); 
       double R3 = (potenc2 / potenc ) * potenc1; 
       return R3;
}

double forca(double m1, double m2, double d)
{
       double F = (0.0000000000667 * m1 * m2 / (pow(d,2)));
       return F; 
}

double forcaA(double m, double M, double R)
{     
   double FA = (0.0000000000667 * m * M / (pow(R,2))); 
   return FA; 
} 

double forcaE(double k, double x)
{     
   double FE = k * x; 
   return FE; 
} 

double forcaE1(double f, double x1)
{     
   double k1 = f / x1; 
   return k1; 
} 

double forcaE2(double f1, double k2)
{     
   double x2 = f1 / k2; 
   return x2; 
} 


int main () 
{ 
  	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Fisica), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre gravitação e forças; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: "; 
    cout << "\n(Kilogramas, Metros, Periodo = Dias, m/s, N (newton), N/m, UA, G = 6.67 * 10-¹¹) " << endl << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a área do planeta                   (K * Delta t)        \n"; 
    fisica += " 2 - Para saber a velocidade areolar do planeta     (A / Delta t)        \n";
    fisica += " 3 - Para saber o raio do planeta 2                 (r1/t1 * t2)         \n";
    fisica += " 4 - Para saber o periodo do movimento do planeta 2 (r1/t1 * r2)         \n";
    fisica += " 5 - Para saber o raio do planeta 1                 (r2/t2 * t1)         \n";
    fisica += " 6 - Para saber o periodo do movimento do planeta 1 (r2/t2 *r1)          \n";
    fisica += " 7 - Para saber a força gratitacional               (G * (m1 * m2 / d²)) \n";
    fisica += " 8 - Para saber a força gratitacional               (G * (m * M / R²))   \n";
    fisica += " 9 - Para saber a força elastica                    (k * x)              \n";    
    fisica += "10 - Para saber a constante                         (f / x)              \n";
    fisica += "11 - Para saber a deformação                        (f / k)              \n";    
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double k, t;      
                    cout << "\n Digite a velocidade areolar: " << endl; 
                    cin >> k; 
                    cout << "\n Digite a variacao do tempo: " << endl; 
                    cin >> t;
                    double ST1; 
                    ST1 = constante(k,t);
                    cout << "\n A área: " << ST1 << " metros " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double a, T1;      
                    cout << "\n Digite a área: " << endl; 
                    cin >> a; 
                    cout << "\n Digite a variação do tempo: " << endl; 
                    cin >> T1;
                    double velocidade5; 
                    velocidade5 = veloAre(a, T1);
                    cout << "\n A velocidade areolar: " << velocidade5 << " UA " << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double t1, t2, r2;      
                    cout << "\n Digite o periodo de movimento 1: " << endl; 
                    cin >> t1;                          
                    cout << "\n Digite o periodo de movimento 2: " << endl; 
                    cin >> t2; 
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> r2;
                    double raio3; 
                    raio3 = raioP(t1,t2,r2);
                    cout << "\n O raio 2: " << raio3 << " metros " << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double t90, r3, r4;      
                    cout << "\n Digite o periodo de movimento 1: " << endl; 
                    cin >> t90; 
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> r3;
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> r4;
                    double rai; 
                    rai = raioP1(t90,r3,r4);
                    cout << "\n O perido de movimento 2: " << rai << " dias " << endl;  
                      
                 break;
                 
                 case 5: 
                      
                    double t3, t4, r5;
                    cout << "\n Digite o perido do movimento 1: " << endl; 
                    cin >> t3;
                    cout << "\n Digite o periodo do movimento 2: " << endl; 
                    cin >> t4;
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> r5;
                    double ra; 
                    ra = raioS(t3,t4,r5);
                    cout << "\n O raio 1: " << ra << " UA " << endl;  
                                                     
                 break; 
                 
                 case 6:
                    
                    double t6, r6,r7;      
                    cout << "\n Digite o periodo de movimento 2: " << endl; 
                    cin >> t6; 
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> r6; 
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> r7; 
                    double raioo; 
                    raioo = raioS1(t6,r6,r7);
                    cout << "\n O periodo de movimento 1: " << raioo << " dias " << endl;  
                    
                 break;
                 
                 case 7: 
                 
                    double m1,m2,d;      
                    cout << "\n Digite a massa 1: " << endl; 
                    cin >> m1; 
                    cout << "\n Digite a massa 2: " << endl; 
                    cin >> m2; 
                    cout << "\n Digite a distancia: " << endl; 
                    cin >> d;
                    double forca1; 
                    forca1 = forca(m1,m2,d);
                    cout << "\n A força: " << forca1 << " N " << endl;  
                    
                 break;
                 
                 case 8: 
                      
                    double m, M, R;      
                    cout << "\n Digite a massa menor: " << endl; 
                    cin >> m; 
                    cout << "\n Digite a massa maior: " << endl; 
                    cin >> M; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> R;
                    double forca2; 
                    forca2 = forcaA(m,M,R);
                    cout << "\n A força: " << forca2 << " N (newton) " << endl;  
                      
                 break;
                 
                 case 9: 
                      
                    double k1,x;      
                    cout << "\n Digite a constante: " << endl; 
                    cin >> k1; 
                    cout << "\n Digite a deformação: " << endl; 
                    cin >> x;
                    double forca3; 
                    forca3 = forcaE(k1,x);
                    cout << "\n A força: " << forca3 << " N (newton) " << endl;  
                                                     
                 break; 
                 
                 case 10:
                      
                      double f,x1; 
                      cout << "\n Digite a força: " << endl; 
                      cin >> f;
                      cout << "\n Digite a deformação: " << endl; 
                      cin >> x1;
                      double forca4;
                      forca4 = forcaE1(f,x1);
                      cout << "\n A constante: " << forca4 << " N/m " << endl;          
                 
                 break; 
                 
                 case 11:
                      
                      double f2, k2; 
                      cout << "\n Digite a força: " << endl; 
                      cin >> f2;
                      cout << "\n Digite a constante: " << endl; 
                      cin >> k2;
                      double forca5;
                      forca5 = forcaE2(f2,k2);
                      cout << "\n A deformação: " << forca5 << " metros " << endl;          
                 
                      
                 break;   
                     
                 
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
