#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double forca1(double ma, double a)
{     
   double F1 = ma * a; 
   return F1; 
} 

double Peso(double massa)
{ 
    double P = massa * 10; 
    return P; 
}

double Ac(double velo, double ra)
{ 
   double AC = (pow(velo,2)) / ra; 
   return AC;
}

double forcaAc(double massa1, double acp)
{ 
       double FAC = massa1 * acp; 
       return FAC; 
}

double forcaAC(double massa2, double velo2, double r2) 
{ 
       double FAC1 = (massa2 * (pow(velo2,2)) / r2); 
       return FAC1; 
}

double forcaAT(double U, double N)
{ 
   double FAT = U * N;
   return FAT;
}

double trabalho(double forc, double di)
{ 
   double T = forc * di;
   return T;
}

double potencia(double trabalho, double temp)
{ 
   double P = trabalho / temp;
   return P;
}

double impulso(double tempe, double forca1)
{ 
   double I = tempe * forca1;
   return I;
}

double quantidadeM(double mass, double velo4)
{ 
   double QM = mass * velo4;
   return QM;
}

double impulso1(double QM1)
{ 
   double I1 = QM1;
   return I1;
}

int main () 
{   
   	setlocale(LC_ALL, "Portuguese"); 
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre dinâmica; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: "; 
    cout << "\n(Kilogramas, Metros, Segundos, m/s, m/s², g = 10, N (newton), Hertez, Joule, W (Watts), N/s) " << endl << endl; 

    string fisica = "\nDigite: \n";  
    fisica += " 1 - Para saber a força (2 lei de newton)             (m * a)          \n"; 
    fisica += " 2 - Para saber o peso                                (m * g)          \n";
    fisica += " 3 - Para saber a aceleração centrípeta               (v² / r)      \n";
    fisica += " 4 - Para saber a força da aceleração centrípeta      (m * acp)        \n";
    fisica += " 5 - Para saber a força da aceleração                 (m * (v² / r))   \n";
    fisica += " 6 - Para saber a força de atrito                     (U * N)          \n";
    fisica += " 7 - Para saber o trabalho                            (f * d)          \n";    
    fisica += " 8 - Para saber a potência                            (trabalho / t)   \n";
    fisica += " 9 - Para saber o impulso                             (t * f)          \n";
    fisica += "10 - Para saber a quantidade de movimento             (m * v)          \n";    
    fisica += "11 - Para saber o impulso                             (quantidade de M)\n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double ma, a;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> ma; 
                    cout << "\n Digite : " << endl; 
                    cin >> a;
                    double forca; 
                    forca = forca1(ma,a);
                    cout << "\n A força: " << forca << " N (newton) " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double massa;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa;
                    double p; 
                    p = Peso(massa);
                    cout << "\n O peso: " << p << " N (newton) " << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double velo, ra;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velo; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> ra;
                    double ace; 
                    ace = Ac(velo, ra);
                    cout << "\n A aceleração centrípeta: " << ace << " m/s² " << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double massa1, acp;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa1; 
                    cout << "\n Digite a aceleração centrípeta: " << endl; 
                    cin >> acp;
                    double forc; 
                    forc = forcaAc(massa1,acp);
                    cout << "\n A força: " << forc << " N (newton) " << endl;  
                      
                 break;
                 
                 case 5: 
                      
                    double massa2, velo2, r2;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa2; 
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velo2; 
                    cout << "\n Digite o raio: " << endl; 
                    cin >> r2;
                    double FOR; 
                    FOR = forcaAC(massa1,velo2,r2);
                    cout << "\n A força: " << FOR << " N (newton) " << endl;  
                                                     
                 break; 
                 
                 case 6:
                    
                    double U, N;      
                    cout << "\n Digite o coeficiente de atrito: " << endl; 
                    cin >> U; 
                    cout << "\n Digite a força: " << endl; 
                    cin >> N; 
                    double atrito; 
                    atrito = forcaAT(U,N);
                    cout << "\n A força de atrito: " << atrito << " N (newton) " << endl;  
                    
                 break;
                                
                 case 7: 
                      
                    double fo, di;      
                    cout << "\n Digite a força: " << endl; 
                    cin >> fo; 
                    cout << "\n Digite a distância: " << endl; 
                    cin >> di;
                    double trab; 
                    trab = trabalho(fo,di);
                    cout << "\n O trabalho: " << trab << " J (joules) " << endl;  
                                                     
                 break; 
                 
                 case 8:
                      
                      double trabalho, temp; 
                      cout << "\n Digite o trabalho: " << endl; 
                      cin >> trabalho;
                      cout << "\n Digite o tempo: " << endl; 
                      cin >> temp;
                      double pot; 
                      pot = potencia(trabalho,temp);
                      cout << "\n A potência: " << pot << " W (walts) " << endl;          
                 
                      
                 break;
                 
                 case 9: 
                      
                    double tempe, forca1;      
                    cout << "\n Digite o tempo: " << endl; 
                    cin >> tempe; 
                    cout << "\n Digite a força: " << endl; 
                    cin >> forca1;
                    double I; 
                    I = impulso(tempe,forca1);
                    cout << "\n O impulso: " << I << " N/s " << endl;  
                      
                 break;
                 
                 case 10: 
                      
                    double mass, velo4;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> mass; 
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velo4;
                    double quanti; 
                    quanti = quantidadeM(mass,velo4);
                    cout << "\n A quantidaded de impulso: " << quanti << " J (joules) " << endl;  
                                                     
                 break; 
                 
                 case 11:
                      
                      double QM1; 
                      cout << "\n Digite a quantidade de movimentos do impulso: " << endl; 
                      cin >> QM1;
                      double im; 
                      im = impulso1(QM1);
                      cout << "\n O impulso: " << im << " N/s " << endl;          
                 
                      
                 break; 
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
