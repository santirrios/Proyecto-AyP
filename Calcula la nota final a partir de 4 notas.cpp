/******************************************************************************
Calcula la nota final a partir de 4 notas
desarrollado embarcadero dev c++ 6.3
autor: santiago rios arbelaz
abril 1 2021
*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float nota1,nota2,nota3,nota4;
    float nota_final;
    cout << "ingrese nota 1---->";
    cin >>  nota1;
    cout << "ingrese nota 2---->";
    cin >> nota2;
    cout << "ingrese nota 3---->";
    cin >> nota3;
    cout << "ingrese nota 4---->";
    cin >> nota4;
    
    nota_final = (nota1 + nota2 + nota3 + nota4) / 4;
    cout<< "la nota final es---->" << nota_final;

    return 0;
}