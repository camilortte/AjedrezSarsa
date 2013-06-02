#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include "coordenada.h"

#define TABLERO_FILAS 8
#define TABLERO_COLUMNAS 8

using namespace std;

class Escenario
{
private:
     vector < vector <string> > mundo_ajedrez;
     vector < vector <int> > mundo_ajedrez_datos;
     Coordenada coo_damaBlanca;
     Coordenada coo_reyNegro;
     Coordenada coo_reyBlanco;

public:
     //Setters
     void setDamaBlanca(int x, int y ){
         this->mundo_ajedrez[coo_damaBlanca.getX()][coo_damaBlanca.getY()]="--";
         this->coo_damaBlanca.setXY(x,y);
         this->mundo_ajedrez[coo_damaBlanca.getX()][coo_damaBlanca.getY()]="DB";
         //setReyNegro(getReyNegro().getX(),getReyNegro().getY());
     }

     void setReyNegro(int x, int y ){
         //cout<<"Se ajusto R
         this->mundo_ajedrez[coo_reyNegro.getX()][coo_reyNegro.getY()]="--";
         this->coo_reyNegro.setXY(x,y);
         this->mundo_ajedrez[coo_reyNegro.getX()][coo_reyNegro.getY()]="RN";

         //this->imprimirEscenario();
     }



     //Setters
     Coordenada getDamaBlanca(){ return this->coo_damaBlanca; }
     Coordenada getReyBlanco(){ return this->coo_reyBlanco; }
     Coordenada getReyNegro(){ return this->coo_reyNegro; }

     void imprimirDatos();
     void imprimirEscenario();


    //Escenario por defecro
    Escenario();
};

#endif // ESCENARIO_H
