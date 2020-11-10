#include "clases.h"

Computadora::Computadora(){
};

void Computadora::set_ram(int mem){
	mem_RAM=mem;
}
int Computadora::get_ram(){
	return mem_RAM;		
}
void Computadora::set_capacidad(int cap){
	capacidad=cap;
}
string Computadora::get_capacidad(){
	return capacidad;		
}
void Computadora::set_so(int sistema){
	so=sistema;
}
string Computadora::get_so(){
	return so;		
}
void Computadora::set_nombre(int nom){
	nombre=nom;
}
string Computadora::get_nombre(){
	return nombre;		
}

void Laboratorio::agregarFinal(Computadora _compu){
	compu=_compu;
}

void Laboratorio::mostrar(){
	
}

