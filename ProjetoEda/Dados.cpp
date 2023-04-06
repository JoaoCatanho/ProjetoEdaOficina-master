#include "Dados.h"

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

    /*L� os ficheiros marcas e modelos e armazena em um array chamado "marcas" e "modelos"
    O while continua enquanto houver linhas para ler nos ficheiros.
    e o n�mero de marcas lidas e se n�o atingiu o limite m�ximo definido pelo "NumMax_Marcas".
    A cada linha lida, a marca/modelo � adicionada ao array nas posi��es
    "n_marcas", "n_modelos" e essas vari�veis s�o incrementadas para indicar que foram acrescentadas ao array.*/

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
    marcas_file.close();  // Fechar os ficheiros das marcas e modelos ap�s a leitura
    modelos_file.close();
}

string Valor_aleatorio_array(string array[], int tamanho_array)
{
    //recebe um array de strings e o seu tamanho, e retorna um elemento aleat�rio selecionado do array
    int indice = rand() % tamanho_array;
    return array[indice];
}

int aleatorio(int min, int max)
{
    return rand() % max+min;
    
}