/**********************************************
programa que calcula si eres mayor de edad 
desarrollado embarcadero dev c++ 6.3
autor: santiago rios arbelaz
fecha abril 1 2021
*********************************************/
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	
	char nombre [20];
	float ano_nacimiento, ano_actual, edad;
	
	cout<<"cual es tu nombre--->";
	cin>>nombre;
	
	
	cout<<"hola "<<nombre<<" ingresa tu año de nacimiento---->";
	cin>>ano_nacimiento;
	
	if (ano_nacimiento < 1930)
	{
	cout<<"error";
	
	return 0;
    }
    else
    {
    	cout<<nombre<<" ingresa el año actual---->";
    	cin>>ano_actual;
    	
    	if(ano_actual < ano_nacimiento)
    	{
    		cout<<"error";
    		
    		return 0;
		}
    	else
    	{
    		edad = (ano_actual - ano_nacimiento);
		}
	}
	
	
	if(edad >= 18)
	{
	cout<<nombre<<" eres mayor de edad ";
    }
	else{
		cout<<nombre<<" eres menor de edad ";
	}
	
	
	return 0;
}