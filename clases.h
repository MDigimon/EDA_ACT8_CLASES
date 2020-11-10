#ifndef clases
#define clases

#include <iostream>

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

class Laboratorio{
	private:
		Computadora compus[5];
	public:
		void agregarFinal(Computadora _compu);
		void mostrar();
};

#endif
