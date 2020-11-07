#include <iostream>
#include <cstdlib>

using namespace std;

class Computadora{
	private:
		int mem_RAM;
		string capacidad;
		string so;
		string nombre;
	public:
		Computadora();
		void set_ram(int mem);
		int get_ram();
		void set_capacidad(int cap);
		string get_capacidad();
		void set_so(int sistema);
		string get_so();
		void set_nombre(int nom);
		string get_nombre();
};

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


int main(){
	
	
	return 0;
}
