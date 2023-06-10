/*
Alan Rojas López 
A01706146

26/05/2023

Declaración de clase closet

*/


#ifndef CLOSET_H_
#define CLOSET_H_

#include <iostream>
#include "prenda.h"
#include "atuendo.h"

using namespace std;

class Closet {
    private: 
        int numero_prendas, numero_atuendos;
        Prendas *prendas[0];
        Atuendo *atuendos[0];
    public: 
        Closet (): numero_prendas(0) {
            }; 
        
        Prendas *get_prenda(int n){
            return prendas[n];
        }
        Atuendo get_atuendos(int n) {
            return *atuendos[n];
        }

        void agrega_prenda(Prendas *x){
            prendas[numero_prendas]=x;
            numero_prendas++;
        }
        void agrega_atuendo(Atuendo *x) {
            atuendos[numero_atuendos]=x;
            numero_atuendos++;

        }
        void deshecha_prenda(Prendas *x) {
            delete x;
            numero_prendas--;
        }
        void deshecha_atuendo(Atuendo *x){
            delete x;
            numero_atuendos--;
        }
};

#endif
