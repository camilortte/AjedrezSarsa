#ifndef SARSA_H
#define SARSA_H
#include <vector>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "coordenada.h"
#include <damablanca.h>
#include <estado.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <set>
#define NUMERO_ESTADOS 60
#define NUMERO_ACCIONES 8

using namespace std;

struct Cmp {
    bool operator()( Estado *s1, Estado *s2 ) const {
        if(s1->getF()<=s2->getF()){
            if(s1->getX()!=s2->getX() || s1->getY()!=s2->getY()  || s1->getAccion()!=s2->getAccion())
                return true;
            else
                return false;
        }else{
            return false;
        }

        //return s1->getF()<s2->getF() && si ? true : false ;
    }
};

class Sarsa
{
private:
    double  Q[NUMERO_ESTADOS][NUMERO_ACCIONES];
    double **Q3;
    Coordenada *BASE_DATOS_MATE[9][12];
    set <Estado*,Cmp>  listaAbierta;
    vector <Coordenada> estados_basados;
    set <set <Estado*,Cmp> >  listaCerrada;
    vector < vector <Estado*> > listaCerrada2;
    Coordenada reyNegro;
    DamaBlanca *damaBlanca;
    Escenario *escenario;
    int indiceEstadoEncontrado;

public:
    Sarsa();
    void aprender();
    Coordenada* obtenerSolucion(Coordenada damaBlanca,Coordenada reyNegro);
    bool obtenerEstados();
    bool comprobarListaCerrada(Estado *estado);
    void insertarEstadosBasados(Coordenada coordenadas);
    bool existeEstado(Estado *estado);
    bool movimientoJugador();



};

#endif // SARSA_H
