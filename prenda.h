/*
Alan Rojas López 
A01706146

09/06/2023

Declaración de clase Prendas

*/
#ifndef PRENDA_H_
#define PRENDA_H_
#include <iostream>

using namespace std;


class Prendas {
    private: 
        string color;
        bool estampado;
        int look; /*0: casual, 1: semi-formal, 2:formal*/
    
    public: 
        Prendas(): color(""), estampado(false), look(0){};
        Prendas(string col, bool est, int lo): color(col), estampado(est), look(lo){}; 

        virtual void muestra_prenda() = 0;  // Declaramos la clase prenda cómo abstracta, ya que eso nos evita ambiguedades. 
        //En este caso, que se generen objetos de Prenda, que no tengan un tipo espacífico: prendas superiores, prendas inferiores, y calzado. 

        string get_color(){
            return color;
        }
        bool get_estampado(){
            return estampado;
        }
        int get_look(){
            return look;
        }

        void set_color(int col){
            color = col;
        }
        void set_estampado(bool est){
            estampado=est;
        }
        void set_look(int lo){
            look = lo;
        }
};

class Prenda_Superior: public Prendas {
    private: 
        string color, tipo; /* Tipo de Prenda Superior: Polo, Camisa, Suéter, etc... */
        bool estampado; 
        int look, mangas; /*0: casual, 1: semi-formal, 2:formal*/ /*0: Sin Mangas, 1: Manga Corta, 2: Manga Larga*/
    public: 
        Prenda_Superior(): Prendas("", false, 0), tipo(""), mangas(0){};
        Prenda_Superior(string col, bool est, int lo, string tip, int man): color(col), estampado(est), look(lo), tipo(tip), mangas(man){};

        string get_tipo() {
            return tipo;
        }
        int get_mangas() {
            return mangas;
        }

        void set_tipo(string tip) {
            tipo = tip;
        }
        void set_mangas(int man){
            mangas=man;
        }
        void muestra_prenda(){
            cout<<"Prenda Superior: \n""\tColor: "<<color<<"\tTipo: "<<tipo<<"\tEstampado:"<<estampado<<"\tLook: "<<look<<"\tMangas: "<<mangas<<"\n";
        }
};

class Prenda_Inferior: public Prendas {
    private:
        string color, material; /* Material: Mesclilla, Pants, etc...*/
        bool estampado;
        int look, largo; /*0: casual, 1: semi-formal, 2:formal*/   /* 0: Mini-shorts, 1: Shorts, 2: Pantalones*/
    
    public:
        Prenda_Inferior(): Prendas("", false, 0), material(""), largo(0){};
        Prenda_Inferior(string col, bool est, int lo, string mat, int lar): color(col), estampado(est), look(lo), material(mat), largo(lar){};
 
        string get_material(){
            return material;
        }
        int get_largo(){
            return largo;
        }

        void set_material(string mat) {
            material= mat;
        }
        void set_largo(int lar){
            largo=lar;
        }
        void muestra_prenda(){
            cout<<"Prenda Inferior: \n""\tColor: "<<color<<"\tMaterial: "<<material<<"\tEstampado: "<<estampado<<"\tLook: "<<look<<"\tLargo: "<<largo<<"\n";
        }
};

class Calzado: public Prendas {
    private: 
        string color;
        bool estampado, calcetas;
        int look; /*0: casual, 1: semi-formal, 2:formal*/ 

    public: 
        Calzado(): Prendas("", false, 0), calcetas(false){};
        Calzado(string col, bool est, int lo, bool cal): color(col), estampado(est), look(lo), calcetas(cal){};

        bool get_calcetas() {
            return calcetas;
        }

        void set_calcetas(bool cal) {
            calcetas = cal;
        }
        void muestra_prenda(){
            cout<<"Calzado: \n""\tColor: "<<color<<"Estampado: "<<estampado<<"\tCalcetas: "<<calcetas<<"\tLook: "<<look<<"\n";
        }
};


#endif 
