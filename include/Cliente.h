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
        float impuesto    = 0.0;
        float descuento   = 0.0;
        float precioBase  = 0.0;
        float horas;

    public:
        /**Empresa nacional*/
        Empresa(std::string name, int impuesto){
            _name = name;
            bajo_demanda = 0.140;
            reservadas = 0.063;
            puntuales = 0.029;
            this->impuesto = impuesto;
            std::cout << "Cliente Nacional" << std::endl;
        };

        /**Empresa Internaconal*/
        Empresa(std::string name){
            _name = name;
            bajo_demanda = 0.158;
            reservadas = 0.072;
            puntuales = 0.038;
            impuesto = 0.0;
            
            std::cout << "Cliente Internacional" << std::endl;
        };

        Empresa(){};


        void setPrecio(char tipoServicio, int horas);
        void  aplicarPromocion();
        float getPrecioBase();
        float getPago();

};



#endif