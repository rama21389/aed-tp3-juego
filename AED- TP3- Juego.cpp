/* Ramiro Mendez
 * 145.161.3
 * K1051
 * Tp3: Juego preguntas y respuestas
*/

#include <iostream>


int main () {
	
	using namespace std;
	
	int tema, op, n;
	
	n=0;
	
		
		
	do
	{
	
	cout<< "Bienvenido al juego de preguntas y respuestas mas divertido del mundo!!"<<endl;
	cout<< "Ingrese la opcion deseada: \n"<<" Historia(1)\n"<<" Literatura (2)\n"<<" Informatica (3)\n"<<" Futbol (4)\n"<<" Abandonar juego(5)"<<endl;
	
	

	
	
	cin>> tema;
	
	switch (tema) 
	{
		
		case 1 : 
		
		cout << "Cuando Empezo la segunda guerra mundial? Elija una opcion"<<endl;
		cout << "1: 1938 \n"<<"2: 1940 \n"<< "3: 1939"<<endl;
		cin>> op;
		
		if (op == 3) 
		{
			cout<< "correcto"<<endl;
		}
		else
		{
			cout<< "incorrecto"<<endl;
		 } 
		 break;
		 
		 case 2 : 
		 
		 cout<< "Quien escribio The Firm ? elija una opcion"<<endl;
		 cout<< "1: john katzenbach \n"<<"2: john grisham \n"<< "3: Sidney Sheldon" <<endl;
		 cin>> op;
		 
		 if (op == 2) 
		{
			cout<< "correcto"<<endl;
		}
		else
		{
			cout<< "incorrecto"<<endl;
		 } 
		 break;
		 
		 case 3 : 
		
		cout << "Cuantos bytes almacena el tipo de dato long? elija una opcion"<<endl;
		cout << "1: 4 \n"<<"2: 3 \n"<< "3: 2 "<<endl;
		cin>> op;
		
		if (op == 1) 
		{
			cout<< "correcto"<<endl;
		}
		else
		{
			cout<< "incorrecto"<<endl;
		 } 
		 break;
		 
		 case 4 : 
		
		cout << "Cuanto balones de oro gano messi? Elija una opcion"<<endl;
		cout << "1: 2 \n"<<"2: 3 \n"<< "3: 4"<<endl;
		cin>> op;
		
		if (op == 3) 
		{
			cout<< "correcto"<<endl;
		}
		else
		{
			cout<< "incorrecto"<<endl;
		    
		 } 
		 
		 break;
		 
		 case 5:
		 	
		 	n=1;
		 
			 
	}
	}while (n==0);
	
	cout<< " Game Over "<<endl;
	
	
}
	
	
	
	
	



