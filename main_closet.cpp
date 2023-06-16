/* 
Alan Rojas López 
A01706146
16/06/2023
main closet
*/


#include "prenda.h" /*Se Incluyen los objetos de tipo Prenda; incluidos los objetos Prenda Inferior, Prenda Superior y Calzado.*/
#include "atuendo.h" /* Se Incluyen los objetos de tipo Atuendo, que al final son arreglos de prendas.*/
#include "closet.h" /* Se incluye el objeto de Clóset, dónde se gradarán las prendas y los atuendos. */
#include "iostream"
using namespace std;

int main() {

    Closet *mi_closet = new Closet();
    string colorPS="", tipoPS="", colorPI="", materialPI="", colorC=""; 
    bool estampadoPS=false, estampadoPI=false, estampadoC=false, calcetasC=false;
    int lookPS=0, mangasPS=0, lookPI=0, largoPI=0, lookC=0;

    cout<<"Hola, bienvenido a Clóset Automático. \n";
    cout<<"En esta aplicación podrás organizar tu clóset y tu ropa para organizar tu manera de vestir. \n";
    cout<<"Empezaremos por establecer unas prendas básicas para ir llenando tu clóset. \n";
    cout<<"Ayúdanos a llenar la siguiente información: \n";
    cout<<"¿De qué color quieres tu prenda superior?\n";
    cin>>colorPS;
    cout<<"¿Tiene estampado o algún tipo de bordado enfrente tu Prenda Superior? \t(true / false)\n";
    cin>>estampadoPS;
    cout<<"¿Qué look tiene tu prenda superior?\t(0 informal, 1 semiformal, 2 casual)\n";
    cin>>lookPS;
    cout<<"¿De qué tipo es tu prenda superior? \t(ej. Playera, Suéter, Sudadera, Camiseta.)\n";
    cin>>tipoPS;
    cout<<"¿Qué tipo de mangas tiene tu prenda? \t(0 Sin Mangas, 1 Manga Corta, 2 Manga Larga)\n";
    cin>>mangasPS;
    cout<<"¿De qué color es tu prenda inferior?\n";
    cin>>colorPI;
    cout<<"¿Tiene estampado o algún tipo de bordado tu prenda inferior?\n";
    cin>>estampadoPI;
    cout<<"¿Qué look tiene tu prenda inferior?\t(0 informal, 1 semiformal, 2 casual)\n";
    cin>>lookPI;
    cout<<"¿De qué tipo de material es tu prenda inferior?\n";
    cin>>materialPI;
    cout<<"¿De qué largo es tu prenda inferior?\t(0 minishorts, 1 shorts, 2 pantalones)\n";
    cin>>largoPI;
    cout<<"¿De qué color es tu calzado?\n";
    cin>>colorC;
    cout<<"¿Tiene algún tipo de estampado tu calzado? \t(true / false)\n";
    cin>>estampadoC;
    cout<<"¿Qué look tiene tu calzado?\t(0 informal, 1 semiformal, 2 casual)\n";
    cin>>lookC;
    cout<<"¿Tu calzado requiere de calcetas?\t(true / false)\n";
    cin>>calcetasC;


    Prendas *PrendaSuperior1 = new Prenda_Superior(colorPS, estampadoPS,lookPS, tipoPS, mangasPS); /*Color, estampado, look, tipo, mangas*/
    Prendas *PrendaInferior1 = new Calzado(colorC,estampadoC, lookC, calcetasC); /* Color, estampado, look, calcetas*/
    Prendas *Calzado1 = new Prenda_Inferior(colorPI, estampadoPI, lookPI, materialPI, largoPI); /*Color, estampado, look, material, largo*/


    Atuendo *atuendo1 = new Atuendo(22, "Semi_Formal", 3); /*Temperatura para usar, código, número de prendas.*/
    mi_closet -> agrega_prenda(PrendaSuperior1);
    mi_closet-> agrega_prenda(PrendaInferior1);
    mi_closet -> agrega_prenda(Calzado1);
    atuendo1 -> agregar_prenda(PrendaSuperior1);
    atuendo1 -> agregar_prenda(PrendaInferior1);
    atuendo1 -> agregar_prenda(Calzado1);
    mi_closet -> agrega_atuendo(atuendo1);

    cout<<"Listo, ya te hemos creado un atuendo básico.¡Chécalo, a ver qué te parece.!\n";

    PrendaSuperior1->muestra_prenda();
    PrendaInferior1->muestra_prenda();
    Calzado1->muestra_prenda();

    return 0;
}
