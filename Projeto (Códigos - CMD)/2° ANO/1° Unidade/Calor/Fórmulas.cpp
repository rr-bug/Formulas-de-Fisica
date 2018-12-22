#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double CT(double Q, double T) 
{
       double C; 
       C = (Q / T); 
       return C;
}

double cE(double M, double Q1, double T1)
{
       double CE; 
       CE = M * T1;
       return (Q1/CE); 
}

double CS(double c, double T2, double M1)
{     
   double CS1; 
   CS1 = c * T2 * M1; 
   return CS1; 
} 

double CL(double M2, double L)
{     
   double CL1; 
   CL1 = M2 * L;
   return CL1; 
} 

double n(double M, double m3)
{
       double nu1; 
       nu1 = m3/M; 
       return nu1;
}

double CV(double P, double n2, double T3)
{ 
    double Cla; 
    Cla = 0.082 * n2 * T3; 
    return (Cla/P); 
}

double CP(double V, double n3, double T4)
{ 
    double Cla1; 
    Cla1 = 0.082 * n3 * T4; 
    return (Cla1/V); 
}

double CT(double V1, double P1, double n4)
{ 
    double Cla2; 
    Cla2 = 0.082 * n4; 
    double Cla3; 
    Cla3 = P1 * V1; 
    return (Cla3/Cla2); 
}

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nProgramas com fórmulas sobre calor e sua propagação; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: " << endl; 
    cout << "(Joules, Kelvin, Kilogramas, Litros, Mols, Metros, Hertez, R = 0.082, Atm, Massa = Gramas, g/mol) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a capacidade térmica          (Q/Delta T) \n"; 
    fisica += " 2 - Para saber o calor específico            (Q/m * Delta T) \n";
    fisica += " 3 - Para saber o calor sensível              (m * c * Delta T) \n";
    fisica += " 4 - Para saber o calor latente               (m * L) \n";
    fisica += " 5 - Para saber o número de mols              (m / M) \n";
    fisica += " 6 - Para saber o volume (Clapeyron)          (n * R * T / p) \n";
    fisica += " 7 - Para saber a pressão (Clapeyron)         (n * R * T / V) \n";
    fisica += " 8 - Para saber a temperatura (Clapeyron)     (p * V / n * R) \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 
    
    system ("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1: 
                 
                    double quantidade, temperatura;      
                    cout << "\n Digite a quantidade de calor: " << endl; 
                    cin >> quantidade; 
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> temperatura;
                    double capacidade; 
                    capacidade = CT(quantidade, temperatura);
                    cout << "\n A capacidade térmica: " << capacidade << " cal/°C " << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double quantidade1, temperatura1, massa;                          
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa;                        
                    cout << "\n Digite a quantidade de calor: " << endl; 
                    cin >> quantidade1; 
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> temperatura1;
                    double calorE; 
                    calorE = cE(massa,temperatura1, quantidade1);
                    cout << "\n O calor específico: " << calorE << " cal/g°C " << endl;  
                                  
                 break;
                 
                 case 3: 
                 
                    double calorespecifico, temperatura2, massa2;                          
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa2;                        
                    cout << "\n Digite o calor específico: " << endl; 
                    cin >> calorespecifico; 
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> temperatura2;
                    double calorS; 
                    calorS = CS(massa2,temperatura2, calorespecifico);
                    cout << "\n O calor sensível: " << calorS << " Joules " << endl;  
                                  
                 break;
                 
                 case 4: 
                      
                    double latente, massa3;                          
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa3;  
                    cout << "\n Digite o calor latente: " << endl; 
                    cin >> latente;
                    double calorL; 
                    calorL = CL(massa3,latente);
                    cout << "\n O calor latente: " << calorL << " Joules " << endl;  
                                  
                 break;
                 
                 case 5: 
                      
                    double massaM, massaG;                          
                    cout << "\n Digite a massa molar: " << endl; 
                    cin >> massaM;                        
                    cout << "\n Digite a massa do gas: " << endl; 
                    cin >> massaG;
                    double numero; 
                    numero = n(massaG, massaM);
                    cout << "\n O número de mols: " << numero << " mols " << endl;  
                                  
                 break; 
                 
                 case 6:
                    
                    double pressao, temperatura3, numeros;                          
                    cout << "\n Digite o número de mols: " << endl; 
                    cin >> numeros;                        
                    cout << "\n Digite a pressão: " << endl; 
                    cin >> pressao; 
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> temperatura3;
                    double ClapV; 
                    ClapV = CV(numeros, temperatura3, pressao);
                    cout << "\n O volume: " << ClapV << " L(litros) " << endl;  
                                  
                 break;
                 
                 case 7: 
                 
                    double volume, temperatura4, numeros1;                          
                    cout << "\n Digite o número de mols: " << endl; 
                    cin >> numeros1;                        
                    cout << "\n Digite o volume: " << endl; 
                    cin >> volume; 
                    cout << "\n Digite a temperatura: " << endl; 
                    cin >> temperatura4;
                    double ClapP; 
                    ClapP = CP(numeros1, temperatura4, volume);
                    cout << "\n A pressão: " << ClapP << " atm " << endl;  
                                  
                 break;
                 
                 case 8: 
                      
                    double pressao1, volume1, numeros2;                          
                    cout << "\n Digite o número de mols: " << endl; 
                    cin >> numeros2;                        
                    cout << "\n Digite a pressão: " << endl; 
                    cin >> pressao1; 
                    cout << "\n Digite o volume: " << endl; 
                    cin >> volume1;
                    double ClapT; 
                    ClapT = CT(numeros2, volume1, pressao1);
                    cout << "\n A temperatura: " << ClapT << " Kelvin(ou °C) " << endl;  
                                  
                 break;                 
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
