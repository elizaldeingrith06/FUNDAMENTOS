//
// FUNCIONES IMPLEMENTADAS POR Elizalde Ingrith
//
int IG_Suma()
{
	int ig_ax, ig_bx, ig_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>ig_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>ig_bx;
	ig_cx = ig_ax+ig_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<ig_ax<<" + "<<ig_bx<<" es igual a: "<<ig_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int IG_CuentaMoneda()
{
	int ig_n, ig_c=0, ig_c1=0, ig_c2=0, ig_cl, ig_cz;
	float ig_x, ig_al, ig_a=0, ig_a1=0, ig_a2=0, ig_az;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>ig_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>ig_x;
		ig_c = ig_c+1;
		ig_a = ig_a+ig_x;
		if(ig_x==0.25)
			{
				ig_c1 = ig_c1+1;
				ig_a1 = ig_x+ig_a1;
			}
		else
			{
				ig_c2 = ig_c2+1;
				ig_a2 = ig_a2+ig_x;
			}
	}
	while(ig_c<ig_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ig_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<ig_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ig_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ig_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ig_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ig_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int IG_PuntoVenta()
{
	float ig_xx, ig_cc=0, ig_at=0, ig_nn, ig_vb, ig_viva, ig_vdes, ig_vfi, ig_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> ig_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<ig_cc+1 <<": " ;   cin>> ig_xx;
		ig_cc = ig_cc+1;
		ig_at = ig_at+ig_xx;
	}
	while(ig_cc<ig_nn);			
	ig_vb = ig_at;
	ig_viva = ig_vb*0.12;
	ig_vdes = ig_vb*0.10;
	ig_vfi = ig_vb+ig_viva;
	ig_vft = ig_vfi-ig_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<ig_vfi<<endl;
	cout<<"Valor final es: "<<ig_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int IG_Edad()
{
	int ig_diaAct, ig_mesAct, ig_anoAct, ig_diaNac, ig_mesNac, ig_anoNac, ig_anoR, ig_mesR, ig_diaR;	
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> ig_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> ig_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> ig_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> ig_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> ig_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> ig_diaNac;			
	if (ig_anoAct > ig_anoNac)
	{
		if(ig_mesAct > ig_mesNac)	 
		{
			ig_anoR=ig_anoAct-ig_anoNac;	
			ig_mesR=ig_mesAct-ig_mesNac;					
		}
		else
		{
			ig_anoR=ig_anoAct-ig_anoNac-1;	
			ig_mesR=(ig_mesAct+12)-ig_mesNac;					
		}												
		if(ig_diaAct > ig_diaNac)
		{				
			ig_diaR=ig_diaAct-ig_diaNac;
		}
		else
		{
			ig_mesR=ig_mesR-1;
			ig_diaR=(ig_diaAct+30)-ig_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<ig_anoR<< endl;
		cout << " Mes: " <<ig_mesR << endl;
		cout << " Dia: " << ig_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int IG_Compara()
{
	int ig_aa, ig_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> ig_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> ig_bb;
	if (ig_aa==ig_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (ig_aa>ig_bb)
		{
		cout<<ig_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<ig_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Ingrith Elizalde"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int IG_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR ELIZALDE INGRITH------"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				IG_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				IG_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				IG_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				IG_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				IG_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);
	return(0);
}
