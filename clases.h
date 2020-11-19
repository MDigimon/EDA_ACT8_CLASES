#ifndef clases
#define clases

#include <iostream>

using namespace std;

class Computadora{
	private:
		int mem_RAM;
		float capacidad;
		string so;
		string nombre;
	public:
		Computadora();
		Computadora(string _nombre, string _so, int _ram, float _memoria);
		void set_ram(int mem);
		int get_ram();
		void set_capacidad(float cap);
		float get_capacidad();
		void set_so(const string &sistema);
		string get_so();
		void set_nombre(const string &nom);
		string get_nombre();
};

class Laboratorio{
	private:
		Computadora computadoras[5];
		int indice;
	public:
		Laboratorio();
		void agregarFinal(Computadora compu);
		void mostrar();
		int get_indice();
		Computadora get_computadora(int i);
};

#endif
