#include "sarsa.h"
#include <stdlib.h>
#include <math.h>
#include "damablanca.h"
#include <set>
#include <stdlib.h>

using namespace std;


Sarsa::Sarsa()
{
    //fila 0
    BASE_DATOS_MATE[0][0]=NULL;
    BASE_DATOS_MATE[0][1]=new Coordenada(2,4);
    BASE_DATOS_MATE[0][2]=NULL;
    BASE_DATOS_MATE[0][3]=NULL;
    BASE_DATOS_MATE[0][4]=NULL;
    BASE_DATOS_MATE[0][5]=NULL;
    BASE_DATOS_MATE[0][6]=NULL;
    BASE_DATOS_MATE[0][7]=NULL;
    BASE_DATOS_MATE[0][8]=NULL;

    //fila 1
    BASE_DATOS_MATE[1][0]=NULL;
    BASE_DATOS_MATE[1][1]=NULL;
    BASE_DATOS_MATE[1][2]=new Coordenada(1,4);
    BASE_DATOS_MATE[1][3]=new Coordenada(2,5);
    BASE_DATOS_MATE[1][4]=NULL;
    BASE_DATOS_MATE[1][5]=NULL;
    BASE_DATOS_MATE[1][6]=new Coordenada(2,5);
    BASE_DATOS_MATE[1][7]=NULL;
    BASE_DATOS_MATE[1][8]=NULL;

    //fila 2
    BASE_DATOS_MATE[2][0]=NULL;
    BASE_DATOS_MATE[2][1]=NULL;
    BASE_DATOS_MATE[2][2]=NULL;
    BASE_DATOS_MATE[2][3]=NULL;
    BASE_DATOS_MATE[2][4]=new Coordenada(2,7);
    BASE_DATOS_MATE[2][5]=new Coordenada(4,6);
    BASE_DATOS_MATE[2][6]=NULL;
    BASE_DATOS_MATE[2][7]=NULL;
    BASE_DATOS_MATE[2][8]=NULL;

    //fila 3
    BASE_DATOS_MATE[3][0]=new Coordenada(2,3);
    BASE_DATOS_MATE[3][1]=NULL;
    BASE_DATOS_MATE[3][2]=NULL;
    BASE_DATOS_MATE[3][3]=NULL;
    BASE_DATOS_MATE[3][4]=NULL;
    BASE_DATOS_MATE[3][5]=new Coordenada(1,6);
    BASE_DATOS_MATE[3][6]=new Coordenada(1,5);
    BASE_DATOS_MATE[3][7]=NULL;
    BASE_DATOS_MATE[3][8]=new Coordenada(5,6);

    //fila 4
    BASE_DATOS_MATE[4][0]=NULL;
    BASE_DATOS_MATE[4][1]=NULL;
    BASE_DATOS_MATE[4][2]=NULL;
    BASE_DATOS_MATE[4][3]=NULL;
    BASE_DATOS_MATE[4][4]=NULL;
    BASE_DATOS_MATE[4][5]=NULL;
    BASE_DATOS_MATE[4][6]=NULL;
    BASE_DATOS_MATE[4][7]=NULL;
    BASE_DATOS_MATE[4][8]=NULL;

    //fila 5
    BASE_DATOS_MATE[5][0]=NULL;
    BASE_DATOS_MATE[5][1]=NULL;
    BASE_DATOS_MATE[5][2]=NULL;
    BASE_DATOS_MATE[5][3]=NULL;
    BASE_DATOS_MATE[5][4]=NULL;
    BASE_DATOS_MATE[5][5]=new Coordenada(1,6);
    BASE_DATOS_MATE[5][6]=NULL;
    BASE_DATOS_MATE[5][7]=new Coordenada(0,5);
    BASE_DATOS_MATE[5][8]=NULL;
    //fila 6
    BASE_DATOS_MATE[6][0]=NULL;
    BASE_DATOS_MATE[6][1]=new Coordenada(2,4);
    BASE_DATOS_MATE[6][2]=NULL;
    BASE_DATOS_MATE[6][3]=NULL;
    BASE_DATOS_MATE[6][4]=NULL;
    BASE_DATOS_MATE[6][5]=NULL;
    BASE_DATOS_MATE[6][6]=NULL;
    BASE_DATOS_MATE[6][7]=NULL;
    BASE_DATOS_MATE[6][8]=NULL;
    //fila 7
    BASE_DATOS_MATE[7][0]=NULL;
    BASE_DATOS_MATE[7][1]=NULL;
    BASE_DATOS_MATE[7][2]=new Coordenada(1,4);
    BASE_DATOS_MATE[7][3]=NULL;
    BASE_DATOS_MATE[7][4]=NULL;
    BASE_DATOS_MATE[7][5]=NULL;
    BASE_DATOS_MATE[7][6]=NULL;
    BASE_DATOS_MATE[7][7]=NULL;
    BASE_DATOS_MATE[7][8]=NULL;
    //fila 8
    BASE_DATOS_MATE[8][0]=NULL;
    BASE_DATOS_MATE[8][1]=NULL;
    BASE_DATOS_MATE[8][2]=NULL;
    BASE_DATOS_MATE[8][3]=NULL;
    BASE_DATOS_MATE[8][4]=NULL;
    BASE_DATOS_MATE[8][5]=NULL;
    BASE_DATOS_MATE[8][6]=new Coordenada(0,6);
    BASE_DATOS_MATE[8][7]=NULL;
    BASE_DATOS_MATE[8][8]=NULL;
    //fila 9
    BASE_DATOS_MATE[9][0]=NULL;
    BASE_DATOS_MATE[9][1]=NULL;
    BASE_DATOS_MATE[9][2]=NULL;
    BASE_DATOS_MATE[9][3]=NULL;
    BASE_DATOS_MATE[9][4]=NULL;
    BASE_DATOS_MATE[9][5]=NULL;
    BASE_DATOS_MATE[9][6]=NULL;
    BASE_DATOS_MATE[9][7]=new Coordenada(3,4);
    BASE_DATOS_MATE[9][8]=NULL;
    //fila 10
    BASE_DATOS_MATE[10][0]=NULL;
    BASE_DATOS_MATE[10][1]=NULL;
    BASE_DATOS_MATE[10][2]=NULL;
    BASE_DATOS_MATE[10][3]=NULL;
    BASE_DATOS_MATE[10][4]=new Coordenada(2,7);
    BASE_DATOS_MATE[10][5]=NULL;
    BASE_DATOS_MATE[10][6]=NULL;
    BASE_DATOS_MATE[10][7]=NULL;
    BASE_DATOS_MATE[10][8]=NULL;
    //fila 11
    BASE_DATOS_MATE[11][0]=NULL;
    BASE_DATOS_MATE[11][1]=NULL;
    BASE_DATOS_MATE[11][2]=NULL;
    BASE_DATOS_MATE[11][3]=NULL;
    BASE_DATOS_MATE[11][4]=NULL;
    BASE_DATOS_MATE[11][5]=new Coordenada(1,6);
    BASE_DATOS_MATE[11][6]=new Coordenada(1,5);
    BASE_DATOS_MATE[11][7]=NULL;
    BASE_DATOS_MATE[11][8]=NULL;

    Q3= new double* [NUMERO_ESTADOS];
    for (int i = 0; i < NUMERO_ESTADOS; i++)
        Q3[i] = new double[NUMERO_ACCIONES];

    escenario=new Escenario();
    damaBlanca=new DamaBlanca(escenario);

}

