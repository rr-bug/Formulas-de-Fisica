#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double raioO(double RAI, double W, double W1)
{ 
    double rA = RAI * W;
    double rA1 = rA / W1; 
    return rA1; 
}

double omega(double Rai, double Rai2, double W3)
{ 
    double O = Rai2 * W3;
    double O1 = O / Rai; 
    return O1; 
}

double raioO1(double RAI1, double W6, double W17)
{ 
    double rA4 = RAI1 * W6;
    double rA5 = rA4 / W17; 
    return rA5; 
}

double omega1(double Rai3, double Rai4, double W9)
{ 
    double O2 = Rai3 * W9;
    double O3 = O2 / Rai3; 
    return O3; 
}

double raioV(double raiov, double vel, double vel1) 
{ 
       double RV = raiov / vel ;
       double RV1 = RV * vel;  
       return RV1; 
}

double VelR(double raiov1, double raiov2, double vel2) 
{ 
       double Rv = raiov1 / vel2 ;
       double Rv1 = Rv * raiov2;  
       return Rv1; 
}

double raioV1(double raiov3, double vel3, double vel4) 
{ 
       double rV = raiov3 / vel4 ;
       double rV1 = rV * vel3;  
       return rV1; 
}

double VelR1(double raiov4, double raiov5, double vel5) 
{ 
       double rv = raiov5 / vel5 ;
       double rv1 = rv * raiov4;  
       return rv1; 
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre gravitação; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: (Metros, m/s, UA, Radianos) " << endl << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber o raio 1                  (r1/w1 * w2)            \n";
    fisica += " 2 - Para saber o ômega 1                 (r1/w1 * r2)            \n";
    fisica += " 3 - Para saber o raio 2                  (r2/w2 * w1)            \n";
    fisica += " 4 - Para saber o ômega 2                 (r1/w2 * r1)            \n";
    fisica += " 5 - Para saber o raio 1                  (r1/v1 * v2)            \n";    
    fisica += " 6 - Para saber a velocidade 1            (r1/v1 * r2)            \n";
    fisica += " 7 - Para saber o raio 2                  (r2/r2 * v1)            \n";    
    fisica += " 8 - Para saber a velocidade 2            (r2/w2 * r1)            \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
            
                 case 1: 
                      
                    double RAI, W, W1;      
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> RAI; 
                    cout << "\n Digite o ômega 1: " << endl; 
                    cin >> W; 
                    cout << "\n Digite o ômega 2: " << endl; 
                    cin >> W1;
                    double or1;
                    or1 = raioO(RAI,W,W1);
                    cout << "\n O raio 1: " << or1 << " UA "<< endl;  
                      
                 break;
                 
                 case 2: 
                      
                    double Rai,Rai2,W3;      
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> Rai; 
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> Rai2;
                    cout << "\n Digite o ômega 2: " << endl; 
                    cin >> W3;
                    double or2; 
                    or2 = omega(Rai,Rai2,W3);
                    cout << "\n O ômega 1: " << or2 << " radianos " << endl;  
                                                     
                 break; 
                 
                 case 3:
                    
                    double Rai3,Rai4,W9;      
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> Rai3;       
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> Rai4;      
                    cout << "\n Digite o ômega 1: " << endl; 
                    cin >> W9;
                    double or3; 
                    or3 = omega1(Rai3,Rai4,W9);
                    cout << "\n O ômega 2: " << or3 << " radianos " << endl;  
                    
                 break;
                 
                 case 4: 
                 
                    double RAI2,W6,W17;      
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> RAI2; 
                    cout << "\n Digite o ômega 1: " << endl; 
                    cin >> W6; 
                    cout << "\n Digite o ômega 2: " << endl; 
                    cin >> W17;
                    double orr; 
                    orr = raioO1(RAI2,W6,W17);
                    cout << "\n O raio 2: " << orr << " UA " << endl;  
                    
                 break;
                 
                 case 5: 
                      
                    double raiov,vel,vel1;      
                    cout << "\n Digite a velocidade 1: " << endl; 
                    cin >> vel; 
                    cout << "\n Digite a velocidade 2: " << endl; 
                    cin >> vel1;
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> raiov;
                    double ov; 
                    ov = raioV(vel,vel1,raiov);
                    cout << "\n O raio 1: " << ov << " UA " << endl;  
                      
                 break;
                 
                 case 6: 
                      
                    double raiov1,raiov2,vel2;      
                    cout << "\n Digite a velocidade 2: " << endl; 
                    cin >> vel2; 
                    cout << "\n Digite o raio 1: " << endl; 
                    cin >> raiov1;
                    cout << "\n Digite o raio 2: " << endl; 
                    cin >> raiov2;
                    double ov1; 
                    ov1 = VelR(vel2,raiov1,raiov2);
                    cout << "\n A velocidade 1: " << ov1 << " m/s " << endl;  
                                                     
                 break; 
                 
                 case 7:
                      
                      double raiov3, vel3, vel4; 
                      cout << "\n Digite a velocidade 1: " << endl; 
                      cin >> vel3;
                      cout << "\n Digite a velocidade 2: " << endl; 
                      cin >> vel4; 
                      cout << "\n Digitea o raio 1: " << endl; 
                      cin >> raiov3; 
                      double ov2;
                      ov2 = raioV1(vel3,vel4,raiov3);
                      cout << "\n O raio 2: " << ov2 << " UA " << endl;          
                 
                      
                 break; 
                 
                 case 8:
                      
                      double raiov4,raiov5,vel5; 
                      cout << "\n Digite a velocidade 1: " << endl; 
                      cin >> vel5;
                      cout << "\n Digite o raio 1: " << endl; 
                      cin >> raiov4; 
                      cout << "\n Digitea o raio 2: " << endl; 
                      cin >> raiov5; 
                      double ov3;
                      ov3 = VelR1(vel5,raiov4,raiov5);
                      cout << "\n A velocidade 2: " << ov2 << " m/s " << endl;          
                 
                      
                 break; 
                 
                
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
