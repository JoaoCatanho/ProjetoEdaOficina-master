#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Carro.h"
#include "mecanico.h"
#include "oficina.h"


using namespace std;

bool verificaNumero(std::string num, int min, int max)  //fun�ao para verificar se o numero de ets inserido � valido
{
        if (num.find_first_not_of("0123456789") != std::string::npos)  // verifica se o o numero de ets � uma letra
        {
            cout << "Erro : Insira um valor v�lido: ";
            return false;
        }
        int inteiroEts = stoi(num);
        if (inteiroEts > max || inteiroEts < min)  // verifica se � inferior a 3 e maior do que 8
        {
            cout << "Erro : Insira um valor v�lido: ";
            return false;
        }
        return true;
}



int main() 
{
    srand(unsigned int(time(NULL)));
    Abre_ficheirosMM();
   Oficina oficina = Oficina();
   std::string nEts;

   do   //do para executar a fun�ao do verifica o numero
   {
       cout << "Quantas ETs? ";
       getline(cin, nEts);
   } while (!verificaNumero(nEts, 3, 8));
   
   oficina.tamanho = stoi(nEts);

    //InicializarOficina(oficina);
    //AbrirOficina(oficina);
    gera_carro();
    gera_id_carro_modelos();
  
   
   
    

    
    return 0;


}

