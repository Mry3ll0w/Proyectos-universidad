#include <iostream>
using namespace std;
class C{
    public:
        C(int i=0):n(i){}
        void mostrar()const{
            cout<<"i="<<n<<endl;
        }
    private:    
        int n;
};
int main(){
    const C c;
    c.mostrar();
}