#include "fecha.hpp"

Fecha::Fecha(int d,int m,int y){
    
    if (day == 0 && month ==0 && year==0)
    {
        Fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    if (Fecha_check(d,m,y)=="ok"){
        day=d;
        month=m;
        year=y;
    }
    else{
        exit;
    } 
            
};

Fecha::Fecha(int d,int m){
    if (d == 0 && m ==0)
    {
        Fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    year = TM.tm_year + 1900;
    if (Fecha_check(d,m,year)=="ok")
    {
        day=d;
        month = m;
    }
    else
        exit;
    
}

Fecha::Fecha(int d){
    if (day == 0 )
    {
        Fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
    
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    month = TM.tm_mon+1;
    year = TM.tm_year + 1900;
    if (Fecha_check(d,month,year)=="ok")
    {
        day=d;
    }
    else 
        exit;
    
}

Fecha::Fecha(){
    time_t tt;
    time(&tt);
    tm TM = *localtime(&tt);
    day= TM.tm_mday;
    month = TM.tm_mon+1;
    year = TM.tm_year + 1900;
}

Fecha::~Fecha()=default;

string Fecha::month_selector(int m){
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

void Fecha::show_date(){
    cout<<day<<" de "<<month_selector(month)<<" de "<<year<<endl;
}

Fecha& Fecha::operator = (Fecha a){
    this->year=a.year;
    this->month=a.month;
    this->day=a.day;
    return *this;
 }

Fecha::Fecha(string date){
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
            cerr<<"Se ha introducido una Fecha no valida"<<endl;
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
        Fecha aux;
        this->day=aux.dia();
        this->month=aux.mes();
        this->year=aux.anno();
    }
 }

Fecha& Fecha::operator ++(){

   
   this->day++;
   
   if (((this->month==4 || month==6 || month==9 || month==11)) && this->day>30)
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

Fecha& Fecha::operator --(){
    
    this->day--;
    if (this->day <1)
    {
        if ((this->month==4 || month==6 || month==9 || month==11))
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
    return *this;
}

inline bool operator == (Fecha a,Fecha b){
    return (a.dia()==b.dia() && a.mes()==b.mes() && a.anno()==b.anno() );
}
inline bool operator != (Fecha a, Fecha b){
    return !(a==b);
}

bool operator >(Fecha a, Fecha b){

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

inline bool operator <(Fecha a, Fecha b){
    return !(a > b);
}

inline bool operator >=(Fecha a, Fecha b){
    if (a > b == true || a==b)
        return true;
    else
        return false;
    
    
}

inline bool operator <= (Fecha a, Fecha b){
    if (a < b || a == b)
        return true;
    else
        return false;    
}

Fecha& Fecha::operator +(int n){
    if (n==365)
    {
        this->year++;
        return *this;
    }
    
   
   while (n > 0)
   {
        if ((this->month==4 || month==6 || month==9 || month==11) && this->day > 30){
            this->month++;
            this->day=1; 
        }
        else if (this->month!=4,2,6,9,11 &&this->day>31){
            this->month++;
            this->day=1;
           
        } 
        else if (this->month==2 && (this->year%4)==0 && this->day >29 )
        {
            this->month++;
            this->day=1;
        }
        else if (this->month==2 && (this->year%4)!=0 && this->day >28 )
        {
            this->month++;
            this->day=1;
        }
        

        if (this->month>12){
            this->year++;
            this->day=1;
            this->month=1;
        }     
        n--;
        this->day++;
    } 
        return *this;
}

Fecha& Fecha::operator -(int n){
    n*=-1;
    if (n==365)
    {
        this->year--;
        return *this;
    }
    
   
   while (n < 0)
   {
        if (this->month==5 || month==7 || month==10 || month==12 && this->day==0){
            this->month--;
            this->day=30; 
        }
        else if ((this->month!=5||month!=7 || month!=10|| month==12) &&this->day==0){
            this->month--;
            this->day=31;
           
        } 
        else if (this->month==3 && (this->year%4)==0 && this->day ==1 )
        {
            this->month--;
            this->day=29;
        }
        
        if (this->month==3 && (this->year%4)==1 && this->day ==1 )
        {
            this->month--;
            this->day=30;//seria 28 btw hotfix
        }
        

        if (this->month<1){
            this->year--;
            this->day=31;
            this->month=12;
        }     
        n++;
        
        this->day--;
    } 
        return *this;
}

string Fecha:: Fecha_check(int dd,int mm,int yy){
      
      try
    {
        if (dd > 31 || dd <1 )
        {
            throw 1 ;
        }
        else if (mm > 12 || mm<1)
        {
            throw 2;
        }
        else if(yy < Fecha::annomin){
            throw 3;
        }
        else if (yy > Fecha::annomaximo)
        {
            throw 4;
        }
        else{
                if (mm==4 || mm==6 || mm==9 || mm==11 && dd >30 )
                {
                    throw 5; // no tiene 31 dias 
                }
                else if (mm==2 && (yy%4)!=0 && dd >28){ 
                    throw 6;//29 dias en no bisisesto
                }
                else if (mm==2 && dd>29)
                    throw 7; //feb no tiene mas de 29 dias
        }  
        
    }
    catch(int e)
    {
        invalida er(e);
        switch(er.error()){
            case 1:
                er.what("Se ha introducido un dia erroneo ") ; 
                break;
            case 2:
                er.what("Se ha introducido un mes no valido");
                break;
            case 3:
                er.what("Se ha introducido un anno menor al anno minimo");
                break;
            case 4:
                er.what("Se ha introducido un anno mayor al anno maximo");
                break;
            case 5:
                er.what("Se ha introducido un mes con 31 dias cuando solo tiene 30");
                break;  
            case 6: 
                er.what("Se ha introducido mas de 28 dias en febrero y el anno no es bisiesto");
                break;
            case 7: 
                er.what("febrero no tiene mas de 29 dias");
                break;
            default:
                break;                      
        }
        exit(e);
    }
    return "ok";
}
   
   
