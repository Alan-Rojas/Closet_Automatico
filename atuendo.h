/*
Alan Rojas López 
A01706146


16/06/2023

Declaración de clase Atuendo

*/


#ifndef ATUENDO_H_
#define ATUENDO_H_

#include <iostream>
#include "prenda.h"
using namespace std;

class Atuendo {
    private: 
        int temperatura, no_prendas; /* Temperatura en la que portarías dicho atuendo, para saber, dependiendo de la temperatura, qué atuendos usar.*/
        string codigo;
        Prendas *atuendo[4];

    public: 
    Atuendo(): temperatura(0), codigo(""), no_prendas(0){};
    Atuendo(int temp, string cod, int no_p): temperatura(temp), codigo(cod), no_prendas(no_p){ atuendo[no_p];};



    int get_temperatura(){
        return temperatura;
    }
    string get_codigo() {
        return codigo;
    }
    int get_no_prendas() {
        return no_prendas;
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

    void agregar_prenda(Prendas *x){
        atuendo[no_prendas]=x;
        no_prendas++;
    }
    void deshechar_prenda(Prendas *x){
        delete x;
        no_prendas--;
    }

}; 


#endif
