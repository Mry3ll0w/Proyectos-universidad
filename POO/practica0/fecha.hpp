#ifndef FECHA_HPP
#define FECHA_HPP

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class fecha{
    
    public:
        
        const int annomin=1902,annomaximo=2037;
        fecha(int d, int m, int y);
        fecha(int d,int m);
        fecha(int d);
        fecha(string date);//poner fecha sin anno
        fecha(const fecha &new_date){
            this->day=new_date.day;
            this->month=new_date.month;
            this->year=new_date.year;
        }
        class invalida{
            public:
                    invalida(string name);
                    string what()const;
            private:
                string input;
        };
        fecha();
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
        fecha& operator = (fecha a);
        fecha& operator ++();
        fecha& operator --();
        fecha& operator +(int);
        fecha& operator -(int);
        ~fecha();

    private:

        int day,month,year;
        int error_handler;//SI =32 error dia,=13, ...
        string month_selector(int month);
        string fecha_check(int dd ,int mm,int yy);
       

};
inline bool operator == (fecha a,fecha b);
inline bool operator != (fecha a, fecha b);
bool operator >(fecha a, fecha b);
inline bool operator <(fecha a, fecha b);
inline bool operator >=(fecha a, fecha b);
inline bool operator <= (fecha a, fecha b);

#endif