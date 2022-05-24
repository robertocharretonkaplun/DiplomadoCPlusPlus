#include <iostream>
#include <string>
using namespace std;

int main() {
  /* MODULO 3 */
  // Que es una variable?
  // Una variable es un dato que pueda cambiar conforme pase el tiempo.

  // Variables por defecto en C++
  
  // int -> Maneja datos enteros. Ejemplo = 10
  int edad = 23;
  // float -> Maneja datos decimales. Ejemplo = 1.6f
  float calificacion = 6.5f;
  // char -> Maneja un caracter simple. Ejemplo = 't'
  char letra = 'r';
  // bool -> Maneja valores que pueden ser verdaderos o falsos. Ejemplo = true/false
  bool laPuertaEstaAbierta = false;
  // string -> Es una cadena de caracteres. Es necesario incluir la libreria de 
  // string para que esta variable funcione. Ejemplo = "Hola soy una cadena"
  string nombre = "Pepe";

  // Una variable puede estar asigna o no asignada, dependiendo de la necesidad
  // del programa. Ejemplo:
  int numVacunados; // No inicializado
  int numInfectados = 500; // Inicializado

  // Pesos de los tipos de datos

  // Cuanto pesa 1 byte en memoria: 8 bits;
  // 1 byte = 8 bits
  
  // Int = sizeOf(4 byte) -> 4 bytes son 32 bits.
  cout << "int: " << sizeof(int) << endl;
  int intToBit = sizeof(int) * 8;
  cout << "int to bit: " << intToBit << endl;
  
  // float = sizeOf() -> 4 bytes son 32 bits.
  cout << "float: " << sizeof(float) << endl;
  int floatToBit = sizeof(float) * 8;
  cout << "float to bit: " << floatToBit << endl;

  // char = sizeOf() -> 1 bytes son 8 bits.
  cout << "char: " << sizeof(char) << endl;
  int chartToBit = sizeof(char) * 8;
  cout << "char to bit: " << chartToBit << endl;

  // bool = sizeOf() -> 1 bytes son 8 bits.
  cout << "bool: " << sizeof(bool) << endl;
  int boolToBit = sizeof(bool) * 8;
  cout << "bool to bit: " << boolToBit << endl;

  // Constantes en C++

  return 0;
}

