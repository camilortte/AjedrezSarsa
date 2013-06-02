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
     }

     void setReyNegro(int x, int y ){
         //cout<<"Se ajusto R
         this->mundo_ajedrez[coo_reyNegro.getX()][coo_reyNegro.getY()]="--";
         this->coo_reyNegro.setXY(x,y);
         this->mundo_ajedrez[coo_reyNegro.getX()][coo_reyNegro.getY()]="RN";         
     }


     void setReyBlanco(int x, int y ){
         //cout<<"Se ajusto R
         cout<<"SE MODIFICARON LAS COOORDENADAS DE REY BLANOC"<<endl;
         this->mundo_ajedrez[coo_reyBlanco.getX()][coo_reyBlanco.getY()]="--";
         this->coo_reyBlanco.setXY(x,y);
         this->mundo_ajedrez[coo_reyBlanco.getX()][coo_reyBlanco.getY()]="RBB";
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
