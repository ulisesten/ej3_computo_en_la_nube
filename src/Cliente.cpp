#include "Cliente.h"

float Empresa::getPrecioBase(){
    return precioBase;
}

void Empresa::aplicarPromocion(){

}

/**Internacional*/
void Empresa::setPrecio(char tipoServicio, int horas){
    switch (tipoServicio)
    {
    case 'D':
        precioBase = horas * bajo_demanda;
        break;
    
    case 'R':
        precioBase = horas * reservadas;
        break;

    case 'P':
        precioBase = horas * puntuales;
        break;
    
    default:
        break;
    }
}