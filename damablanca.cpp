#include "damablanca.h"
#include <stdlib.h>
#include <math.h>

DamaBlanca::DamaBlanca(Escenario *escenario)
{
    //coordenadas.setXY(x,y);
    this->escenario=escenario;
    coordenadas=escenario->getDamaBlanca();
    reyBlancoX=escenario->getReyBlanco().getX();
    reyBlancoY=escenario->getReyBlanco().getY();
}

bool DamaBlanca::moverArriba(int cantidad)
{
     if (cantidad>0){
        int mov_y=coordenadas.getY();
        int mov_x=coordenadas.getX()-cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x>=0){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                    //cout<<"MOVIMIENTO ARRIBA"<<endl;
                    coordenadas.setX(mov_x);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}else{
            //     cout<<"EXITENTE MOVIMIENTO YA QUE ES IGUAL A REYNEGRO"<<endl;
            //}
        }else{
            //cout<<" SUpera los limites: x="<<mov_x<<" MovY="<<mov_y<<endl;
            //cout<<" ORIGINAL X="<<coordenadas.getX()<<"  Y="<<coordenadas.getY()<<endl;
        }
     }
    return false;
}

bool DamaBlanca::moberAbajo(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY();
        int mov_x=coordenadas.getX()+cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x<TABLERO_FILAS){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                    //cout<<"MOVIMIENTO ABAJO"<<endl;
                    coordenadas.setX(mov_x);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}else{
            //    cout<<"TIENE LOS MISMOS VALORES QUE REYNEGRO";
            //}
        }
    }
    return false;
}

bool DamaBlanca::moverDerecha(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY()+cantidad;
        int mov_x=coordenadas.getX();
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_y<TABLERO_FILAS){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                    //cout<<"MOVIMIENTO DERECHA"<<endl;
                    coordenadas.setY(mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}
        }
    }
    return false;
}

bool DamaBlanca::moverIzquierda(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY()-cantidad;
        int mov_x=coordenadas.getX();
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_y>=0){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                   // cout<<"MOVIMIENTO IZQUIERDA"<<endl;
                    coordenadas.setY(mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}
        }else{
           // cout<<" SUpera los limites: x="<<mov_x<<" MovY="<<mov_y<<endl;
            //cout<<" ORIGINAL X="<<coordenadas.getX()<<"  Y="<<coordenadas.getY()<<endl;
        }
    }
    return false;
}

bool DamaBlanca::moverDiagArribaDerecha(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY()+cantidad;
        int mov_x=coordenadas.getX()-cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x>=0 && mov_y<TABLERO_COLUMNAS){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                    //cout<<"MOVIMIENTO ARRIBADERECHA"<<endl;
                    coordenadas.setXY(mov_x,mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}
        }
    }
    return false;
}

bool DamaBlanca::moverDiagAbajoDerecha(int cantidad)
{

    if (cantidad>0){
        int mov_y=coordenadas.getY()+cantidad;
        int mov_x=coordenadas.getX()+cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x<TABLERO_FILAS && mov_y<TABLERO_COLUMNAS){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                   // cout<<"MOVIMIENTO ABAJODERECHA"<<endl;
                    coordenadas.setXY(mov_x,mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}else{
            //      cout<<"EXITENTE MOVIMIENTO YA QUE ES IGUAL A REYNEGRO"<<endl;
        //}
    }else{

        // cout<<" SUpera los limites: x="<<mov_x<<" MovY="<<mov_y<<endl;
         //cout<<" ORIGINAL X="<<coordenadas.getX()<<"  Y="<<coordenadas.getY()<<endl;

    }
}
    return false;
}

bool DamaBlanca::moverDiagArribaIzquierda(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY()-cantidad;
        int mov_x=coordenadas.getX()-cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x>=0 && mov_y>=0){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                   // cout<<"MOVIMIENTO ARRIBAIZQUIERDA"<<endl;
                    coordenadas.setXY(mov_x,mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}else{
            //    cout<<"EXITENTE MOVIMIENTO YA QUE ES IGUAL A REYNEGRO"<<endl;
        //}
    }else{
       // cout<<" SUpera los limites: x="<<mov_x<<" MovY="<<mov_y<<endl;
    }
}
    return false;
}

bool DamaBlanca::moverDiagAbajoIzquierda(int cantidad)
{
    if (cantidad>0){
        int mov_y=coordenadas.getY()-cantidad;
        int mov_x=coordenadas.getX()+cantidad;
        int reyNX=escenario->getReyNegro().getX();
        int reyNY=escenario->getReyNegro().getY();
        if(mov_x<TABLERO_FILAS&& mov_y>=0){
            //if(mov_x!=reyNX || mov_y!=reyNY){
                if(mov_x!=reyBlancoX || mov_y!=reyBlancoY){
                    //cout<<"MOVIMIENTO ABAJOIZQUIERDA"<<endl;
                    coordenadas.setXY(mov_x,mov_y);
                    escenario->setDamaBlanca(mov_x,mov_y);
                    return true;
                }

            //}
        }
    }
    return false;
}

