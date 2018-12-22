#include<iostream> 
#include<cstdlib> 
#include<cmath>
#include<iomanip>
#include<windows.h>
#include<locale.h>

using namespace std; 

double trabalho(double Qa, double Qb)
{     
   double trab; 
   trab = Qa - Qb;
   return trab; 
} 

double rendimento(double Qa1, double Qb1)
{ 
    double N; 
    N = Qa1 - Qb1; 
    return N; 
}

double rendimento2(double trabalho1, double Qa2)
{ 
   double N1; 
   N1 = trabalho1/Qa2; 
   return N1;
}

double rendimento3(double Qb3, double Qa3)
{ 
   double N2; 
   N2 = Qb3/Qa3; 
   return N2;
}

double rendimento4(double Ta, double Tb)
{ 
       double N3;
       N3 = Ta - Tb; 
       return N3; 
}

double rendimento5(double Ta1,double Tb1)
{ 
    double ren; 
    ren = Tb1 / Ta1; 
    return ren;    
}

double QA(double qb, double ta, double tb)
{
       double Qa; 
       Qa = qb * ta; 
       return (Qa/tb);
}

double QB(double qa, double ta1, double tb1)
{
       double QB; 
       QB = qa * tb1; 
       return (QB/ta1);
}

double Ta(double qb1, double qa1, double tb2)
{
       double Ta; 
       Ta = qa1 * tb2; 
       return (Ta/qb1);
}

double Tb(double qa2, double ta2, double qb2)
{
       double Tb; 
       Tb = qb2 * ta2; 
       return (Tb/qa2);
}


