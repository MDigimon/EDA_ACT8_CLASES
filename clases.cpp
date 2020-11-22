#include "clases.h"

Computadora::Computadora(){
};

Computadora::Computadora(string _nombre, string _so, int _ram, float _memoria){
	this->nombre = _nombre;
	this->so = _so;
	this->mem_RAM = _ram;
	this->capacidad = _memoria;
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
	this->indice=0;
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
		cout<<"Numero: "<<i+1<<endl;
		cout<<"Nombre: "<<c.get_nombre()<<endl;
		cout<<"Sistema Operativo: "<<c.get_so()<<endl;
		cout<<"Memoria RAM: "<<c.get_ram()<<" Gb"<<endl;
		cout<<"Almacenamiento: "<<c.get_capacidad()<<"Gb" <<endl<<endl;
	}
}

int Laboratorio::get_indice(){
	return this->indice;
}

Computadora Laboratorio::get_computadora(int i){
	return this->computadoras[i];
}
