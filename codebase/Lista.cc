#include <Lista.hh>


Lista::Lista()
{
	header = creaNodoHeader();
}

nodo_h* Lista::creaNodoHeader()
{
	nodo_h* p_Header = nullptr;
	
	p_Header = new nodo_h();
	
	p_Header->next = nullptr;
	p_Header->last = nullptr;
	p_Header->largoLista = 0;

	return(p_Header);
}

nodo_s* Lista::creaNodo(int32_t k)
{
	nodo_s* p_nuevoNodo = nullptr;
	
	p_nuevoNodo = new nodo_s();
	
	p_nuevoNodo->key = k;
	p_nuevoNodo->next = nullptr;

	return(p_nuevoNodo);
}

void Lista::insertarNodo(nodo_s* n)
{
	if(header->next == nullptr){ // Significa lista vacía
		header->next = n;
		header->last = n;
	}
	else{
		
		nodo_s* nodoFinal  = nullptr;

		/*
		// Caso recorrer la lista para insertar el nodo nuevo
		nodo_s* nodoActual = header->next;
		while(nodoActual->next != nullptr){
			nodoActual = nodoActual->next;	
		}
		// El nodo final es el ultimo nodo que se revisó
		nodoFinal = nodoActual;
		*/


		//Caso header apunta al nodo final para insertar el nodo nuevo
		nodoFinal = header->last;

		
		
		

		nodoFinal->next = n;
		header->last = n;

	}
	
	header->largoLista++;
}

std::string Lista:: mostrar()
{
	std::string listaStr;

	if(header->next == nullptr){ //la lista esta vacía
		listaStr = "";
	}
	else{
		std::stringstream out;
		nodo_s* nodoActual = header->next;
		while(nodoActual != nullptr){
			out << "key:" << nodoActual->key << "\n";
			nodoActual = nodoActual->next;	
		}
		listaStr = out.str();
	}

	return(listaStr);
}

int  Lista::largo()
{
	return(header->largoLista);
}