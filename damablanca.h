#ifndef DAMABLANCA_H
#define DAMABLANCA_H
#include <vector>
#include "escenario.h"
#include "coordenada.h"
#include "estado.h"
#define TABLERO_FILAS 8
#define TABLERO_COLUMNAS 8

using namespace std;

class DamaBlanca
{
private:
    vector <Estado> listaAbierta;
    vector <Estado> listaCerrada;
    Coordenada coordenadas;
    Escenario *escenario;
    vector < Coordenada > estados_movimiento;
    vector < Coordenada > todosEstados;
    int reyBlancoX;
    int reyBlancoY;

public:
    DamaBlanca(Escenario *escenario);
    /*void setEscenario(Escenario *escenario){
        this->escenario=escenario;
        reyBlancoX=escenario->getReyBlanco().getX();
        reyBlancoY=escenario->getReyBlanco().getY();
    }*/
    //Escenario getEscenario(){ return this->escenario; }
    bool moverArriba(int cantidad);
    bool moberAbajo(int cantidad);
    bool moverDerecha(int cantidad);
    bool moverIzquierda(int cantidad);
    bool moverDiagArribaDerecha(int cantidad);
    bool moverDiagAbajoDerecha(int cantidad);
    bool moverDiagArribaIzquierda(int cantidad);
    bool moverDiagAbajoIzquierda(int cantidad);
    //vector<Estado> obtenerEstados();
    Coordenada getCoordenadas(){ return this->coordenadas;}
    void setCoordenadas(int x, int y){this->coordenadas.setXY(x,y);}


};

#endif // DAMABLANCA_H