int main () 
{ 
   	setlocale(LC_ALL, "Portuguese");
    int opcao; 
    
    cout << "Instituto Federal da Bahia - Campus Porto Seguro" << endl; 
    cout << "Projeto de Pesquisa - Física e Lógica" << endl; 
    cout << "Componentes: Andre Búrigo (Professor de Física), Diogo Novais " << endl; 
    cout << "(Professor de Lógica de Programação) e Rayana Ribeiro (Estudante) " << endl;
    cout << "\nPrograma com fórmulas sobre máquina térmica(2 lei da termodinâmica); " << endl; 
    
    cout << "\nValores serão atribuidos de acordo com o S.I: (Joules, Porcentagem) " << endl; 

    string fisica = "\nDigite: \n"; 
    fisica += " 1 - Para saber o trabalho          (Qa - Qb) \n";
    fisica += " 2 - Para saber o rendimento        (Qa - Qb / Qa) \n";
    fisica += " 3 - Para saber o rendimento        (T / Qa) \n";
    fisica += " 4 - Para saber o rendimento        (1 - Qb / Qa) \n";
    fisica += " 5 - Para saber o rendimento        (Ta - Tb / Ta) \n";
    fisica += " 6 - Para saber o rendimento        (1 - Tb / Ta) \n";
    fisica += " 7 - Para saber a Quantidade A      (Qb * Ta / Tb) \n";
    fisica += " 8 - Para saber a Quantidade B      (Qa * Tb / Ta) \n";
    fisica += " 9 - Para saber a Temperatura A     (Qa * Tb / Qb) \n";
    fisica += "10 - Para saber a Temperatura B     (Qb * Ta / Qa) \n";
    fisica += " 0 - Para sair \n";
    
    cout << fisica << endl; 
    cin >> opcao; 

    system("cls");
    
    while (opcao!=0) 
    { 
          switch (opcao) 
          { 
                 case 1:
                    
                    double quantidade1, quantidade2;      
                    cout << "\n Digite a quantidade de calor A: " << endl; 
                    cin >> quantidade1; 
                    cout << "\n Digite a quantidade de calor B: " << endl; 
                    cin >> quantidade2;
                    double traba; 
                    traba = trabalho(quantidade1, quantidade2);
                    cout << "\n O Trabalho: " << traba << " Joules" << endl;  
                    
                 break;
                 
                 case 2: 
                 
                    double quant1, quant2;      
                    cout << "\n Digite a quantidade de calor A: " << endl; 
                    cin >> quant1; 
                    cout << "\n Digite a quantidade de calor B: " << endl; 
                    cin >> quant2;
                    double rend; 
                    rend = rendimento(quant1,quant2);
                    double rend1; 
                    rend1 = rend / quant1; 
                    cout << "\n O Rendimento: " << rend1 << " % (porcentos) " << endl;  
                    
                 break;
                 
                  case 3: 
                      
                    double trabal, qua1;      
                    cout << "\n Digite a quantidade de calor A: " << endl; 
                    cin >> qua1; 
                    cout << "\n Digite o trabalho: " << endl; 
                    cin >> trabal;
                    double rendi;
                    rendi = rendimento2(trabal, qua1);
                    cout << "\n O Rendimento: " << rendi << " % (porcentos) "<< endl;  
                      
                 break;
                                  
                 case 4: 
                      
                    double quanti1, quanti2;      
                    cout << "\n Digite a quantidade de calor A: " << endl; 
                    cin >> quanti1; 
                    cout << "\n Digite a quantidade de calor B: " << endl; 
                    cin >> quanti2;
                    double rendim; 
                    rendim = rendimento3(quanti2, quanti1);
                    double rendime; 
                    rendime = 1 - rendim;
                    cout << "\n O Rendimento: " << rendime << " % (porcentos) " << endl;  
                                                     
                 break; 
                              
                 case 5:
                    
                    double ta, tb;      
                    cout << "\n Digite a temperatura A: " << endl; 
                    cin >> ta;
                    cout << "\n Digite a temperatura B: " << endl; 
                    cin >> tb;  
                    double parte1; 
                    parte1 = rendimento4(ta,tb);
                    double rendiment; 
                    rendiment = parte1 / ta; 
                    cout << "\n O Rendimento: " << rendiment << " % (porcentos) " << endl;  
                    
                 break;
                                 
                 case 6: 
                 
                    double tb1, ta1;      
                    cout << "\n Digite a temperatura A: " << endl; 
                    cin >> ta1; 
                    cout << "\n Digite a temperatura B: " << endl; 
                    cin >> tb1;
                    double ren1; 
                    ren1 = rendimento5(tb1,ta1);
                    double ren2; 
                    ren2 = 1 - ren1; 
                    cout << "\n O Rendimento: " << ren2 << " % (porcentos) " << endl;  
                    
                 break; 
                    
                 case 7: 
                 
                    double qb3, ta3, tb3;      
                    cout << "\n Digite a quantidade B: " << endl; 
                    cin >> qb3; 
                    cout << "\n Digite a temperatura A: " << endl; 
                    cin >> ta3;                     
                    cout << "\n Digite a temperatura B: " << endl; 
                    cin >> tb3;
                    double Qa1; 
                    Qa1 = QA(qb3,ta3,tb3);
                    cout << "\n A Quantidade A: " << Qa1 << " J (joules) " << endl;  
                    
                 break;    
                 
                 case 8: 
                 
                    
                    double qa4, ta4, tb4;      
                    cout << "\n Digite a quantiadade A: " << endl; 
                    cin >> qa4; 
                    cout << "\n Digite a temperatura A: " << endl; 
                    cin >> ta4;                     
                    cout << "\n Digite a temperatura B: " << endl; 
                    cin >> tb4;
                    double Qb1; 
                    Qb1 = QB(qa4,tb4,ta4);
                    cout << "\n A Quantidade B: " << Qb1 << " J (joules) " << endl;  
                    
                 break;    
                 
                 case 9: 
                 
                    
                    double qa5, tb5, qb5;      
                    cout << "\n Digite a quantidade A: " << endl; 
                    cin >> qa5; 
                    cout << "\n Digite a temperatura B: " << endl; 
                    cin >> tb5;                     
                    cout << "\n Digite a quantidade B: " << endl; 
                    cin >> qb5;
                    double TA; 
                    TA = Ta(qa5,tb5,qb5);
                    cout << "\n A Temperatura A: " << TA << " K (kelvin) " << endl;  
                    
                 break;    
                 
                 case 10: 
                 
                    
                    double qb6, ta6, qa6;      
                    cout << "\n Digite a quantidade B: " << endl; 
                    cin >> qb6; 
                    cout << "\n Digite a temperatura A: " << endl; 
                    cin >> ta6;                     
                    cout << "\n Digite a quantidade A: " << endl; 
                    cin >> qa6;
                    double TB; 
                    TB = Tb(qb6,ta6,qa6);
                    cout << "\n A Temperatura B: " << Tb << " K (kelvin) " << endl;  
                    
                 break;    
                 
          }
        
          cout << fisica; 
          cin >> opcao;
    }        
    
    system("pause"); 
    return 0; 
}   
