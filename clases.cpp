#include "clases.h"

Computadora::Computadora(){
};

void Computadora::set_ram(int mem){
	this->mem_RAM=mem;
}
int Computadora::get_ram(){
	return mem_RAM;		
}
void Computadora::set_capacidad(float cap){
	this->capacidad=cap;
}
float Computadora::get_capacidad(){
	return capacidad;		
}
void Computadora::set_so(const string &sistema){
	this->so=sistema;
}
string Computadora::get_so(){
	return so;		
}
void Computadora::set_nombre(const string &nom){
	this->nombre=nom;
}
string Computadora::get_nombre(){
	return nombre;		
}

Laboratorio::Laboratorio(){
	indice=0;
};

void Laboratorio::agregarFinal(Computadora compu){
	if(indice<5){
		this->computadoras[this->indice]=compu;
		indice++;
	}
	else{
		cout<<"Ya no se pueden agregar mas computadoras"<<endl;
	}
}

void Laboratorio::mostrar(){
	for(int i=0; i<indice; i++){
		Computadora &c=computadoras[i];
		cout<<"Nombre: "<<c.get_nombre()<<endl;
		cout<<"Sistema Operativo: "<<c.get_so()<<endl;
		cout<<"Memoria RAM: "<<c.get_so()<<" Gb"<<endl;
		cout<<"Almacenamiento: "<<c.get_so()<<"Gb" <<endl<<endl;
	}
}

