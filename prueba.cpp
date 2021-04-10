/******************************************************************************
Integrantes:Santiago Rios Arbelaez, Juan Camilo Cardona Lopez, Eder Monsalve Bustamante
Programa para calcular la cantidad de camiones para transportar un cilindro de gasolina
10/04/21
programado en dev c++ embargadero
*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	float cisterna=2.84, diametro_cilindro,volumen,radio,gasolina;
	int cantidad_de_camiones;
	
	cout<<"ingrese el diametro del cilindro (m)= ";
	cin>>diametro_cilindro;
	
	if (diametro_cilindro > 100){
		cout<<"error";
		
		
	}
	else
	{
	cout<<"ingrese en metros la altura de cantidad de combustible dentro del tanque= ";
	cin>>gasolina;
	if(gasolina>100){
		cout<<"error";
		
	}
	
	else
	{
	
	
	(radio=diametro_cilindro/2);
	(volumen=3.1416*(radio*radio)*gasolina);
	cout<<"el volumen de gasolina dentro de el tanque en metros cubicos es= "<<volumen;
	
	
	(cantidad_de_camiones = volumen / cisterna);
	cout<<"\n la cantidad de camiones cisterna necesarios son= "<<cantidad_de_camiones;
}
    }
	
	
	
	
	
	return 0;	
}