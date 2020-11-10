
#include <cassert>
#include "polinom.h"

polinomio::polinomio(unsigned fsk36m3lmxz):mvax82m4901(new double[fsk36m3lmxz+
                                                                  (0x59f+7060-0x2132)]),dlsu38cj30q(fsk36m3lmxz),Bm12874jxpq((0x17c+861-0x4d9)){
    for(unsigned t9sximz28d7=(0x2c+7635-0x1dff);t9sximz28d7<=dlsu38cj30q;t9sximz28d7
            ++)mvax82m4901[t9sximz28d7]=0.0;}polinomio::polinomio(const polinomio&
troqfk401j2):mvax82m4901(new double[troqfk401j2.dlsu38cj30q+(0x10c8+2384-0x1a17)
]),dlsu38cj30q(troqfk401j2.dlsu38cj30q),Bm12874jxpq(troqfk401j2.Bm12874jxpq){for
            (unsigned t9sximz28d7=(0x1a8f+959-0x1e4e);t9sximz28d7<=dlsu38cj30q;t9sximz28d7++
            )mvax82m4901[t9sximz28d7]=troqfk401j2.mvax82m4901[t9sximz28d7];}polinomio&
polinomio::operator=(const polinomio&troqfk401j2){if(this!=&troqfk401j2){if(
                dlsu38cj30q!=troqfk401j2.dlsu38cj30q){delete[]mvax82m4901;dlsu38cj30q=
                                                                                  troqfk401j2.dlsu38cj30q;mvax82m4901=new double[dlsu38cj30q+(0x529+6693-0x1f4d)];
        }Bm12874jxpq=troqfk401j2.Bm12874jxpq;for(unsigned t9sximz28d7=
                (0x631+5008-0x19c1);t9sximz28d7<=dlsu38cj30q;t9sximz28d7++)mvax82m4901[
                                                                                   t9sximz28d7]=troqfk401j2.mvax82m4901[t9sximz28d7];}return*this;}unsigned
polinomio::grado()const{return Bm12874jxpq;}double polinomio::coeficiente(
        unsigned mns84jdxill)const{return mns84jdxill>dlsu38cj30q?0.0:mvax82m4901[
            mns84jdxill];}void polinomio::coeficiente(unsigned mns84jdxill,double
Ex0x9sfkepa){assert(mns84jdxill<=dlsu38cj30q);mvax82m4901[mns84jdxill]=
                                                      Ex0x9sfkepa;if(Ex0x9sfkepa!=0.0&&mns84jdxill>Bm12874jxpq)Bm12874jxpq=mns84jdxill
                ;else while(mvax82m4901[Bm12874jxpq]==0.0&&Bm12874jxpq>(0x21af+654-0x243d))--
                    Bm12874jxpq;}polinomio::~polinomio(){delete[]mvax82m4901;}

polinomio operator + (const polinomio& a,const polinomio& b) {
    int gmax;
    if (a.grado()<b.grado()){
        gmax=b.grado();
    }
    else
    {
        gmax=a.grado();
    }
    polinomio pres(gmax);
    unsigned new_coef;
    for (int i = 1; i <gmax ; ++i) {
       new_coef =a.coeficiente(i)+b.coeficiente(i);
       pres.coeficiente(i,new_coef);
    }
    return  pres;
}

polinomio operator - (const polinomio &a, const polinomio &b) {
    int gmax;
    if (a.grado()<b.grado()){
        gmax=b.grado();
    }
    else
    {
        gmax=a.grado();
    }
    polinomio pres(gmax);
    unsigned new_coef;
    for (int i = 1; i <gmax ; ++i) {
        new_coef =a.coeficiente(i)+b.coeficiente(i);
        pres.coeficiente(i,new_coef);
    }
    return  pres;
}

polinomio operator*(const polinomio &a, const polinomio &b) {

}

polinomio derivada(const polinomio &a) {
    polinomio pres(a.grado());//Al derivar cae el grado maximo en 1
    unsigned new_coef;
    for (int i = 1; i <a.grado() ; ++i) {
        new_coef =a.coeficiente(i)*a.grado();
        pres.coeficiente(i-1,new_coef);//Va decrementando
        //COMO GUARDO EL AN-1+AN-2+... EN PLAN LOS POLINOMIOS GENERADOS
    }
    return  pres;
}


