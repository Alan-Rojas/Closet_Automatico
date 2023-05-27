/*
Alan Rojas López 
A01706146

26/05/2023

Declaración de clase Atuendo

*/


#ifndef ATUENDO_H_
#define ATUENDO_H_

#include <iostream>
#include "prenda.h"
using namespace std;

class Atuendo {
    private: 
        int temperatura, no_prendas;
        string codigo;
        Prendas prenda_ancla;
        Prendas atuendo[5];

    public: 
    Atuendo(): temperatura(0), codigo(""), prenda_ancla(), no_prendas(0), atuendo(){};
    Atuendo(int temp, string cod, Prendas pa, int no_p, Prendas at[]): temperatura(temp), codigo(cod), prenda_ancla(pa), no_prendas(no_p), atuendo(){};

    int get_tmperatura(){
        return temperatura;
    }
    string get_codigo() {
        return codigo;
    }
    int get_no_prendas() {
        return no_prendas;
    }
    Prendas get_prenda_ancla() {
        return prenda_ancla;
    }

    void set_temperatura(int tem) {
        temperatura= tem;
    }
    void set_codigo(string cod) {
        codigo = cod;
    }
    void set_no_prendas(int no_p){
        no_prendas = no_p;
    }
    void set_prenda_ancla(Prendas pa){
        prenda_ancla = pa;
    }

    void agregar_prenda(string col, bool est, int lo){
        atuendo.append(Prendas(col, est, lo));
        no_prendas++;
    }
    void deshechar_prenda(Prendas x){
        atuendo.pop(x);
        no_prendas--;
    }
}; // No entiendo muy bien cómo puedo hacer que esto funcione. Básicamente debería de ser capaz de agregar la prenda al arreglo de prendas. Pero me marca que el error está en la declaración del arreglo en sí, pero no comprendo el cómo solucionarlo.


#endif


