#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "escenario.h"
#include "sarsa.h"
#include "damablanca.h"


#define TABLERO_FILAS 8
#define TABLERO_COLUMNAS 8
using namespace std;

int main()
{
    srand(time(NULL));

//    Escenario escenario;
//    escenario.imprimirDatos();
//    cout<<endl;
//    escenario.imprimirEscenario();
//    cout<<endl;
//    escenario.setDamaBlanca(0,0);
//    escenario.imprimirEscenario();
//    escenario.setReyNegro(4,4);
//    escenario.imprimirEscenario();



//    Coordenada coordenadaDama(2,3);
//    Coordenada coordenadaRey(3,6);
//    Sarsa *csarsa=new Sarsa();
//    int damaX,damaY,reyX,reyY;
//    Coordenada *ap=NULL;
//    ap=csarsa->obtenerSolucion(coordenadaDama,coordenadaRey);
//    cout<<ap->getX()<<" "<<ap->getY()<<" "<<endl;
//    do{
//        cout<<"Ingrese nueva Coordenada DamaX=";
//        cin>>damaX;
//        cout<<"Ingrese nueva Coordenada DamaY=";
//        cin>>damaY;
//        cout<<endl<<endl;
//        cout<<"Ingrese nueva Coordenada ReyX=";
//        cin>>reyX;
//        cout<<"Ingrese nueva Coordenada ReyY=";
//        cin>>reyY;
//        cout<<endl<<endl;
//        coordenadaDama.setXY(damaX,damaY);
//        coordenadaRey.setXY(reyX,reyY);
//        cout<<"Solucion: ";
//        ap=csarsa->obtenerSolucion(coordenadaDama,coordenadaRey);
//        if(ap!=NULL){
//            cout<<ap->getX()<<" "<<ap->getY()<<" "<<endl;
//        }else{
//            cout<<"NULL";
//        }
//    }while(1==1);


    Sarsa *sarsa=new Sarsa();
    sarsa->aprender();
    /*Escenario *escenario=new Escenario();
    escenario->imprimirEscenario();*/
//    DamaBlanca damaBlanca(escenario);
//    int mov_abajo,mov_arriba,mov_izquierda,mov_derecha,mov_arribaIzqu,mov_arribaDer,mov_abajoIzq,mov_abajoDer;
//    while(1==1){
//        cout<<"Ingrese abajo: ";
//        cin>>mov_abajo;cout<<endl;
//        damaBlanca.moberAbajo(mov_abajo);
//        cout<<"Ingrese Arriba: ";
//        cin>>mov_arriba;cout<<endl;
//        damaBlanca.moverArriba(mov_arriba);
//        cout<<"Ingrese Derecha: ";
//        cin>>mov_derecha;cout<<endl;
//        damaBlanca.moverDerecha(mov_derecha);
//        cout<<"Ingrese izquierda: ";
//        cin>>mov_izquierda;cout<<endl;
//        damaBlanca.moverIzquierda(mov_izquierda);
//        cout<<"Ingrese ArribaDerecha: ";
//        cin>>mov_arribaDer;cout<<endl;
//        damaBlanca.moverDiagArribaDerecha(mov_arribaDer);
//        cout<<"Ingrese ArribaIzquierda: ";
//        cin>>mov_arribaIzqu;cout<<endl;
//        damaBlanca.moverDiagArribaIzquierda(mov_arribaIzqu);
//        cout<<endl;
//        cout<<"Ingrese AbajoDerecha: ";
//        cin>>mov_abajoDer;cout<<endl;
//        damaBlanca.moverDiagAbajoDerecha(mov_abajoDer);
//        cout<<endl;
//        cout<<"Ingrese AbajoIzquieda: ";
//        cin>>mov_abajoIzq;cout<<endl;
//        damaBlanca.moverDiagAbajoIzquierda(mov_abajoIzq);
//        cout<<endl;
//        escenario->imprimirEscenario();
//    }

    return 0;
}

