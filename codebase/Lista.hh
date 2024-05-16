#pragma once

#include <sstream>

struct nodo_s {
	int32_t key;
	struct nodo_s* next;
};

struct nodo_h {
	struct nodo_s* next;
	struct nodo_s* last;
	int    largoLista;
};

class Lista {
private:
	nodo_h* header = nullptr;

public:
	Lista();
	nodo_h* creaNodoHeader();
	static nodo_s* creaNodo(int32_t k);
	void    insertarNodo(nodo_s* n);
	std::string  mostrar();
	int     largo();
};