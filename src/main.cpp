#include <iostream>
#include "Cliente.h"

int main(){
    Empresa cliente;
    int tipoCliente;
    char tipoServicio;
    float cantidadHoras = 0;

    std::cout << "Ingrese tipo de cliente: (1)Nacional, (2)Internacional:";
    std::cin >> tipoCliente;

    if(tipoCliente == 1){
        cliente = Empresa("Empresa nacional", 13);
        
    } else if(tipoCliente == 2){
        cliente = Empresa("Empresa internacional");
    } else {
        std::cout << "Sin tipo de cliente" << std::endl;
        return 0;
    }

    std::cout << "Ingrese tipo de servicio (D)Bajo demanda, (R)Reserva, (P)Puntual:";
    std::cin >> tipoServicio;

    std::cout << "Ingrese cantidad de horas:";
    std::cin >> cantidadHoras;

    cliente.setPrecio(tipoServicio, cantidadHoras);

    std::cout << "Precio base: " << cliente.getPrecioBase() << std::endl;

    return 0;
}