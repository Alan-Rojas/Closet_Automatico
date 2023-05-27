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
        Prendas prendas_c[0];
        Atuendo atuendos[0];
    public: 
        Prendas get_prendas_c(int n) {
            return prendas_c[n];
        }
        Atuendo get_atuendos(int n) {
            return atuendos[n];
        }
        void set_prendas_c(Prendas x, int n) {
            prendas_c[n] = x;
        }
        void set_atuendos(Atuendo x, int n) {
            atuendos[n]= x;
        }

        void agrega_prenda(Prendas x){
            prendas_c.append(x);
        }
        void agrega_atuendo(Atuendo x) {
            atuendos.append(x);

        }
        void deshecha_prenda(Prendas x) {
            Prendas *ptrx = &x;
            prendas_c.pop(ptrx);
        }
        void deshecha_atuendo(Atuendo x){
            Atuendo *ptrx =&x;
            atuendos.pop(ptrx);
        }
};

#endif