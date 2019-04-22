#include <iostream>
#include "Jogador.h"
#include "Equipe.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q3
Equipe::Equipe(int tam)
{
    n=tam;
    jogadores = new Jogador[n];
}

Equipe::~Equipe()
{
    delete []jogadores;
}

void Equipe::imprimeEquipe()
{
    int total=0;
    for(int i=0; i<n; i++)
    {
        cout<<"numero: "<<jogadores[i].getNumero()<<endl;
        cout<<"pontos: "<<jogadores[i].getPontos()<<endl;
        total+=jogadores[i].getPontos();
    }
    cout<<"total: "<<total<<endl;
}

int Equipe::maiorPontuador()
{
    int maior = jogadores[0].getPontos();
    int posicao=0;
    for(int i=0; i<n; i++)
    {
        if(jogadores[i].getPontos()>=maior)
        {
            maior=jogadores[i].getPontos();
            posicao=i;
        }
    }
    return jogadores[posicao].getNumero();
}
//-Q3
// ----------------------------------------------------------------------------
