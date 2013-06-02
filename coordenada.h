#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada
{
private:
    int x;
    int y;
public:
    Coordenada(int x, int y);
    Coordenada();
    void setX(int x){ this->x=x; }
    void setY(int y){ this->y=y;}
    int getX(){ return x; }
    int getY(){ return y; }
    void setXY(int x, int y){ this->x=x; this->y=y;}
};

#endif // COORDENADA_H
