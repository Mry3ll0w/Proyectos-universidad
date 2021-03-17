 #include<iostream>
 class C {
 public:
    C();
    C(int a, int b, int c, int d);
    int f1(int i) const;
    int f2(int i);
    static void f3() {m = l;}//Static, no puede usar objetos ya que no tiene this.
    static int n;
 private:
    mutable int i;
    const int j;
    mutable int k;
    int l;
    static int m;
};

int C::f1(int i) const
{
 l = i; k = i; return 0;//NO podemos modificar valores const en funciones
}
C::C() {i = j = k = l = 0;}//Asingacion con un const de valores no const
C::C(int a, int b, int c, int d) : i(a), j(b), k(c), l(d) {}
int C::f2(int i)
{
    k = i; l = i; return 0;
}

int main()
{
    C c;
    C::n = 3;//No se puede asignar un valor a tiene que ser en una funcion, 
    //fuera del main, ademas no esta inicializado
    c.n = 4;//No se puede asignar un valor a tiene que ser en una funcion
    std::cout << C::n << "␣" << c.n << std::endl;
    return 0;
}
