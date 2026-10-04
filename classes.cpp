t#include <iostream>
#include <string>
using namespace std;

// Ej 1

class Persona 
{
private:
	string nombre;
	int edad;

public:

	Persona(string n, int e) {
		nombre = n;
		edad = e;
	}

	void mostrar() 
	{
		cout << "Nombre:"
			<< nombre
			<< "\nEdad:"
			<< edad << endl;
	}

	bool comprobar() 
	{
		if (edad >= 18) {
			return true;
		}

		else {
			return false;
		}
	}

};

int main() 
{
	Persona alumnado1("Maria", 20);

	alumnado1.mostrar();
	
	alumnado1.comprobar();
}

// Ej 2

class Rectangle
{
private:
	float amplada;
	float alçada;

public:

	Rectangle(float a, float h) {
		amplada = a;
		alçada = h;
	}

	void mostrar() {
		cout << "Amplada:" << amplada << "\nAlçada:" << alçada << endl;
	}

	float perimetro() {
		float perimetro;
		perimetro = amplada * 2 + alçada * 2;
		return perimetro;
	}

	float area() {
		float area;
		area = amplada * alçada;
		return area;
	}
};

	int main()
	{
		Rectangle rectangle1(12, 10);

		rectangle1.mostrar();
		
		cout << "El perimetro es: " << rectangle1.perimetro() << endl;
		cout << "El area es: " << rectangle1.area() << endl;
	}

	// Ejercicio 3

	class Luz 
	{
	private:
		bool estado;

	public:
		Luz(bool estadoInicial) {
			estado = estadoInicial;
		}

		void ver_estado() {
			if (estado) {
				cout << "Estado actual: Encendida" << endl;
			}
			else {
				cout << "Estado actual: Apagada" << endl;
			}
		}

		void encender() {
			if (estado == false) {
				estado = true;
				cout << "Has encendido la luz" << endl;
			}

			else {
				cout << "La luz ya está encendida" << endl;
			}

		}

		void apagar() {
			if (estado == true) {
				estado = false;
				cout << "Has apagado la luz" << endl;
			}
			else {
				cout << "La luz ya está apagada" << endl;
			}
			
		}
	};

	int main() {
		Luz luz_casa(false);

		luz_casa.ver_estado();

		luz_casa.encender();

		luz_casa.apagar();
	}

	// Ejercicio 4

	class Termometro {
	private:
		float temperatura;

	public:
		Termometro(float temp_inicial) {
			temperatura = temp_inicial;
		}

		void consultar() {
			cout << temperatura << endl;
		}

		void modificar(float temp_modif) {
			if (-50 < temp_modif && temp_modif < 60) {
				temperatura = temp_modif;
			}
			else {
				cout << "Introduce una temperatura entre -50 y 60." << endl;
			}
		}
	};

	int main() {
		Termometro termometro1(25);

		termometro1.consultar();

		termometro1.modificar(65);
		
		termometro1.modificar(15);

		termometro1.consultar();
	}

	// Ejercicio 5

	class Jugador {
	private:
		string nombre;
		int vidas;
		int puntos;

	public:
		Jugador(string n, int v, int p) {
			nombre = n;
			vidas = v;
			puntos = p;
		}

		int añadir_puntos(int puntos_extra) {
			puntos += puntos_extra;
			return puntos;
		}

		void perder_vida() {
			if (vidas == 1) {
				vidas = 0;
				cout << "Ya no te quedan vidas." << endl;
			}

			else if (vidas < 1) {
				cout << "No puedes perder más vidas, no te quedan.";
			}

			else {
				vidas -= 1;
				cout << "Te quedan " << vidas << " vidas." << endl;
			}
		}

		void consultar_puntos() {
			cout << "Tienes " << puntos << " puntos." << endl;
		}

		void consultar_vidas() {
			cout << "Tienes " << vidas << " vidas." << endl;
		}

		void saber_vivo() {
			if (vidas == 0) {
				cout << "Estás muerto" << endl;
			}
			else {
				cout << "Estás vivo." << endl;
			}
		}
	};

	// Ejercicio 6
	class Producto {
	private:
		string nombre;
		float precio;
		int stock;

	public:
		Producto(string n, float p, int s) {
			nombre = n;
			precio = p;
			stock = s;
		}

		void consultar_precio() {
			cout << "El precio en euros es: " << precio << endl;
		}

		void cambiar_precio(float nuevo_precio) {
			precio = nuevo_precio;
		}

		void añadir_unidades(int unidades_extra) {
			stock += unidades_extra;
		}

		void vender_unidad() {
			if (stock > 0) {
				stock -= 1;
				cout << "Se ha vendido una unidad de " << nombre << endl;
			}
			else {
				cout << "No quedan unidades." << endl;
			}
		}

	};

	// Ejercicio 7

	class Reserva {
	private:
		string cliente;
		int noches;
		float precio;
		bool reserva;

	public:
		Reserva(string c, int n, float p, bool r) {
			cliente = c;
			noches = n;
			precio = p;
			reserva = r;
		}

		void consultar_nombre() {
			cout << cliente << endl;
		}

		void cambiar_noches(int modif_noches) {
			if (reserva) {
				noches = modif_noches;
			}
			else {
				cout << "No se puede modificar, la reserva está cancelada." << endl;
			}
		}

		float precio_total() {
			float p_total = noches * precio;
			return p_total;
		}

		void cancelar() {
			if (reserva) {
				reserva = false;
			}
			else {
				cout << "La reserva ya estaba cancelada." << endl;
			}
		}

		void estado() {
			if (reserva) {
				cout << "La reserva está activa." << endl;
			}
			else {
				cout << "La reserva está cancelada." << endl;
			}
		}
	};