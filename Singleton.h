//
// Created by Ali Gonzalez on 16/8/20.
//

#ifndef PATRON_SINGLETON_SIGLETON_H
#define PATRON_SINGLETON_SIGLETON_H


#include<iostream>
#include <stdlib.h>

using namespace std;


class Singleton {
private:
    int valor;//lo que guarda el singleton
    static Singleton* instancia;//se crea un atributo de la misma clase

    Singleton(int  val = 0) {//constructor privado
        valor = val;
    }

public:

    virtual ~Singleton();
    void setValor(int valor);
    int getValor();
    static Singleton* getInstancia();
    friend void destroySingleton();
};

#endif //PATRON_SINGLETON_SIGLETON_H
