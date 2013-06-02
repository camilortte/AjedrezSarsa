#include "estado.h"
#include <iostream>

using namespace std;

Estado::Estado(int x, int y, int accion, int rB_x, int rB_Y, int rN_x, int rN_y)
{
    this->x=x;
    this->y=y;
    reyBlanco.setXY(rB_x,rB_Y);
    reyNegro.setXY(rN_x,rN_y);
    f=g=0;
    this->accion=accion;
}

Estado::Estado(int x, int y, int accion, Coordenada reyB, Coordenada reyN)
{
    this->x=x;
    this->y=y;
    this->reyBlanco.setXY(reyB.getX(),reyB.getY());
    this->reyNegro.setXY(reyN.getX(),reyN.getY());
    f=g=0;
    this->accion=accion;
}

bool Estado::compararCoordenadas(int x, int y, int rB_x, int rB_Y, int rN_x, int rN_y)
{
    if( (this->x==x) && (this->y=y) && (reyBlanco.getX()==rB_x) && (reyBlanco.getY()==rB_Y) &&  (reyNegro.getX()==rN_x) && (reyNegro.getY()==rN_y)){
        return true;
    }else{
        return false;
    }
}

bool Estado::compararCoordenadas(int x, int y, Coordenada reyB, Coordenada reyN)
{
    //cout<<" MIS COORDENADAS SON: "<<this->x<<"  "<<this->y<<endl;
    if( (this->x==x) && (this->y==y) && (reyBlanco.getX()==reyB.getX()) && (reyBlanco.getY()==reyB.getY()) &&
            (reyNegro.getX()==reyN.getX()) && (reyNegro.getY()==reyN.getY())){
        //cout<<" MIS COORDENADAS devueltas SON: "<<this->x<<"  "<<this->y<<endl;
        return true;
    }else{
        return false;
    }
}



void Estado::setG(double g)
{
    f=g;
    this->g=g;
}



int Estado::getX()
{
    return this->x;
}

int Estado::getY()
{
    return this->y;
}


double Estado::getG()
{
    return this->g;
}

double Estado::getF()
{
    return this->f;
}
