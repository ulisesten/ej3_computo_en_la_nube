#include "Cliente.h"

float Empresa::getPrecioBase(){
    return precioBase;
}

float Empresa::getPago(){
    float pago = (this->precioBase - this->descuento);
    float totalImpuesto = pago * (this->impuesto / 100);

    return  pago + totalImpuesto;
}

void Empresa::aplicarPromocion(){
    if(horas <= 168){ 
        //10%
        this->descuento = this->precioBase * .10;

    } else if(horas > 168 && horas <= 360){
        //15%
        this->descuento = this->precioBase * .15;

    } else {
        //horas > 360 : 20%;*/
        this->descuento = this->precioBase * .20;
    }
}

/**Internacional*/
void Empresa::setPrecio(char tipoServicio, int horas){
    this->horas = horas;
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
        precioBase = horas * bajo_demanda;
        std::cout << "Sin tipo de servicio. (Default)Bajo demanda." << std::endl;
        break;
    }
}
