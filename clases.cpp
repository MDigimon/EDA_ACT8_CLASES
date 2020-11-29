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
	cout << left;
	cout << setw(8) << "Numero";
	cout << setw(15) << "Nombre";
	cout << setw(18) << "Sistema Operativo";
	cout << setw(12) << "Memoria RAM";
	cout << setw(15) << "Almacenamiento";
	cout << endl;
	for(int i=0; i<indice; i++){
		Computadora &c=computadoras[i];
		cout << setw(8) << i+1;
		cout << c;
		
		//cout << setw(15) << c.get_nombre() << endl;
		//cout << setw(18) <<c.get_so() << endl;
		//cout << setw(12) << c.get_ram() << " Gb"<< endl;
		//cout << setw(15) << c.get_capacidad() << "Gb" << endl << endl;
	}
}

int Laboratorio::get_indice(){
	return this->indice;
}

Computadora Laboratorio::get_computadora(int i){
	return this->computadoras[i];
}

void Laboratorio::respaldar(){
	ofstream archivo("Computadoras.txt");
	if(archivo.is_open()){
		for(int i=0; i < indice; i++){
			Computadora &c = computadoras[i];
			
			archivo << c.get_nombre() << endl;
			archivo << c.get_so() << endl;
			archivo << c.get_ram() << endl;
			archivo << c.get_capacidad() << endl;
		}
	}
	archivo.close();
}

void Laboratorio::recuperar(){
	ifstream archivo("Computadoras.txt");
	if(archivo.is_open()){
		string temp;
		int ram;
		float capacidad;
		Computadora x;
		
		//Vacia el contenido
		for(int i=0; i < 5; i++){
			this->computadoras[i] = x;
		}
		this->indice = 0;
		
		while(true){
			getline(archivo, temp);
			if(archivo.eof())
				break;
			x.set_nombre(temp);
			
			getline(archivo, temp);
			x.set_so(temp);
			
			getline(archivo, temp);
			istringstream(temp) >> ram;
			x.set_ram(ram);
			
			getline(archivo, temp);
			istringstream(temp) >> capacidad;
			x.set_capacidad(capacidad);
			
			this->agregarFinal(x);
		}
	}
	archivo.close();
}
