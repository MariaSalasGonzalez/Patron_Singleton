//
// Created by Ali Gonzalez on 16/8/20.
//

#include "Singleton.h"



void destroySingleton() {
    if (Singleton::getInstancia() != NULL)
        free(Singleton::instancia); // FUNCION DE C
    cout << "................Singleton Destruido................" << endl;
}

Singleton::~Singleton()
{
    cout << "Singleton eliminado." << endl;
    atexit(destroySingleton); // FUNCION DE C
}

void Singleton::setValor(int valor) {
    this->valor = valor;
}

int Singleton::getValor() {
    return valor;
}


Singleton* Singleton::getInstancia() { //Este metodo devuelve el singleton
    if (instancia == NULL)
    {
        instancia = new Singleton; // RESERVAR MEMORIA PARA INSTANCIA
    }
    return instancia;
}
//inicializar siempre las variables static
Singleton* Singleton::instancia = NULL; // LA PRIMERA INSTANCIA DEL SINGLETON VA A LIMPIAR EL PUNTERO
