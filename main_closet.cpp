/* 
Alan Rojas López 
A01706146
31/05/2023
main closet
*/


#include "prenda.h" /*Se Incluyen los objetos de tipo Prenda; incluidos los objetos Prenda Inferior, Prenda Superior y Calzado.*/
#include "atuendo.h" /* Se Incluyen los objetos de tipo Atuendo, que al final son arreglos de prendas.*/
#include "closet.h" /* Se incluye el objeto de Clóset, dónde se gradarán las prendas y los atuendos. */
#include "iostream"
using namespace std;

int main() {

    Closet *mi_closet = new Closet();

    cout<<"Hola, bienvenido a Clóset Automático. \n";
    cout<<"En esta aplicación podrás organizar tu clóset y tu ropa para organizar tu manera de vestir. \n";
    cout<<"Empezaremos por establecer unas prendas básicas para ir llenando tu clóset. \n";

    Prendas *playera_blanca = new Prenda_Superior("Blanco", false, 0, "T-shirt",1); /*Color, estampado, look, tipo, mangas*/
    Prendas *tennis_blancos = new Calzado("Blanco",false, 1, true); /* Color, estampado, look, calcetas*/
    Prendas *jeans_claros = new Prenda_Inferior("Azul Claro", false, 1, "Mesclilla", 2); /*Color, estampado, look, material, largo*/


    Atuendo *blanco_jeans = new Atuendo(22, "Semi_Formal", 3); /*Temperatura para usar, código, número de prendas.*/
    mi_closet -> agrega_prenda(playera_blanca);
    mi_closet-> agrega_prenda(tennis_blancos);
    mi_closet -> agrega_prenda(jeans_claros);
    blanco_jeans -> agregar_prenda(playera_blanca);
    blanco_jeans -> agregar_prenda(tennis_blancos);
    blanco_jeans -> agregar_prenda(jeans_claros);
    mi_closet -> agrega_atuendo(blanco_jeans);

    cout<<"Listo, ya te hemos creado un atuendo básico.¡Chécalo, a ver qué te parece.!\n";
    blanco_jeans->muestra_atuendo();
    return 0;
}
