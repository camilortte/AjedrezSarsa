#ifndef ESTADO_H
#define ESTADO_H

class Estado
{

private:
    int x;
    int y;
    double g;
    double f;
    int accion;
public:
    Estado(int x, int y,int accion);

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
