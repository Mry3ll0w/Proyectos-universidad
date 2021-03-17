#ifndef Fecha_HPP
#define Fecha_HPP

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class Fecha{
    
    public:
        
        const int annomin=1902,annomaximo=2037;
        Fecha(int d, int m, int y);
        Fecha(int d,int m);
        Fecha(int d);
        Fecha(string date);//poner Fecha sin anno
        Fecha(const Fecha &new_date){
            this->day=new_date.day;
            this->month=new_date.month;
            this->year=new_date.year;
        }
        class invalida{
            public:
                    invalida(int a):input(a){};
                    int error(){
                        return input;
                    };
                    inline void what(string e)const{
                        cout<<e<<endl;
                    };
            private:
                int input;
        };
        Fecha();
        int dia()const{
            return day;
        }
        int mes()const{
            return month;
        }
        int anno()const{
            return year;
        }
        void show_date();
        Fecha& operator = (Fecha a);
        Fecha& operator ++();
        Fecha& operator --();
        Fecha& operator +(int);
        Fecha& operator -(int);
        ~Fecha();

    private:

        int day,month,year;
        string month_selector(int month);
        string Fecha_check(int dd ,int mm,int yy);
       

};
inline bool operator == (Fecha a,Fecha b);
inline bool operator != (Fecha a, Fecha b);
bool operator >(Fecha a, Fecha b);
inline bool operator <(Fecha a, Fecha b);
inline bool operator >=(Fecha a, Fecha b);
inline bool operator <= (Fecha a, Fecha b);

#endif