#ifndef _CLIENTE_H_
#define _CLIENTE_H_

#include <iostream>

class Empresa {
    private:
        std::string _name;
        float bajo_demanda;
        float reservadas;
        float puntuales;
        int   empresaTipo = 1;
        int impuesto = 0;
        float descuento = 0.0;
        float precioBase = 0.0;

    public:
        /**Empresa nacional*/
        Empresa(std::string name, int impuesto){
            _name = name;
            bajo_demanda = 0.140;
            reservadas = 0.063;
            puntuales = 0.029;
            impuesto = impuesto;
            std::cout << "Cliente Nacional" << std::endl;
        };

        /**Empresa Internaconal*/
        Empresa(std::string name){
            _name = name;
            bajo_demanda = 0.158;
            reservadas = 0.072;
            puntuales = 0.038;
            
            std::cout << "Cliente internacional" << std::endl;
        };

        Empresa(){};


        void setPrecio(char tipoServicio, int horas);
        void  aplicarPromocion();
        float getPrecioBase();
        float getPago();

    /**horas <= 168 : 10%

    horas > 168 && <= 360 : 15%

    horas > 360 : 20%;*/


};



#endif