void Sarsa::aprender()
{
    //inicializamos Q(s,s) arbitrariamente
    //    for (int i=0;i<NUMERO_ESTADOS;i++){
    //        for(int j=0;j<NUMERO_ACCIONES;j++){
    //           Q3[i][j]=0 + ((double)rand() / RAND_MAX) * (0 +1);
    //           Q[i][j]=0 + ((double)rand() / RAND_MAX) * (0 +1);
    //           //cout<<Q3[i][j]<<"  "<<Q[i][j]<<endl;

    //        }
    //    }

    int countador_movimientos=0;
    int refuerzo=0;
    bool existeEstadop=false;
    bool ganoAux=false;
    bool pierde=false;
    estados_basados.clear();////////////////////////////////////////////
    //escenario->imprimirEscenario();
    set <Estado*,Cmp>  listaAuxi;
    listaAuxi.clear();
    listaCerrada.clear();
    //repetimos 100 veces
    for (int veces=0;veces<100;veces++){
        escenario->setReyNegro(0,7);
        escenario->setDamaBlanca(5,5);
        escenario->setReyBlanco(1,4);
        reyNegro.setXY(1,4);
        damaBlanca->setCoordenadas(5,5);
        bool gana=obtenerEstados();
        insertarEstadosBasados(damaBlanca->getCoordenadas(),escenario->getReyBlanco(),escenario->getReyNegro());
        int aprende=0;
        cout<<endl;
        pierde=false;

        //S= situacion inicial
        //escoger una accion segun Q(s,a) con GREDY
        countador_movimientos=0;
        while(gana!=true && pierde!=true){
            countador_movimientos++;
            //cout<<" DESPUES DE LAS SETEADA -sdasdasdasdasdasd" <<endl;
            system("clear");
            //imprimirListaAbierta();
            cout<<"---------------------------JUGADA NUMERO "<<countador_movimientos<<" ---------------------"<<endl;
            escenario->imprimirEscenario();
            //escojer una accion a' de Q(s',a') de forma e gredy
            Estado *estado=*listaAbierta.begin();
            cout<<" Se va a escoger: "<<estado->getX()<<"  "<<estado->getY()<<endl;
            //ejecutar una accion y obtner S' y obtener R
            existeEstadop=existeEstado(estado);
            if(existeEstadop){
                cout<<" le estado EXISTE "<<endl;
                cout<<" Se va a escoger: "<<estados_basados[indiceEstadoEncontrado]->getX()<<" "<<
                      estados_basados[indiceEstadoEncontrado]->getY()<<endl;
                damaBlanca->setCoordenadas(estados_basados[indiceEstadoEncontrado]->getX(),
                                           estados_basados[indiceEstadoEncontrado]->getY());
                escenario->setDamaBlanca(estados_basados[indiceEstadoEncontrado]->getX(),
                                         estados_basados[indiceEstadoEncontrado]->getY());
            }else{
                cout<<"EL estaod no EXISTE"<<endl;
                cout<<" Se va a escoger: "<<estado->getX()<<"  "<<estado->getY()<<endl;
                damaBlanca->setCoordenadas(estado->getX(),estado->getY());
                escenario->setDamaBlanca(estado->getX(),estado->getY());
                insertarEstadosBasados(damaBlanca->getCoordenadas(),escenario->getReyBlanco(),escenario->getReyNegro());
            }
            ///Sumamos +1 cuando gana -1 cuando queda en tablas, 0 de lo contrario
            //modificamos Q(s,a) = Q(s,a) + u [r+r(Q(s',a'))-Q(s,a)]
            cout<<endl;
            if(!existeEstadop){
                listaAuxi=listaAbierta;
                Estado *aux=*listaAuxi.begin();
                listaAbierta.clear();
                ganoAux=obtenerEstados();
                if(ganoAux=true){

                }
                aux->setF(estado->getF()+aprende*(refuerzo+refuerzo*(aux->getF()-estado->getF())));
                listaAuxi.erase(listaAuxi.begin());
                listaAuxi.insert(aux);
                listaCerrada.insert(listaAuxi);

                //LOs insertamos en la listaCerrada2
                vector <Estado *> auxiEs;
                for (std::set<Estado*>::iterator it=listaAuxi.begin(); it!=listaAuxi.end(); ++it)
                    auxiEs.push_back((*it));
                listaCerrada2.push_back(auxiEs);
            }else{
                Estado *aux=*listaAbierta.begin();
                ganoAux=obtenerEstados();
                listaCerrada2[indiceEstadoEncontrado][0]->setF(
                            listaCerrada2[indiceEstadoEncontrado][0]->getF()+
                        aprende*(refuerzo+refuerzo*(aux->getF()-listaCerrada2[indiceEstadoEncontrado][0]->getF()))
                        );

            }
            cout<<"El PC responde: "<<endl;
            escenario->imprimirEscenario();

            //s=s'
            //a=a'

            //ACA ES DONDE JUEGA EL JUGADOR
            pierde=movimientoJugador();
            gana=obtenerEstados();
            if(gana==true){
                damaBlanca->setCoordenadas(escenario->getReyNegro().getX(),escenario->getReyNegro().getY());
                escenario->setDamaBlanca(escenario->getReyNegro().getX(),escenario->getReyNegro().getY());
                cout<<" El PC GANO =D "<<endl<<endl;
                escenario->imprimirEscenario();
            }

            if(pierde==true){
                cout<<" UD GANO :("<<endl;
                //system("pause");
            }

        }
        gana=false;



        if(veces<100){
            cout<<"--------------------------------------------------"<<endl;
            cout<<"|              Comenzamos de nuevo                |"<<endl;
            cout<<"--------------------------------------------------"<<endl<<endl<<endl;
        }
    }
}



