#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#include "IG_FUCTIONS.h"
int main()
{
	setlocale(LC_ALL, "");
	int op, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t----------------MEN� DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"\n1. TRABAJO DE Ingrith Elizalde"<<endl;
		cout<<"2. ---------"<<endl;
		cout<<"3. ---------"<<endl;
		cout<<"4. --------"<<endl;
		cout<<"5. --------"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"INGRESE UNA OPCI�N: "; cin>>op;
		switch(op)
		{
			case 1:
				IG_Menu();
			break;
			case 2:
			break;
			case 3:
			
			break;
			case 0:
				if(op!=0 && op>0){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get();
				   cout<<flag<<endl;
			break;
		}
	}
	while(op != 0);
	//system("tree");
	return(0);
}
