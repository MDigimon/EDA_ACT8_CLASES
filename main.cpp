#include <iostream>
#include <cstdlib>
#include "clases.h"

using namespace std;

int comprobar(string dato);

int main(){
	string opc;
	int f=1;
	Laboratorio l;
	Computadora c;
	
	while(f==1){
		cout<<"1.-Ingresar los datos de una nueva pc"<<endl;
		cout<<"2.-Ingresar los datos de una pc ya registrada"<<endl;
		cout<<"3.-Ver las computadoras existentes"<<endl;
		cout<<"4.-Salir"<<endl;
		cin>>opc;
		
		if(opc=="1"){
			cout<<"Dato: "<<endl;
		}
		else if(opc=="2"){
			
		}
		else if(opc=="3"){
			
		}
		else if(opc=="4"){
			
		}
		else{
			cout<<"Opcion Incorrecta"<<endl;
			system("pause");
		}
		
		
		
	}
	
	
	return 0;
}
