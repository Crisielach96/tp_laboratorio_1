#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Funcion para pedir numero
 *
 * \param El mensaje a mostrar
 * \param El numero que se va a almacenar
 * \return El numero ingresado
 *
 */
int pedirNumero(char mensaje[]);


/** \brief Funcion de suma
 *
 * \param El primer numero a sumar
 * \param El segundo numero a sumar
 * \return El resultado de la suma
 *
 */
int suma(int a, int b);


/** \brief Funcion para restar
 *
 * \param Primer numero a restar
 * \param Segundo numero a restar
 * \return Resultado de la resta
 *
 */
int resta(int a, int b);


/** \brief Funcion para dividir
 *
 * \param Dividendo
 * \param Divisor
 * \return Resultado de la division
 *
 */
float division(int a, int b);

/** \brief Funcion para multiplicar
 *
 * \param Numero a multiplicar
 * \param Multiplicador
 * \return Resultado de la multiplicacion
 *
 */
int multiplicacion(int a , int b);

/** \brief Funcion para factorizar un numero
 *
 * \param Numero al que se le va a calcular el factor
 * \return El factro del numero ingresado
 *
 */
int factorial(int a);
#endif // FUNCIONES_H_INCLUDED
