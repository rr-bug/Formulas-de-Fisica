#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double velocidadeST(double s, double t) 
{
       double ST; 
       ST = (s / t); 
       return ST;
}

double primeiro(double v)
{
       double primeiro1; 
       primeiro1 = (pow(v,2));
       return primeiro1; 
}

double ondaVelocidade(double tracao, double densidadeLinear)
{     
   double ondaV; 
   ondaV = (tracao/densidadeLinear); 
   return sqrt(ondaV); 
} 

double Tracao(double velocidade, double densidadeLinear)
{     
   double tracao1; 
   tracao1 = pow(velocidade,2) * densidadeLinear;
   return tracao1; 
} 

double densidadeLinear(double tracao2, double velocidade1)
{ 
    double densidadeLinear; 
    densidadeLinear = tracao2/pow(velocidade1,2); 
    return densidadeLinear; 
}

double densidadeLinearParticular(double massa, double comprimento2)
{ 
   double densidadeLinearParticular; 
   densidadeLinearParticular = massa / comprimento2; 
   return densidadeLinearParticular;
}

double frequencia(double periodo)
{ 
   double frequencia; 
   frequencia = 1 / periodo; 
   return periodo;
}

double velocidade(double comprimentoOnda1, double frequencia)
{ 
       double velocidade2; 
       velocidade2 = comprimentoOnda1 * frequencia; 
       return velocidade2; 
}

double comprimentoOnda(double velocidade3, double frequencia) 
{ 
       double comprimentoOnda2; 
       comprimentoOnda2 = velocidade3/frequencia; 
       return comprimentoOnda2; 
}

double frequencia(double velocidade4, double comprimentoOnda3) 
{ 
       double frequencia; 
       frequencia = velocidade4/comprimentoOnda3; 
       return frequencia; 
}   

int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre ondas; " << endl; 
   
    cout << "\nValores serão atribuidos de acordo com o S.I: " << endl; 
    cout << "(Metros, Segundos, N (newton), Kilogramas, Hertez) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber a velocidade          (S * T) \n"; 
    fisica += " 2 - Para saber a velocidade          (raiz(T/M)) \n";
    fisica += " 3 - Para saber a tração              (v² * M) \n";
    fisica += " 4 - Para saber a densidade linear    (T/v²) \n";
    fisica += " 5 - Para saber a densidade linear    (m/l) \n";
    fisica += " 6 - Para saber a frequência          (1/T) \n";
    fisica += " 7 - Para saber a velocidade          (y * f) \n";
    fisica += " 8 - Para saber o comprimento de onda (v/f) \n";
    fisica += " 9 - Para saber a frequência          (v/y) \n";    
    fisica += "10 - Para saber o comprimento         (v² * m / F) \n";
    fisica += " 0 - Para sair \n";
    
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
                    ST1 = velocidadeST(s,t);
                    cout << "\n A velocidade: " << ST1 << " m/s" << endl;  
                                  
                 break; 
                 
                 case 2:
                    
                    double tracao, densidade;      
                    cout << "\n Digite a tração: " << endl; 
                    cin >> tracao; 
                    cout << "\n Digite a densidade linear: " << endl; 
                    cin >> densidade;
                    double velocidade5; 
                    velocidade5 = ondaVelocidade(tracao, densidade);
                    cout << "\n A velocidade: " << velocidade5 << " m/s" << endl;  
                    
                 break;
                 
                 case 3: 
                 
                    double velocidade6, densidade1;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velocidade6; 
                    cout << "\n Digite a densidade linear: " << endl; 
                    cin >> densidade1;
                    double tracao3; 
                    tracao3 = Tracao(velocidade6, densidade1);
                    cout << "\n A tração: " << tracao3 << " N (newton)" << endl;  
                    
                 break;
                 
                 case 4: 
                      
                    double velocidade7, tracao2;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velocidade7; 
                    cout << "\n Digite a tração: " << endl; 
                    cin >> tracao2;
                    double densidade2; 
                    densidade2 = densidadeLinear(velocidade7, tracao2);
                    cout << "\n A densidade linear: " << densidade2 << " Kg/m "<< endl;  
                      
                 break;
                 
                 case 5: 
                      
                    double massa, comprimento3;      
                    cout << "\n Digite a massa: " << endl; 
                    cin >> massa; 
                    cout << "\n Digite o comprimento: " << endl; 
                    cin >> comprimento3;
                    double densidade3; 
                    densidade3 = densidadeLinearParticular(massa,comprimento3);
                    cout << "\n A densidade linear particular: " << densidade3 << "Kg/m " << endl;  
                                                     
                 break; 
                 
                 case 6:
                    
                    double periodo;      
                    cout << "\n Digite o peridoo: " << endl; 
                    cin >> periodo; 
                    double frequencia1; 
                    frequencia1 = 1/periodo;
                    cout << "\n A frequência: " << frequencia1 << " Hz" << endl;  
                    
                 break;
                 
                 case 7: 
                 
                    double frequencia2, comprimentoonda4;      
                    cout << "\n Digite a frequência: " << endl; 
                    cin >> frequencia2; 
                    cout << "\n Digite o comprimento de onda: " << endl; 
                    cin >> comprimentoonda4;
                    double velocidade8; 
                    velocidade8 = velocidade(frequencia2,comprimentoonda4);
                    cout << "\n A velocidade: " << velocidade8 << " m/s " << endl;  
                    
                 break;
                 
                 case 8: 
                      
                    double velocidade9, frequencia3;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velocidade9; 
                    cout << "\n Digite a frequência: " << endl; 
                    cin >> frequencia3;
                    double comprimentoonda5; 
                    comprimentoonda5 = comprimentoOnda(velocidade9, frequencia3);
                    cout << "\n O comprimento da onda: " << comprimentoonda5 << " metros (a unidade será a mesma que estiver           na questão) " << endl;  
                      
                 break;
                 
                 case 9: 
                      
                    double velocidade10, comprimentoonda6;      
                    cout << "\n Digite a velocidade: " << endl; 
                    cin >> velocidade10; 
                    cout << "\n Digite o comprimento da onda: " << endl; 
                    cin >> comprimentoonda6;
                    double frequencia4; 
                    frequencia4 = frequencia(velocidade10,comprimentoonda6);
                    cout << "\n A frequência: " << frequencia4 << " Hz " << endl;  
                                                     
                 break; 
                 
                 case 10:
                      
                      double v, m, F; 
                      cout << "\n Digite a velocidade: " << endl; 
                      cin >> v;
                      cout << "\n Digite a massa: " << endl; 
                      cin >> m; 
                      cout << "\n Digitea a força: " << endl; 
                      cin >> F; 
                     
                      double vel;
                      vel = primeiro(v);

                      double segundo1; 
                      segundo1 = vel * m;
                      
                      double comprimento4; 
                      comprimento4 = segundo1 / F; 
                      
                      cout << "\n O comprimento: " << comprimento4 << " metros (a unidade será a mesma que estiver             na questão) " << endl;          
                 
                      
                 break; 
                                         
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
