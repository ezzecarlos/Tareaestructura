/**********************************************************************************************
 *
 * Asignatura: "Estructuras de Datos" - ICI313
 * Ejemplo de estructura lista enlazada dinámica con header.
 * Implementada con POO
 * El header tiene un enlace la primer y último elemento de la lista
 **********************************************************************************************/

#include <iostream>
#include <string>

#include <Timer.hpp>
#include <Lista.hh>

int main(int argc, char* argv[])
{	
	Lista lista01;
	
	//Valor por omisión
	int tNodos = 1000;

	if(argc == 2){
		tNodos = std::atoi(argv[1]);
	}

	Timer<std::chrono::milliseconds> timer1;

	timer1.start();
	for(int idNodo=0; idNodo < tNodos; idNodo++){
		nodo_s* nodoNuevo = Lista::creaNodo(idNodo);
		lista01.insertarNodo( nodoNuevo );
	}
	timer1.stop();
	double tTranscurrido = timer1.elapsed();
	
	tiempoLog << "Tiempo transcurrido inserción de " << tNodos << ":" << tTranscurrido << "ms\n";

	
	return EXIT_SUCCESS;
}























