#include "escenario.h"

void Escenario::imprimirEscenario()
{
    for(int i=0;i<mundo_ajedrez_datos.size();i++){
        for(int j=0;j<mundo_ajedrez_datos[i].size();j++){
            cout<<mundo_ajedrez[i][j]<<" ";
        }
        cout<<endl;
    }

}

void Escenario::imprimirDatos()
{
    for(int i=0;i<mundo_ajedrez_datos.size();i++){
        for(int j=0;j<mundo_ajedrez_datos[i].size();j++){
            cout<<mundo_ajedrez_datos[i][j]<<" ";
        }
        cout<<endl;
    }
}

Escenario::Escenario()
{

    int factor=10;
    int indice=1;
    vector < int> auxiliar;
    vector < string> auxiliar2;
    for(int i=0;i<TABLERO_FILAS;i++){
        factor=factor*indice;
        for(int j=0;j<TABLERO_COLUMNAS;j++){
            auxiliar2.push_back("--");
            auxiliar.push_back(factor);
            factor+=1;
        }
        indice++;
        mundo_ajedrez_datos.push_back(auxiliar);
        mundo_ajedrez.push_back(auxiliar2);
        auxiliar.clear();
        auxiliar2.clear();
        factor=10;
    }

    mundo_ajedrez[1][4]="DB";
    mundo_ajedrez[0][7]="RN";
    mundo_ajedrez[5][5]="RB";

    coo_reyBlanco.setXY(5,5);
    coo_reyNegro.setXY(0,7);
    coo_damaBlanca.setXY(1,4);



}
