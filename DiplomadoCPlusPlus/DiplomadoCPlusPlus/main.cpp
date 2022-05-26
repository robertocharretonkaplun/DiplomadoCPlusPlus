// Standar Libs
#include <iostream>
#include <string>
#include <vector>
// Externals

// Locals
#include "Prerequisites.h"


using namespace std;

string nombrePrograma = "DiplomadoCPlusPlus";
const float PI = 3.1416f;

void Suma() {
  cout << "Resultado: " << PI + 5.0f << endl;
  ID_DriverVersion = PI + 5.0f;
  cout << "ID_DriverVersion: " << ID_DriverVersion << endl;
}

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
  const int IDVersion = 342;
  

  // Que es una variable constante?
  // Es una variable la cual tiene un valor que nunca cambiara.
  
  // Porque debo utilizar una variable constante?
  // Porque generamos valores estandarizados que no se van a modificar.
  
  // Existe algun riesgo 
  // Inyeccion de datos a la memoria RAM.
  cout << "IDVersion: " << IDVersion << endl;

  // Staticos en C++
  static int ControlIDNum = 17000;

  // Que es una variable estatica?
  // Es una variable la cual puede ser modificada pero solo como un valor inicializado.

  // Variables Globales en C++

  // Uso
  Suma(); // Llamada de una funcion
  float sumaPI = PI + 10;

  cout << "SumaPI: " << sumaPI << endl;

  // Sobre escritura de una variable Global
  cout << "Nombre de mi proyecto: " << nombrePrograma << endl;

  nombrePrograma = "Diplomado C++";

  cout << "Nombre de mi proyecto actualizado: " << nombrePrograma << endl;

  ID_DriverVersion = ID_DriverVersion + 10;
  cout << "ID_DriverVersion actualizo: " << ID_DriverVersion << endl;


  cout << "Informacion que se encuentra en el header: " << getIDDriverVersion() << endl;


  /* Modulo 4: Arreglos y Vectores */
  // Que es un arreglo: Un conjunto de datos ordenados.
  // Ejemplo: frutas: Pera, manzana, uvas, duraznos . . .
  // Estructura General: Tipo-nombre-Tamano=Contenido
  
  // ARREGLOS UNIDIMENCIONALES

  // Inicializacion 
  string frutas[10] = { "Pera", "Manzana", "Uvas", "Duraznos", "Platano" };
  string colores[] = {"Rojo", "Azul", "Verde"};
  int edades[10];

  float calificaciones[5] = { 6.6f, 5.0f, 8.0f, 7.0f, 10.0f };
  // Modificacion de una posicion en el arreglo
  calificaciones[0] = 9.0f;
  int sizeOfCalificaciones = sizeof(calificaciones)/ sizeof(float);

  cout << "Size in memory from calificaciones: " << sizeof(calificaciones) << endl;
  cout << "Size in memory from float: " << sizeof(float) << endl;
  cout << "Size of calificaciones: " << sizeOfCalificaciones << endl;

  for (int i = 0; i < sizeOfCalificaciones; i++)
  {
    cout << "[" << i << "]" << calificaciones[i] << endl;
  }

  //Arreglos bidimensionales 
  // Inicializacion 1
  string estudiantes1[3][3] = { "Alvaro" ,"Roberto" , "Fernandad" ,
                               "Victor" , "Saul", "Pedro",
                               "Alfredo", "Gabriela", "Mario" };
  // Inicializacion 2
  string estudiantes2[3][3] = {
                                {"Alvaro" ,"Roberto" , "Fernandad"},
                                {"Victor" , "Saul", "Pedro"       },
                                {"Alfredo", "Gabriela", "Mario"   }
                              };
  // Modificacion de un arreglo bidimensional
  estudiantes1[0][2] = "Fernanda";
  string estudianteprueba = estudiantes1[0][2];

  cout << estudianteprueba << endl;


  // VECTORES - Incluir la libria de vector
  // Definir un vector
  vector<string> contrasenas;
  contrasenas.push_back("lsdknhfcs");
  contrasenas.push_back("ELONMusk");
  cout << "Contrasena: " << contrasenas[0] << endl;
  return 0;
}

