#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

char *validarNombre();

/**
 *  Ingresa un dato
 * \param La estructura a la que nos referimos
 * \return Los datos de un persona
 */
void alta(EPersona lista[]);

/**
 *  Ordena los datos ingresados
 * \param La estructura a la que nos referimos
 * \param Busca dentro de los datos ingresados
 * \return los parametros ordenados
 */
void ordenarNombres(EPersona lista[],int cant);

/**
 *  Muetra un lista con los datos iingresados
 * \param La estructura a la que nos referimos
 * \param Busca dentro de los datos ingresados
 * \return Grafica una tabla ordenada alfabeticamente
 */
void mostrarPersonas(EPersona persona[], int cant);

void variablesCero(EPersona lista[], int i);

void inicializarVariables(EPersona lista[]);

/**
 *  Borra algun dato ingresado
 * \param La estructura a la que nos referimos
 * \param Busca dentro de los datos ingresados
 * \return un lugar vacio para un nuevo dato
 */
void baja(EPersona lista[], int cant);

/**
 *  Grafica una tabla segun la edad
 * \param La estructura a la que nos referimos
 * \param Busca dentro de los datos ingresados
 * \return Grafico de edades
 */
void graficoEdades(EPersona lista[],int cant);

#endif // FUNCIONES_H_INCLUDED
