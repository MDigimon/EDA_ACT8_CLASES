#ifndef clases
#define clases

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

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
		
		friend ostream& operator <<(ostream &out, const Computadora &comp){
			out << left;
			out << setw(15) << comp.nombre;
			out << setw(18) << comp.so;
			out << setw(12) << comp.mem_RAM;
			out << setw(15) << comp.capacidad;
			out << endl;
		}
		friend istream& operator >>(istream &in, Computadora &comp){
			
			cout << "Nombre: ";
			cin >> comp.nombre;
			fflush(stdin);
			
			cout << "Sistema Operativo: ";
			cin >> comp.so;
			fflush(stdin);
			
			cout << "Memoria RAM (Gb): ";
			cin >> comp.mem_RAM;
			fflush(stdin);
			
			cout << "Almacenamiento (Gb): ";
			cin >> comp.capacidad;
			fflush(stdin);
			
			
			return in;
		}
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
		void respaldar();
		void recuperar();
		
		friend Laboratorio& operator <<(Laboratorio &lab, const Computadora &c){
			lab.agregarFinal(c);
			return lab;
		}
};

#endif
