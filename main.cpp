#include <iostream>
/*
P3Lab1_DanielSagastume

Daniel Sagastume - 12041018

23/4/2021

*/
using namespace std;

int main(int argc, char** argv) {
	int op=0;
	while(op!=4) { //Bucle del menu
		cout<<"1. Ejercicio 1"<<endl
		    <<"2. Ejercicio 2"<<endl
		    <<"3. Ejercicio 3"<<endl
		    <<"4. Salir"<<endl;
		cin>>op;
		switch(op) {
			case 1: {//Ejercicio 1
				int size=0;
				cout<<"Ingrese el tamaño del tablero: "<<endl;
				cin>>size;
				while(size<1) { //Validacion para que no ponga 0 o negativo
					cout<<"El numero no puedes ser 0 o negativo\n"
					    <<"Ingrese el denuevo el tamaño"<<endl;
					cin>>size;
				}
				int color=0;//Numero que va a imprimir
				int bandera=1;
				for(int i=0; i<size; i++) { //Control de las filas
					if(bandera==0) {
						color=1;
						bandera=1;
					} else {
						color=0;
						bandera=0;
					}
					for(int j=0; j<size; j++) { //Control de columnas
						cout<<color;
						if(color==0) { //Cambia el numero que va a ser en el tablero
							color=1;
						} else {
							color=0;
						}
					}//Fin del for de las columnas
					cout<<"\n";
				}//Fin del for de las filas

			}//Fin del case 1
			break;//Break case 1

			case 2: {//Ejercicio 2
				int n=0;
				cout<<"Ingrese el valor de la sumatoria"<<endl;
				cin>>n;

				while(n<1) { //Validacion
					cout<<"El numero no puedes ser 0 o negativo\n"
					    <<"Ingrese el denuevo el tamaño"<<endl;
					cin>>n;
				}

				int result1=0;
				for(int i=1; i<=n; i++) { //Sumatoria
					result1+=2*i*(i-1);
				}
				cout<<"S("<<n<<")= "<<result1<<endl;//Imprime el resultado
			}//Fin del case 1
			break;//Break case 2

			case 3: {
				double n=0, min=0,max=0;
				int t=0;
				cout<<"Ingrese el valor n: "<<endl;
				cin>>n;
				cout<<"Ingrese el valor t: "<<endl;
				cin>>t;
				while(t<=10) { //Validacion
					cout<<"El numero no puedes ser menor a 10\n"
					    <<"Ingrese el denuevo el el valor"<<endl;
					cin>>t;
				}
				
				max=n;
				double mitad=0.0;
				for(int i=0; i<t; i++) {//For
					mitad=(min+max)/2;//Se saca la mitad
					double exp=0;exp=mitad*mitad;//Se eleva a la 2
					if(exp>n) {
						max=mitad;
					} else {
						min=mitad;
					}
				}//Fin del for
				cout<<mitad<<endl;
			}//Fin del case 3
			break;//Break case 3
		}//Fin del switch
		if(op>4) {
			cout<<"El numero no puede ser mayor a 4"<<endl;
		}
	}//Fin del while del menu

	return 0;
}