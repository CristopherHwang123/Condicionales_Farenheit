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
