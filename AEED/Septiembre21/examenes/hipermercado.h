#ifndef SEPTIEMBRE21_HIPERMERCADO_H
#define SEPTIEMBRE21_HIPERMERCADO_H
#include<iostream>
#include "../tads p/ListaEnla.h"
struct caja{
    caja(size_t id_c,size_t id=0):id_cajero(id),recaudacion(0.00),id_caja(id_c),activa(false){}
    double recaudacion;
    bool activa;
    size_t id_cajero,id_caja;
};
class hipermercado{
    ListaEnla<caja>linea_caja;
    double total_dia;
    public:
        hipermercado():total_dia(0.00){
            for (int i = 0; i < 50; ++i) {
                //Al tener como maximo 50 cajas funcionales metemos 50 cajas y 10 funcionando
                caja temp(i);
                if(i<10){
                    temp.id_cajero=i;
                    temp.activa=true;
                }
                linea_caja.insertar(temp,linea_caja.fin());
            }
        }
        void abrir_caja(const size_t id_caja,const size_t id_cajero);
        void cerrar_caja(const size_t id_caja);
        void cobrar_cliente(const size_t id,double venta);
        void cambiar_cajero(size_t id_caja, size_t id_cajero);
        void cambiar_turno();
        void cerrar_hipermercado();
        ~hipermercado()=default;
};

void hipermercado::abrir_caja(const size_t id_caja, const size_t id_cajero) {
    auto i = linea_caja.primera();
    while (i != linea_caja.fin()){
        if (id_caja==linea_caja.elemento(i).id_caja){
            linea_caja.elemento(i).activa=true;
            linea_caja.elemento(i).id_cajero=id_cajero;
            break;
        }
        i=linea.siguiente(i);
    }
}

void hipermercado::cerrar_caja(const size_t id_caja) {
    auto i = linea_caja.primera();
    while (i != linea_caja.fin()){
        if (id_caja==linea_caja.elemento(i).id_caja){
            linea_caja.elemento(i).activa=false;
            linea_caja.elemento(i).id_cajero=-1;
            total_dia+=linea_caja.elemento(i).recaudacion;
            linea_caja.elemento(i).recaudacion=0;
            break;
        }
        i=linea.siguiente(i);
    }
}

void hipermercado::cobrar_cliente(const size_t id,double venta) {
    auto i = linea_caja.primera();
    while (i != linea_caja.fin()){
        if (id_caja==linea_caja.elemento(i).id_caja){
            linea_caja.elemento(i).recaudacion+=venta;//Suma a la recaudacion de la caja
            break;
        }
        i=linea.siguiente(i);
    }
}

void hipermercado::cambiar_cajero(size_t id_caja, size_t id_cajero) {
    auto i = linea_caja.primera();
    while (i != linea_caja.fin()){
        if (id_caja==linea_caja.elemento(i).id_caja){
            linea_caja.elemento(i).id_cajero= id_cajero;
            break;
        }
        i=linea.siguiente(i);
    }
}

void hipermercado::cambiar_turno() {
    auto i = linea_caja.primera();
    while (i != linea_caja.fin()){
        if (linea_caja.elemento(i).activa){
            total_dia+=linea_caja.elemento(i).recaudacion;
            linea_caja.elemento(i).recaudacion=0;
        }
        i=linea.siguiente(i);
    }
}

void hipermercado::cerrar_hipermercado() {
    auto i = linea_caja.primera();
    cambiar_turno();
    while (i != linea_caja.fin()){
        linea_caja.elemento(i).activa=false;
        i=linea.siguiente(i);
    }

}

#endif //SEPTIEMBRE21_HIPERMERCADO_H
