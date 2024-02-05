using namespace std;
#include <iostream>

class Hechizo {
    int costo;
    public :
        int getCosto() { return costo; }
        void setCosto(int val) { costo = val; } //deberia quedar de esta forma
    // asi estaba anteriormente void setCosto(int& val) { costo = val; } int getCosto() { return costo; }
};

int _tmain()
{
 Hechizo h;
 //aqui deberia declararse una variable de la siguiente forma int x=10
 h.setCosto(10/*aqui deberia ir x*/); cout << h.getCosto(); // Aqui intenta llamar a setCosto y getCosto pero esta no son metodos publicos, ademas la variable de la clase pide una variable por referencia y se le manda un numero en vez de una variable
 return 0;
}