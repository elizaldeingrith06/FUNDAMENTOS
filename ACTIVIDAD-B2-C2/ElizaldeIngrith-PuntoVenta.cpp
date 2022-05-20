//================================================


//==> Nombre del programa: Controlador de Venta
//==> Archivo : ElizaldeIngrith-PuntoVenta.cpp
//==>Autor: Ingrith Elizalde
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;//programa realizado//Ingrith Gissela Elizalde Elizalde
int main()
{//INICIO DEL PROGRAMA
        int EG_a=0,EG_c=0;
        float EG_x, EG_n, EG_cos, EG_iva, EG_des, EG_ivacos, EG_total ;                     
        cout<<endl;
        cout<<"Ingrese la cantidad deproductos a comprar."<<endl;
        cin>>EG_n;
        
        do {cout<<"\nIngrese el precio del producto. ";
                cin>> EG_x;
                EG_c ++;
                EG_a =EG_a+EG_x;
        }while(EG_c<EG_n);


      
        EG_cos = EG_a;
        EG_iva = EG_cos*0.12;
        EG_des = EG_cos*0.10;
        EG_ivacos = EG_cos+EG_iva;
        EG_total= EG_ivacos-EG_des;
                         
        cout<<"\nValor a pagar solo del iva. : "<<EG_ivacos<<endl;
        cout<<"\nvalor tital a pagar"<<EG_total;
        	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: PuntoVenta"<<endl;
	cout<<"//==> Archivo : ElizaldeIngrith-PuntoVenta.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;	
		}

