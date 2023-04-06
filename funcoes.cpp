#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Carro.h"


using namespace std;



/*Falta acrescentar :
int tempoMaxRep; função rand() para gerar o tempo máx de reparação
bool prioritario;  função ran() para decidir se é prioritário*/




//Valor máximo de marcas e modelos 
const int NumMax_Marcas = 1000;
const int NumMax_Modelos = 1000;




//Vai guardar as marcas e modelos em arrays de strings
string marcas[NumMax_Marcas];
string modelos[NumMax_Modelos];

//contagem da quantidade de marcas e modelos que estão nos ficheiros
int n_marcas = 0;
int n_modelos = 0;

string Valor_aleatorio_array(string array[], int tamanho_array) 
{
    //recebe um array de strings e o seu tamanho, e retorna um elemento aleatório selecionado do array
    int indice = rand() % tamanho_array;
    return array[indice];
}



//Criar um array de structs dos carros
Carro carros[1000];
int contagem_carro = 0;

void Abre_ficheirosMM() 
{
    // Abre os arquivos de marcas e modelos em modo de leitura
    ifstream marcas_file("marcas.txt");
    ifstream modelos_file("modelos.txt");

    //verifica se os ficheiros foram abertos
    if (!marcas_file.is_open()) 
    {
        cout << "Erro ao abrir o ficheiro dos marcas." << endl;
    }

    if (!modelos_file.is_open()) 
    {
        cout << "Erro ao abrir o ficheiro dos modelos." << endl;
    }

    /*Lê os ficheiros marcas e modelos e armazena em um array chamado "marcas" e "modelos"
    O while continua enquanto houver linhas para ler nos ficheiros.
    e o número de marcas lidas e se não atingiu o limite máximo definido pelo "NumMax_Marcas".
    A cada linha lida, a marca/modelo é adicionada ao array nas posições
    "n_marcas", "n_modelos" e essas variáveis são incrementadas para indicar que foram acrescentadas ao array.*/

    string marca, modelo;
    while (getline(marcas_file, marca)) 
    {
        if (n_marcas < NumMax_Marcas) 
        {
            marcas[n_marcas++] = marca;
        }

    }
    while (getline(modelos_file, modelo)) 
    {
        if (n_modelos < NumMax_Modelos) 
        {
            modelos[n_modelos++] = modelo;
        }
    }
    marcas_file.close();  // Fechar os ficheiros das marcas e modelos após a leitura
    modelos_file.close();
}






void gera_num_random(Carro& carro) { /*referencia à struct carro de maneira a alterar o 
    valor original e gera um valor aleatório entre 2 e 5*/
    carro.tempoMaxRep = (rand() % 4) + 2;
}


void gera_carro() 
{
    // Gerar 10 carros
    for (int i = 0; i < 10; i++) 
    {
        // Selecionar aleatoriamente uma marca e um modelo dos arrays
        string marca = Valor_aleatorio_array(marcas, n_marcas);
        string modelo = Valor_aleatorio_array(modelos, n_modelos);
        
        // Criar um novo carro com a marca, modelo e id
        Carro novoCarro = { marca, modelo, contagem_carro + 1 };

        // Adicionar o carro ao array de carros
        carros[contagem_carro] = novoCarro;
        contagem_carro++;
    }
}

bool VerificaPrioritario() {
    int probabilidade = rand() % 100 + 1;
    if (probabilidade <= 5) {
        return true;
    }
    else {
        return false;
    }
}

void gera_id_carro_modelos() 
{
    for (int i = 0; i < contagem_carro; i++) 
    {
        gera_num_random(carros[i]); // gera um valor aleatório para o tempoMaxRep
        carros[i].prioritario = VerificaPrioritario(); // dá um valor aleatório para prioritario na struct
        cout << "Carro " << carros[i].id << "\n";
        cout << "Marca: " << carros[i].marca << "\n";
        cout << "Modelo: " << carros[i].modelo << "\n";
        cout << "Tempo maximo de reparacao: " << carros[i].tempoMaxRep << "\n";
        cout << "Carro Prioritario: " << carros[i].prioritario << "\n\n";
    }
}

