#include "mecanico.h"





Mecanico gera_mecanico()
{
    float precoReparacao = aleatorio(35, 100);
    std::string nome; // cria uma quantidade de bites para escrever o numero
    cout << "Insira o nome do Mecanico: " << endl;
    cin>>nome; // para o utilizador poder escrever o nome
   
    std::string marcaEspecializada = Valor_aleatorio_array(marcas, n_marcas);
    

  
    return Mecanico{ nome,precoReparacao ,marcaEspecializada };
}
