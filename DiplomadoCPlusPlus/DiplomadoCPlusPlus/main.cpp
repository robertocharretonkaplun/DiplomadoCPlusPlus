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
  //bool laPuertaEstaAbierta = false;
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
  string colores[] = { "Rojo", "Azul", "Verde" };
  int edades[10];

  float calificaciones[5] = { 6.6f, 5.0f, 8.0f, 7.0f, 10.0f };
  // Modificacion de una posicion en el arreglo
  calificaciones[0] = 9.0f;
  int sizeOfCalificaciones = sizeof(calificaciones) / sizeof(float);

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
  contrasenas.push_back("Fernanda"); // 0
  contrasenas.push_back("Gaby");     // 1
  contrasenas.push_back("Oswaldo");  // Se removio a oswaldo

  for (int i = 0; i < contrasenas.size(); i++)
  {
    cout << "Contrasena: " << contrasenas[i] << endl;

  }

  contrasenas.pop_back();
  contrasenas.push_back("Alvaro"); // 2
  contrasenas.push_back("Mario");  // 3
  contrasenas.push_back("Victor");  // 4
  contrasenas.push_back("Roberto"); // 5
  for (int i = 0; i < contrasenas.size(); i++)
  {
    cout << "Contrasena: " << contrasenas[i] << endl;

  }

  int datosAConsultar = 5;
  if (contrasenas.size() > datosAConsultar)
  {
    cout << "Posicion 5: " << contrasenas[5] << endl;
  }

  // 
  //cout << "Elemento Posicion 0: " << contrasenas[6] << endl;
 // cout << "Elemento Posicion 0: " << contrasenas.at(6) << endl;

  vector<string>::iterator iter;
  iter = contrasenas.begin();
  //string tempPassword = contrasenas[0];
  vector<string>::iterator tempPassword = contrasenas.begin();

  int jovenes[] = { 1,2,4 };

  vector<int> adultos;
  adultos.reserve(10000);
  adultos.resize(10000);
  adultos.clear();
  /*
  string nombre2;
  cout << "Ingresa tu nombre: ";
  cin >> nombre2;


  cout << "Tu nombre es: " << nombre2 << endl;

  int a;
  int b;
  int r;
  cout << "Ingresa el valor 1: ";
  cin >> a;
  cout << "Ingresa el valor 2: ";
  cin >> b;
  r = a + b;
  cout << "El resultado de la suma de " << a << "+" << b << " es: " << r << endl;
  */

  /* MODULO 5: OPERADORES */
  cout << "---- OPERADORES ----" << endl;

  // Operador: Es un elemento del programa que se aplica a uno o verios operandos 
  // en una instruccion.

  // OPERADORES DE ASIGNACION: Permiten la asignacion de  un valor a una variable.

  // Operador de asignacion basica: '='. Ejemplo: X = 6; Resultado es X vale 6.
  int X = 6;
  cout << "Resultado de Asignacion Asignacion: " << X << endl;
  // Operador de asignacion producto: '*='. Ejemplo: X *= 5; Resultado es X vale 30.
  X *= 6;
  cout << "Resultado de Asignacion Producto: " << X << endl;
  // Operador de asignacion Division: '/=/. Ejemplo X /= 2; Resultado es X vale 18.
  X /= 2;
  cout << "Resultado de Asignacion Division: " << X << endl;
  // Operador de Asignacion Suma: '+='. Ejemplo: X+= 4; Resultado es X vale 22
  X += 4;
  cout << "Resultado de Asignacion Suma: " << X << endl;
  // Operador de Asignacion Resta: '-='. Ejemplo: X-= 2; Resultado es X vale 20 
  X -= 2;
  cout << "Resultado de Asignacion Resta: " << X << endl;
  // Operador de Asignacion Modulo: '%='. Ejemplo: X %= 5; Resultado es X vale 1 
  X = 6;
  X %= 5;
  cout << "Resultado de Asignacion Modulo: " << X << endl;

  // OPERADORES ARITMETICOS: Se utilizan para calculos y operaciones con numeros
  // reales y punteros.
  int Y = 0;

  // Operador de Suma: '+'. Ejemplo; Y = 5 + 3; Resultado Y vale 8
  Y = 5 + 3;
  cout << "Resultado Aritmetico Suma: " << Y << endl;
  // Operador de Restas: '-'. Ejemplo; Y = 5 - 3; Resultado Y vale 2
  Y = 5 - 3;
  cout << "Resultado Aritmetico Resta: " << Y << endl;
  // Operador de Multiplicacion: '*'. Ejemplo; Y = 5 * 3; Resultado Y vale 15
  Y = 5 * 3;
  cout << "Resultado Aritmetico Multiplicacion: " << Y << endl;
  // Operador de Division: '/'. Ejemplo; Y = 5 / 3; Resultado Y vale 1
  Y = 5 / 3;
  cout << "Resultado Aritmetico Division: " << Y << endl;
  // Operador de Modulo: '%'. Ejemplo; Y = 5 % 2; Resultado Y vale 1
  Y = 5 % 2;
  cout << "Resultado Aritmetico Modulo: " << Y << endl;
  // Operador de Incremento: '++'. Ejemplo; Y = 5, Y++; Resultado Y vale 6
  Y = 5;
  Y++;
  cout << "Resultado Aritmetico Incremento: " << Y << endl;
  // Operador de Decremento: '--'. Ejemplo; Y = 5, Y--; Resultado Y vale 4
  Y = 5;
  Y--;
  cout << "Resultado Aritmetico Decremento: " << Y << endl;

  // OPERADORES RELACIONALES: Se les denomina operadores binarios logicos y de
  // comparacion, normalmente, se utilizan para comprobar la veracidad o falsedad
  // de ciertas condiciones.

  // Operador relacional igualacion: '=='l Ejemplo:
  int C = 5;
  int D = 6;
  if (C == D)
  {
    cout << "C es igual que D" << endl;
  }
  else
  {
    cout << "C no es igual que D" << endl;
  }

  // Operador relacional Menor: '<'; Ejemplo:
  if (C < D)
  {
    cout << "C es menor que D" << endl;
  }
  else 
  {
    cout << "C no es menor que D" << endl;
  }
  // Operador relacional Mayor: '>'; Ejemplo:
  if (C > D)
  {
    cout << "C es mayor que D" << endl;
  }
  else
  {
    cout << "C no es mayor que D" << endl;
  }
  // Operador relacional Mayor o igual: '>='; Ejemplo:
  if (C >= D)
  {
    cout << "C es mayor o igual que D" << endl;
  }
  else
  {
    cout << "C no es mayor o igual que D" << endl;
  }
  // Operador relacional Menor o igual: '<='; Ejemplo:
  if (C <= D)
  {
    cout << "C es menor o igual que D" << endl;
  }
  else
  {
    cout << "C no es menor o igual que D" << endl;
  }
  if (C != D)
  {
    cout << "C es diferente que D" << endl;
  }
  else
  {
    cout << "C no es diferente que D" << endl;
  }


  // CONDICIONALES: Son porciones de codigo que se encargan de validar una comparacion
  // de datos
  // Ejemplo
  int val = 3;
  if (val == 2)
  {
    cout << "Wow 2 si es 2" << endl;
  }
  else 
  {
    cout << "Naaa " << val << " no es igual a 2" << endl;
  }

  // Accion: Roberto tu mama te manda por las tortillas.
  // Reaccion: Roberto va a ir por las tortillas.
  // Conclusion: Roberto fue por las tortillas.

  // Accion: Roberto tu mama te manda por las tortillas si tienes dinero.
  // Reaccion: Si y solo si Roberto tiene dinero para las tortillas el ira por
  // tortillas.
  // Conclusion 1: Si Roberto tuvo dinero, el fue por tillas.
  // Conclusion 2: Si Roberto no tuvo dinero, el no fue por las tortillas.

  // Accion: Roberto, si tu mama te manda por las tortilla y tienes dinero,
  // vas a ir a preguntar si tiene tortillas, si tienen tortillas compraras
  // un kilo.
  // Condicion 1: Si mi mama me manda por las tortillas.
  // Condicion 2: Tengo dinero?.
  // Condicion 3: Mi mama me manda por las tortillas y tengo dinero.
  // Accion: Pregruntar si en la tortilleria tienen tortillas?
  // Condicion 4: Mi mama me manda por las tortillas, tengo dinero, hay tortillas.
  // Conclusion: Voy a ir a la tortilleria si mi mama me manda y tengo dinero, 
  // preguntando si tiene tortillas y asi poder comprar el kilo de tortillas.
  bool MeMandaronPorTortillas = true;
  bool tengoDinero = true;
  bool voyAIrPorTortillas = false;
  bool TienenTortillasEnLaTortilleria= true;
  bool tengoLasTortillas = false;

  if (MeMandaronPorTortillas == true)
  {
    cout << "Me mandaron por las tortillas :)" << endl;
    if (tengoDinero == true)
    {
      cout << "Tengo Dinero :)" << endl;
      voyAIrPorTortillas = true;
      if (TienenTortillasEnLaTortilleria == true)
      {
        cout << "Tienen tortillas en la tortilleria :)" << endl;
        if (TienenTortillasEnLaTortilleria == true && tengoDinero == true )
        {
          cout << "Comprare mis tortillas:)" << endl;
          tengoLasTortillas = true;
        }
        else {
          cout << "No habia tortillas o dinero :(" << endl;
        }
      }
      else {
        cout << "No tienen tortillas en la tortilleria :(" << endl;
      }
    }
    else {
      cout << "No tengo Dinero :(" << endl;
      voyAIrPorTortillas = false;
    }
  }
  else
  {
    cout << "No me mandaron por las tortillas :(" << endl;
  }

  if (tengoLasTortillas == true)
  {
    cout << "YEY tengo mis tortillas" << endl;
  }
  else {
    cout << "Rayos no tengo mis tortillas" << endl;
  }
  system("cls");

  // OPERADORES LOGICOS: Producen un resultado de verdero o falseo (Booleano)
  bool laPuertaEstaAbierta = false;
  bool tengoLlave = false;


  // La puerta esta cerrada y tenemos la llave para abrirla
  laPuertaEstaAbierta = false;
  tengoLlave = true;

  // Operador Logico AND: '&&'. Ejemplo: A == true && B == false; Resultado es verdadero.
  if (laPuertaEstaAbierta == false && tengoLlave == true)
  {
    cout << "Pude abrir la puerta" << endl;
  }

  laPuertaEstaAbierta = true;
  // Operador Logico OR: '||'. Ejemplo: A == true || B == true; Resultado es que es verdadero si alguno es true
  if (laPuertaEstaAbierta == true || tengoLlave == false)
  {
    cout << "Pude abrir la puerta sin importar que no tengo la llave." << endl;
  }


  tengoLlave = false;
  // Operador Logico Negacion: '!'. Ejemplo: !A; Resultado es verdadero si A no es true
  if (!tengoLlave)
  {
    cout << "No tengo la llave y por lo tanto no puedo entrar al cuarto" << endl;
  }
  else {
    cout << "Tengo la llave y por lo tanto puedo entrar al cuarto" << endl;
  }


  system("cls");
  // PROYECTO 1: Calculadora
  int A;
  int B;
  int opcion;

  // Requerimientos
  // 1) Menu por el cual navegar a las opciones de la calculadora
  // 2) Mostrar las cuatro operaciones principales
  //   1. Suma
  //   2. Resta
  //   3. Multiplicacion
  //   4. Division
  // 3) Historial de resultados - Continuar cuando veamos el modulo 6
  cout << "MENU" << endl;
  cout << "Opciones" << endl;
  cout << "1. Suma" << endl;
  cout << "2. Resta" << endl;
  cout << "3. Multiplicacion" << endl;
  cout << "4. Division" << endl;
  cout << "Ingresa la opcion deseada: ";
  cin >> opcion;

  if (opcion == 1)
  {
    // Ingresa el primer valor de la suma
    // Ingresa el segundo valor de la suma
    // Imprimir el resultado de nuestra operacion
  }
  return 0;
}

