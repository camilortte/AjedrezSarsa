#ifndef ESTADO_H
#define ESTADO_H
#include "coordenada.h"

class Estado
{

private:
    int x;
    int y;    
    Coordenada  reyBlanco;
    Coordenada  reyNegro;
    double g;
    double f;
    int accion;
public:
    Estado(int x, int y,int accion,int rB_x, int rB_Y, int rN_x,int rN_y);
    Estado(int x, int y,int accion,Coordenada reyB,Coordenada reyN);
    void setReyBlanco(int x, int y){ reyBlanco.setX(x);reyBlanco.setY(y);}
    void setReyNegro(int x, int y){ reyNegro.setX(x);reyNegro.setY(y);}

    Coordenada getReyBlanco(){return reyBlanco;}
    Coordenada getReyNegro(){return reyNegro;}
    bool compararCoordenadas(int x, int y, int rB_x, int rB_Y, int rN_x,int rN_y);
    bool compararCoordenadas(int x, int y,Coordenada reyB,Coordenada reyN);

    void setG(double g);
    void setAccion(int acc){ this->accion =acc;}
    int getX();
    int getY();
    double getG();
    double getF();
    void setF(double f){ this->f=f;}
    int getAccion(){ return this->accion;}
};
#endif // ESTADO_H
