#include <iostream>
#include <list>
using namespace std;
class Heroe {
    private:
        int x, y; //posicion en el mundo
        list <string> princesas;
    public:
        int salud;
        Heroe(){
            x=0;
            y=0;
            salud = 5000;
        }
        void AddPrinces(string newPrincess){
            princesas.push_front(newPrincess);
        }
};
