/*
Alan Rojas López 
A01706146

26/05/2023

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
        int look;
    
    public: 
        Prendas(): color(""), estampado(false), look(0){};
        Prendas(string col, bool est, int lo): color(col), estampado(est), look(lo){}; 

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
        string color, tipo;
        bool estampado;
        int look, mangas;

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
};

class Prenda_Inferior: public Prendas {
    private:
        string color, material;
        bool estampado;
        int look, largo;
    
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
};

class Calzado: public Prendas {
    private: 
        string color;
        bool estampado, calcetas;
        int look;

    public: 
        Calzado(): Prendas("", false, 0), calcetas(false){};
        Calzado(string col, bool est, int lo, bool cal): color(col), estampado(est), look(lo), calcetas(cal){};

        bool get_calcetas() {
            return calcetas;
        }

        void set_calcetas(bool cal) {
            calcetas = cal;
        }
};


#endif 