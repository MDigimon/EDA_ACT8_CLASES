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
}

void Laboratorio::agregarFinal(Computadora _compu){
	this->computadoras[this->indice]=_compu;
	indice++;
}

void Laboratorio::mostrar(){
	
}

