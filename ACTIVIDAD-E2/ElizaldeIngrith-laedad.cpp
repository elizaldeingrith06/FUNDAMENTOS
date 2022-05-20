//================================================


//==> Nombre del programa: Edad
//==> Archivo : ElizaldeIngrith-laedad.cpp
//==>Autor: Ingrith Elizalde
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>//programa de Ingrith Gissela Elizalde Elizalde
using namespace std;
int main(){//inicio del programa
	int EG_ed,EG_diac,EG_meac,EG_anac,EG_dina,EG_mena,EG_anna;
	
	
	cout<<"Ingrese el año actual"<<endl;
	cin>>EG_anac;
	cout<<"Ingrese el mes actual"<<endl;
	cin>>EG_meac;
	cout<<"Ingrese el dia atual"<<endl;
	cin>>EG_diac;
	
	cout<<endl;//paradarun espacio
	cout<<endl;
	
	cout<<"Ingrese el ano de nacimiento."<<endl;
	cin>>EG_anna;
	cout<<"Ingrese el mes de nacimiento."<<endl;
	cin>>EG_mena;
	cout<<"Ingrese el dia de nacimiento"<<endl;
	cin>>EG_dina;
	if(EG_mena < EG_meac){
		
		EG_ed=EG_anac-EG_anna;
		//condicionales
	}else if(EG_mena<=EG_meac)
	   if(EG_diac<=EG_dina){
		
		EG_ed=EG_anac-EG_anna;
		
	}else if(EG_mena>EG_meac& EG_dina>EG_diac)
	   {(EG_ed=EG_anac-EG_anna)-1;
	   }
	
	cout<<EG_ed;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de 2 numeros"<<endl;
	cout<<"//==> Archivo : ElizaldeIngrith-laedad.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	
	return 0;
}
	
