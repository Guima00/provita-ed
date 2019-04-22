#include "Matriz3Linhas.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//Q4
Matriz3Linhas::Matriz3Linhas(int mm, int nn)
{
    m=mm;
    n=nn;
    vet=new float [3*n];
}

Matriz3Linhas::~Matriz3Linhas()
{
    delete []vet;
}

int Matriz3Linhas::detInd(int i, int j)
{
    if(i>=0 && i<m && j>=0 && j<n)
    {
        if(i==0)
            return j;
        else if(i==n/2)
            return n+j;
        else if(i==n-1)
            return 2*j;
        else
            return -2;
    }
    else
        return -1;
}

float Matriz3Linhas::get(int i, int j)
{
    int k=detInd(i,j);
    if(k == -1)
    {
        cout<<"erro"<<endl;
        exit(1);
    }
    if(k==-2)
        return 0.0;
    else
        return vet[k];
}

void Matriz3Linhas::set(int i, int j, float val)
{
    int k=detInd(i,j);
    if(k == -1)
    {
        cout<<"erro:posicao invalida"<<endl;
    }
    else if(k==-2 && val!=0.0)
        cout<<"posicao deve ser nula"<<endl;
    else
        vet[k]=val;
    // Implemente aqui sua solucao!
}
//-Q4
