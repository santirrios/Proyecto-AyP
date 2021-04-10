/******************************************************************************
Integrantes:Santiago Rios Arbelaez, Juan Camilo Cardona Lopez, Eder Monsalve Bustamante
Programa para calcular refacciones
09/04/21
programado en dev c++ embargadero
*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int dinero_fabrica, dinero_banco,dinero_credito,dinero_propio,refacciones,dinero_intereses,total;
	
	cout<<"costo de las refacciones= ";
	cin>>refacciones;
	if(refacciones>5000000){
		(dinero_fabrica=(refacciones/100)*55);
		(dinero_banco=(refacciones/100)*30);
		(dinero_credito=(refacciones/100)*15);
		(dinero_intereses=dinero_credito/100*20);
		(total = dinero_fabrica + dinero_banco + dinero_credito + dinero_intereses);
		cout<<"\n el dinero a pagar de la fabrica es= "<<dinero_fabrica;
		cout<<"\n el dinero a pagar del banco es= "<<dinero_banco;
		cout<<"\n el dinero a pagar del credito es= "<<dinero_credito;
		cout<<"\n el dinero a pagar del intereses es= "<<dinero_intereses;
		cout<<"\n el dinero total a pagar es= "<<total;
	return 0;
	}
    
    else{
    
		(refacciones<=5000000);
		(dinero_fabrica=(refacciones/100)*70);
		(dinero_credito=(refacciones/100)*30);
		(dinero_intereses=(dinero_credito/100)*20);
		(total = dinero_fabrica + dinero_credito + dinero_intereses);
		cout<<"\n el dinero a pagar de la fabrica es= "<<dinero_fabrica;
		cout<<"\n el dinero a pagar del credito es= "<<dinero_credito;
		cout<<"\n el dinero a pagar del intereses es= "<<dinero_intereses;
		cout<<"\n el dinero total a pagar es= "<<total;
			
			
			
			
		
    		
	}
    
    
    
    
    

    return 0;
}