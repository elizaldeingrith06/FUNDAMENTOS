//================================================


//==> Nombre del programa: Contador de Monedas
//==> Archivo : ElizaldeIngrith-contador.cpp
//==>Autor: Ingrith Elizalde
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>//programa de  Ingrith Gissela Elizalde Elizalde
using namespace std;
int main()
{
//contador
int EG_p, EG_c=0, EG_c1=0, EG_c2=0, EG_h;
        float EG_k, EG_al, EG_a=0, EG_a1=0, EG_a2=0 ;

    cout<<"\nIngrese la cantidad de monedas.: "<<endl;
	  cin>>EG_p;


        
        do
        {

    cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "<<endl;  
	cin>>EG_k;
                EG_c ++;
                EG_a = EG_a+EG_k;

                //inicio de condicionales                                                        
				if(EG_k==0.25)
               			 {
                       			 EG_h = EG_h+1;
                                   EG_a1 = EG_a1+EG_k;
                					}else
                        			{
                               		 EG_c2 = EG_c2+1;
                                		EG_a2 = EG_a2+EG_k;                                                               }
   }
        while(EG_c<EG_p);//fin del bucle

        cout<<" monto de monedas ingresadas: "<<EG_c<<endl;
        	cout<<" monto de dinero contado: "<<EG_a<<endl;
        		cout<<"monto de monedas de$0.10 ingresadas: "<<EG_c2<<endl;
        			cout<<"monto en dinero de las monedas de $0.10: "<<EG_a2<<endl;                     
				cout<<"monto de monedas de $0.25 ingresadas: "<<EG_h<<endl;
        	cout<<" monto en dinero de las monedas de $0.25: "<<EG_a1<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de 2 numeros"<<endl;
	cout<<"//==> Archivo : ElizaldeIngrith-Compara.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboracion: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizacion: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;

return 0;
}
