#include <iostream>
#include <cstdlib>


#include "funciones.h"
#include "clases.h"

using namespace std;

int main(){
	string opc, a, b, c, d;
	int f=1, x;
	float y;
	Laboratorio l;
	Computadora temp = Computadora();
	
	while(f==1){
		cout<<"1.-Ingresar los datos de una nueva pc"<<endl;
		cout<<"2.-Ingresar los datos de una pc ya registrada"<<endl;
		cout<<"3.-Ver las computadoras existentes"<<endl;
		cout<<"4.-Respaldar Datos"<<endl;
		cout<<"5.-Recuperar Datos"<<endl;
		cout<<"6.-Salir"<<endl;
		cin>>opc;
		fflush(stdin);
		
		if(opc=="1"){
			if(l.get_indice() < 5){
				cin >> temp;
				l << temp;
			}
			else{
				cout << "No Hay Espacio para Registrar mas Computadoras" << endl;
				system("pause");
				system("cls");
			}
		}
		else if(opc=="2"){
			if(l.get_indice() == 0){
				cout << "No Existen Computadoras Registradas" << endl;
				system("pause");
				system("cls");
			}
			else if(l.get_indice() == 5){
				cout << "No Hay Espacio para Registrar mas Computadoras" << endl;
				system("pause");
				system("cls");
			}
			else{
				l.mostrar();
				cout << "Numero de Computadora a Registrar: ";
				cin >> a;
				x = comprobar_i(a);
				if(x != -1){
					if(x <= l.get_indice() && x > 0){
						Computadora temp2 = Computadora(l.get_computadora(x-1).get_nombre(),
						l.get_computadora(x-1).get_so(),
						l.get_computadora(x-1).get_ram(),
						l.get_computadora(x-1).get_capacidad());
						l << temp2;
					}
					else{
						cout << "Dato Incorreto" << endl;
						system("pause");
						system("cls");
					}
				}
				else{
					cout << "Dato Incorreto" << endl;
					system("pause");
					system("cls");
				}
			}
		}
		else if(opc=="3"){
			if(l.get_indice() == 0){
				cout << "No Existen Computadoras Registradas" << endl;
			}
			else{
				l.mostrar();		
			}
			system("pause");
			system("cls");
		}
		else if(opc=="4"){
			l.respaldar();
			cout << "DATOS RESPALDADOS";
			system("pause");
		}
		else if(opc=="5"){
			cout << "Al recuperar los datos se eliminaran los datos actuales" << endl;
			cout << "\t¿Quieres continuar? \n \t   1:Si   2:N0" << endl;
			cin >> a;
			if(a == "1"){
				l.recuperar();
				cout << "DATOS RECUPERADOS" << endl;
			}
			else if(a == "2")
				cout << "DATOS NO RECUPERADOS" << endl;
			else
				cout << "OPCION INCORRECTA" << endl;
			
			system("pause");
		}
		else if(opc=="6"){
			f=0;
		}
		else{
			cout<<"Opcion Incorrecta"<<endl;
			system("pause");
		}
		system("cls");
		
		
	}
	cout << "FIN DEL PROGRAMA" << endl;
	
	return 0;
}