bool Sarsa::obtenerEstados()
{
    //0 arriba
    //1 abajo
    //2 derecha
    //3 izquierda
    //4 arribaDerecha
    //5 arribaIzquierda
    //6 abajoDerecha
    //7 abajoIzquierda

    listaAbierta.clear();

    reyNegro.setXY(escenario->getReyNegro().getX(),escenario->getReyNegro().getY());
    Coordenada coordenadas=damaBlanca->getCoordenadas();
    bool banderaStop=false;
    int contador=1;
    int ori_x=coordenadas.getX();
    int ori_y=coordenadas.getY();
    Estado *estado;
    for(int i=0;i<8;i++){
        contador=1;
        banderaStop=false;
        switch (i){
        case 0:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverArriba(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                       // cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);

                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 1:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moberAbajo(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                        //cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 2:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverDerecha(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                       // cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 3:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverIzquierda(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                       // cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 4:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverDiagArribaDerecha(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                       // cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 5:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverDiagArribaIzquierda(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                        //cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 6:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverDiagAbajoDerecha(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i
                                      ,escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                        //cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;
        case 7:
            contador=1;
            while(banderaStop!=true){
                if (damaBlanca->moverDiagArribaIzquierda(contador)){
                    estado=new Estado(damaBlanca->getCoordenadas().getX(),damaBlanca->getCoordenadas().getY(),i,
                                      escenario->getReyBlanco(),escenario->getReyNegro());
                    estado->setG(0 + ((double)rand() / RAND_MAX) * (0 +1));
                    if(!comprobarListaCerrada(estado)){
                       // cout<<"Se va a insertar un estado "<<estado->getX()<<" "<<estado->getY()<<endl;
                        listaAbierta.insert(estado);
                    }
                    if(damaBlanca->getCoordenadas().getX()==escenario->getReyNegro().getX() &&
                            damaBlanca->getCoordenadas().getY()==escenario->getReyNegro().getY()){
                        damaBlanca->setCoordenadas(ori_x,ori_y);
                        escenario->setDamaBlanca(ori_x,ori_y);
                        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
                        //cout<<"RETORNA TRUE"<<endl;
                        return true;
                    }
                    damaBlanca->setCoordenadas(ori_x,ori_y);
                }else{
                    banderaStop=true;
                }
                contador++;
            }
            break;

        }
        damaBlanca->setCoordenadas(ori_x,ori_y);
        escenario->setDamaBlanca(ori_x,ori_y);
        escenario->setReyNegro(reyNegro.getX(),reyNegro.getY());
    }
    return false;
}



bool Sarsa::comprobarListaCerrada(Estado *estado)
{
    /* set<Estado*>::iterator it;
    for (it=listaCerrada.begin(); it!=listaCerrada.end(); ++it){
        if((*it)->getX()==estado->getX() && (*it)->getY()==estado->getY() && (*it)->getAccion()==estado->getAccion()){

            return true;
        }
    }*/

    return false;
}

void Sarsa::insertarEstadosBasados(Coordenada coordenadasDama, Coordenada reyBlanco, Coordenada reyNegro)
{
    //  bool encontrado=false;
    //    for(int i=0;i<estados_basados.size();i++){
    //        if(estados_basados[i].getX()==coordenadas.getX() && estados_basados[i].getY()==coordenadas.getY()){
    //            encontrado=true;
    //            break;
    //        }
    //    }
    Estado *estadoNUevo=new Estado(coordenadasDama.getX(),coordenadasDama.getY(),-1,reyBlanco,reyNegro);
    estados_basados.push_back(estadoNUevo);

}

bool Sarsa::existeEstado(Estado *estado)
{
    cout<<"LLega el estaod "<<estado->getX()<<" "<<estado->getY()<<endl;
    bool encontrado=false;
    for(int i=0;i<estados_basados.size();i++){
        if(estado->compararCoordenadas(estados_basados[i]->getX(),estados_basados[i]->getY(),
                                       escenario->getReyBlanco(),escenario->getReyNegro())){
            encontrado==true;
            indiceEstadoEncontrado=i;
            break;
        }
        //        if(estados_basados[i].getX()==estado->getX() && estados_basados[i].getY()==estado->getY()){
        //            encontrado=true;
        //            indiceEstadoEncontrado=i;
        //            break;
        //        }
    }
    cout<<"Se deuelve el estaod "<<estado->getX()<<" "<<estado->getY()<<endl;
    return false;
}

bool Sarsa::movimientoJugador()
{
    int re_x,re_y;

    char movimiento[10];
    re_x=escenario->getReyNegro().getX();
    re_y=escenario->getReyNegro().getY();
    bool malMovimiento=false;
    do{
        cout<<"Es su turono: ";
        cin>>movimiento;cout<<endl;
        switch (movimiento[0]) {
        case 'a':
            if(re_y-1>=0){
                re_y=re_y-1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'd':
            if(re_y+1<TABLERO_FILAS){
                re_y=re_y+1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'w':
            if(re_x-1>=0){
                re_x=re_x-1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'x':
            if(re_x+1<TABLERO_FILAS){
                re_x=re_x+1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'q':
            if(re_y-1>=0 && re_x-1>=0){
                re_y=re_y-1;
                re_x=re_x-1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'e':
            if(re_y+1<TABLERO_COLUMNAS && re_x-1>=0){
                re_y=re_y+1;
                re_x=re_x-1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'z':
            if(re_y-1>=0 && re_x+1<TABLERO_FILAS){
                re_y=re_y-1;
                re_x+=1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        case 'c':
            if(re_y+1<TABLERO_COLUMNAS && re_x+1<TABLERO_FILAS){
                re_y=re_y+1;
                re_x+=1;
                malMovimiento=false;
            }else{
                cout<<"NO PUEDE REALIZAR ESTE MOVIMIENTO"<<endl;
                malMovimiento=true;
            }
            break;
        default:
            cout<<"DEbe ingresar datos validos"<<endl;
            malMovimiento=true;
            break;
        }
    }while(malMovimiento);

    escenario->setReyNegro(re_x,re_y);
    reyNegro.setXY(re_x,re_y);
    if(reyNegro.getX()==escenario->getDamaBlanca().getX() && reyNegro.getY()==escenario->getDamaBlanca().getY()){
        return true;
    }else if(reyNegro.getX()==escenario->getReyBlanco().getX() && reyNegro.getY()==escenario->getReyBlanco().getY()){
        return true;
    }

    return false;

}

void Sarsa::imprimirListaAbierta()
{
    cout<<"EL contenido de la lista abierta"<<endl;
    if(!listaAbierta.empty()){
        for (std::set<Estado*>::iterator it=listaAbierta.begin(); it!=listaAbierta.end(); ++it)
            cout<<"\t"<<(*it)->getX()<<" "<<(*it)->getY()<<endl;
    }
}







Coordenada *Sarsa::obtenerSolucion(Coordenada damaBlanca, Coordenada reyNegro)
{
    Coordenada *coordenada=new Coordenada(-1,-1);
    if (damaBlanca.getX()==2 && damaBlanca.getY()==3 && reyNegro.getX()==3 && reyNegro.getY()==6){
        cout<<"E6"<<endl;
        coordenada->setXY(2,4);
    } else if (damaBlanca.getX()==3 && damaBlanca.getY()==4 && reyNegro.getX()==2 && reyNegro.getY()==6){
        cout<<"E7"<<endl;
        coordenada=BASE_DATOS_MATE[1][2];
    } else if (damaBlanca.getX()==3 && damaBlanca.getY()==4 && reyNegro.getX()==0 && reyNegro.getY()==6){
        cout<<"F6"<<endl;
        coordenada=BASE_DATOS_MATE[1][3];
    } else if (damaBlanca.getX()==3 && damaBlanca.getY()==4 && reyNegro.getX()==2 && reyNegro.getY()==7){
        cout<<"F6"<<endl;
        coordenada=BASE_DATOS_MATE[1][6];
    } else if (damaBlanca.getX()==2 && damaBlanca.getY()==4 && reyNegro.getX()==4 && reyNegro.getY()==7){
        cout<<"H6"<<endl;
        coordenada=BASE_DATOS_MATE[2][4];
    } else if (damaBlanca.getX()==2 && damaBlanca.getY()==4 && reyNegro.getX()==3 && reyNegro.getY()==7){
        cout<<"G4"<<endl;
        coordenada=BASE_DATOS_MATE[2][5];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==4 && reyNegro.getX()==3 && reyNegro.getY()==5){
        cout<<"D6"<<endl;
        coordenada=BASE_DATOS_MATE[3][0];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==4 && reyNegro.getX()==3 && reyNegro.getY()==7){
        cout<<"G7"<<endl;
        coordenada=BASE_DATOS_MATE[3][5];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==4 && reyNegro.getX()==2 && reyNegro.getY()==7){
        cout<<"F7"<<endl;
        coordenada=BASE_DATOS_MATE[3][6];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==4 && reyNegro.getX()==0 && reyNegro.getY()==7){
        cout<<"G5"<<endl;
        coordenada=BASE_DATOS_MATE[3][8];
    } else if (damaBlanca.getX()==2 && damaBlanca.getY()==5 && reyNegro.getX()==3 && reyNegro.getY()==7){
        cout<<"G7"<<endl;
        coordenada=BASE_DATOS_MATE[5][5];
    } else if (damaBlanca.getX()==2 && damaBlanca.getY()==5 && reyNegro.getX()==1 && reyNegro.getY()==7){
        cout<<"F8"<<endl;
        coordenada=BASE_DATOS_MATE[5][7];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==5 && reyNegro.getX()==3 && reyNegro.getY()==6){
        cout<<"E6"<<endl;
        coordenada=BASE_DATOS_MATE[6][1];
    } else if (damaBlanca.getX()==0 && damaBlanca.getY()==5 && reyNegro.getX()==2 && reyNegro.getY()==6){
        cout<<"E7"<<endl;
        coordenada=BASE_DATOS_MATE[7][2];
    } else if (damaBlanca.getX()==4 && damaBlanca.getY()==6 && reyNegro.getX()==2 && reyNegro.getY()==7){
        cout<<"G8"<<endl;
        coordenada=BASE_DATOS_MATE[8][6];
    } else if (damaBlanca.getX()==3 && damaBlanca.getY()==6 && reyNegro.getX()==1 && reyNegro.getY()==7){
        cout<<"E5"<<endl;
        coordenada=BASE_DATOS_MATE[9][7];
    } else if (damaBlanca.getX()==1 && damaBlanca.getY()==6 && reyNegro.getX()==4 && reyNegro.getY()==7){
        cout<<"H6"<<endl;
        coordenada=BASE_DATOS_MATE[10][4];
    } else if (damaBlanca.getX()==0 && damaBlanca.getY()==6 && reyNegro.getX()==3 && reyNegro.getY()==7){
        cout<<"G7"<<endl;
        coordenada=BASE_DATOS_MATE[11][5];
    } else if (damaBlanca.getX()==0 && damaBlanca.getY()==6 && reyNegro.getX()==2 && reyNegro.getY()==7){
        cout<<"F7"<<endl;
        coordenada=BASE_DATOS_MATE[11][6];
    } else {
        cout<<"NULL"<<endl;
        coordenada=NULL;
    }
    return coordenada;
}

