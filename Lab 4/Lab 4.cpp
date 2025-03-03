#include <iostream>
using namespace std;
// Función para convertir Celsius a Fahrenheit
double celsiusAFahrenheit(double celsius) {
	return (celsius * 9 / 5) + 32;
}
int main() {
	double temperatura;
	cout << "Ingrese la temperatura en Celsius: ";
	cin >> temperatura;
	double resultado = celsiusAFahrenheit(temperatura);
	cout << "Temperatura en Fahrenheit: " << resultado << "°F" << endl;
	return 0;
}


//******************************************************************************************************
#include <iostream>
using namespace std;
int main() {
	int numero;
	cout << "Ingrese un número entero: ";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "El número " << numero << " es par." << endl;
	}
	else {
		cout << "El número " << numero << " es impar." << endl;
	}
	return 0;
}

//******************************************************************************************************
#include <iostream>
using namespace std;
int main() {
	int N, suma = 0;
	cout << "Ingrese un número N: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		suma += i;
	}
	cout << "La suma de los primeros " << N << " números es: " << suma << endl;
	return 0;
}

//******************************************************************************************************
#include <iostream>
using namespace std;
// Función para convertir Celsius a Fahrenheit
double celsiusAFahrenheit(double celsius) {
	return (celsius * 9 / 5) + 32;
}
// Función para verificar si un número es par o impar
void verificarParidad(int numero) {
	if (numero % 2 == 0)
		cout << "El número " << numero << " es par." << endl;
	else
		cout << "El número " << numero << " es impar." << endl;
}
// Función para calcular la suma de los primeros N números
int sumaNaturales(int N) {
	int suma = 0;
	for (int i = 1; i <= N; i++)
		suma += i;
	return suma;
}
int main() {
	int opcion;
	do {
		cout << "\n--- MENU ---\n";
		cout << "1. Convertir Celsius a Fahrenheit\n";
		cout << "2. Verificar si un número es par o impar\n";
		cout << "3. Calcular la suma de los primeros N números\n";
		cout << "4. Salir\n";
		cout << "Seleccione una opción: ";
		cin >> opcion;
		if (opcion == 1) {
			double temp;
			cout << "Ingrese temperatura en Celsius: ";
			cin >> temp;
			cout << "Equivalente en Fahrenheit: " << celsiusAFahrenheit(temp) << "°F\n";
		}
		else if (opcion == 2) {
			int num;
			cout << "Ingrese un número: ";
			cin >> num;
			verificarParidad(num);
		}
		else if (opcion == 3) {
			int N;
			cout << "Ingrese un número N: ";
			cin >> N;
			cout << "Suma de los primeros " << N << " números: " << sumaNaturales(N) << endl;
		}
	} while (opcion != 4);
	return 0;
