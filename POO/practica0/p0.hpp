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
        ~fecha();

    private:

        int day,month,year;
        int error_handler;//SI =32 error dia,=13, ...
        string month_selector(int month);
       

};

fecha::fecha(int d,int m,int y):day(d),month(m),year(y){
    if (day == 0 && month ==0 && year==0)
    {
        fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    
    try
    {
        if (day > 31 || day <1 )
        {
            throw 1 ;
        }
        else if (month > 12 || month<1)
        {
            throw 2;
        }
        else if(year < annomin){
            throw 3;
        }
        else if (year > annomaximo)
        {
            throw 4;
        }
        else{
                if (month==4,6,9,11 && day >30 )
                {
                    throw 5; // no tiene 31 dias 
                }
                else if (month==2 && (year%4)!=0 && day >28){ 
                    throw 6;//29 dias en no bisisesto
                }
                else if (month==2 && day>29)
                    throw 7; //feb no tiene mas de 29 dias
        }  
        
    }
    catch(int e)
    {
        switch(e){
            case 1:
                cerr << "Se ha introducido un dia erroneo (" <<day<<")" <<endl; 
                
                break;
            case 2:
                cerr<< "Se ha introducido un mes no valido ("<<month<<")" << '\n';
                
                break;
            case 3:
                cerr<< "Se ha introducido un anno menor al anno minimo("<<annomin<<")" << '\n';
                
                break;
            case 4:
                cerr<< "Se ha introducido un anno mayor al anno maximo("<<annomaximo<<")"<<endl;
                
                break;
            case 5:
                cerr<< "Se ha introducido un mes con 31 dias cuando solo tiene 30"<<endl;
                
                break;  
            case 6: 
                cerr<< "Se ha introducido mas de 28 dias en febrero y el anno no es bisiesto "<<endl;
                break;
            case 7: 
                cerr<<"febrero no tiene mas de 29 dias"<<endl;
                
                break;
            default:
                break;                      
        }
        exit(e);
    }
    
};

fecha::fecha(int d,int m):day(d),month(m){
    if (day == 0 && month ==0)
    {
        fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    year = TM.tm_year + 1900;
    try{
        if (day > 31 || day <1 )
        {
            throw 1 ;
        }
        else if (month > 12)
        {
            throw 2;
        }

         else{
                if (month==4,6,9,11 && day >30 )
                {
                    throw 5; // no tiene 31 dias 
                }
                else if (month==2 && (year%4)!=0 && day >28){ 
                    throw 6;//29 dias en no bisisesto
                }
                else if (month==2 && day>29)
                    throw 7; //feb no tiene mas de 29 dias
         }  
    
    }
    catch(int e)
    {
        switch(e){
            case 1:
                cerr << "Se ha introducido un dia erroneo (" <<day<<")" <<endl;
                exit(1);
                break;
            case 2:
                cerr<< "Se ha introducido un mes no valido ("<<month<<")" << '\n';
                exit(2);
                break;
            case 5:
                cerr<< "Se ha introducido un mes con 31 dias cuando solo tiene 30"<<endl;
                exit(5);
                break;  
            case 6: 
                cerr<< "Se ha introducido mas de 28 dias en febrero y el anno no es bisiesto "<<endl;
                exit(6);
                break;
            case 7: 
                cerr<<"febrero no tiene mas de 29 dias"<<endl;
                exit(7);
                break;
            default:
                break;                      
        }
      
    }
}

fecha::fecha(int d):day(d){
    if (day == 0 )
    {
        fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    try
    {
        if(day > 31 || day <1)
            throw 1;
    }
    catch(int e)
    {
        cerr<<"El dia introducido no es valido"<<endl;
        exit(e);
    }
    
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    month = TM.tm_mon+1;
    year = TM.tm_year + 1900;

}

fecha::fecha(){
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    day= TM.tm_mday;
    month = TM.tm_mon+1;
    year = TM.tm_year + 1900;
}

fecha::~fecha()=default;

string fecha::month_selector(int m){
        switch(m){
            case 1: 
                return "Enero";
                break;
            case 2:
                return "Febrero";
                break;
            case 3:
                return "Marzo";
                break;
            case 4:
                return "Abril";
                break;
            case 5:
                return "Mayo";
                break;
            case 6:
                return "Junio";
                break;
            case 7:
                return "Julio";
                break;
            case 8:
                return "Agosto";
                break;
            case 9:
                return "Septiembre";
                break;
            case 10:
                return "Octubre";
                break;
            case 11:
                return "Noviembre";
                break;
            case 12:
                return "Diciembre";
                break;
            default:
                return "ERROR";
                break;    
        }
}

void fecha::show_date(){
    cout<<day<<" de "<<month_selector(month)<<" de "<<year<<endl;
}

fecha& fecha::operator = (fecha a){
    this->year=a.year;
    this->month=a.month;
    this->day=a.day;
    return *this;
 }

fecha::fecha(string date){
    //Verificar que este bien introducido
    try{
        if (date.size()>10)
        {
            throw 8;
        }
        
    }
    catch(int e){
        if (e==8)
        {
            cerr<<"Se ha introducido una fecha no valida"<<endl;
            exit(1);
        }
        
    }
    //Variables
    int slash_found[2],k=0;
    string str_day,str_mes,str_year;

    //algoritmo 

    for (size_t i = 0; i < date.size(); i++)
    {
        if (date[i]=='/')
        {
            slash_found[k]=i;
            k++;
        }
        
    }
    for (size_t i = 0; i < slash_found[0]; i++)
    {
        str_day+=date[i];
    }
    day = stoi(str_day);
   
    for (size_t i = slash_found[0]+1; i < slash_found[1]; i++){
        str_mes+=date[i];
        
    }
    month= stoi(str_mes);
    
    for (size_t i = slash_found[1]+1; i < date.size(); i++)
    {
        str_year+=date[i];
    //mete mas de lo que debe
    }

    try
    {
        if(str_year.size()>4){
            throw 9;
        }
    }
    catch(int e)
    {
        cerr << "Se ha introducido un year de forma incorrecta" << '\n';
        exit(e);
    }
    year = stoi(str_year);
    if (day == 0 && month ==0 && year==0)
    {
        fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
 }

fecha& fecha::operator ++(){

   
   this->day++;
   
   if (this->month==4,6,9,11 && this->day>30)
   {
       
       this->month++;
       this->day=1; 
       if (this->month>12){
            this->year++;
            this->month=1;
        }      
   }
   else if (this->month!=4,6,9,11 &&this->day>31){
       this->month++;
       this->day=1;
       if (this->month>12){
            this->year++;
            this->day=1;
            this->month=1;
        }
    }

    return *this;

}

fecha& fecha::operator --(){
    
    this->day--;
    if (this->day <1)
    {
        if (this->month==4,6,9,11)
        {
            this->day=30;
        }
        else if(this->month==3 && (this->year%4)==0 ){
            cout<<"entro excepcion"<<endl;
            this->day=29;
        }
        else if (month==3 && (year%4)!=0)
        {
            
            this->day=28;
        }
        else{
            
            this->day=31;
        }
        this->month--;
        if (this->month<1)
        {
            this->month=12;
            this->year--;
        }
        
    }

}

inline bool operator == (fecha a,fecha b){
    return (a.dia()==b.dia() && a.mes()==b.mes() && a.anno()==b.anno() );
}
inline bool operator != (fecha a, fecha b){
    return !(a==b);
}

bool operator >(fecha a, fecha b){

    if (a.anno() > b.anno())
    {
        return true;
    }
    else if (a.mes()>b.mes() && a.anno()==b.anno())
    {
        return true;
    }
    else if(a.dia() > b.dia() && a.mes() == b.mes() && a.anno()==b.anno() ){
        return true;
    }
    else {
        return false;
    }

}

inline bool operator <(fecha a, fecha b){
    return !(a > b);
}

inline bool operator >=(fecha a, fecha b){
    if (a > b == true || a==b)
        return true;
    else
        return false;
    
    
}

inline bool operator <= (fecha a, fecha b){
    if (a < b || a == b)
        return true;
    else
        return false;    
}

fecha operator +(fecha a, int num){

}