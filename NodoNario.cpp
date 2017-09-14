//
// Created by rbara on 14/09/2017.
//
#include "NodoNario.h"

NodoNario::NodoNario(int valor)
{
    this->valor = valor;
}

NodoNario::~NodoNario()
{
    //dtor
}

void NodoNario::agregar(int valor)
{
    hijos.push_back(new NodoNario(valor));
}
