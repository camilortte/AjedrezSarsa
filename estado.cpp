#include "estado.h"

Estado::Estado(int x, int y, int accion)
{
    this->x=x;
    this->y=y;
    f=g=0;
    this->accion=accion;
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
