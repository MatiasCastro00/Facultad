#include <iostream>
#include <string>
#include <limits>

class ConsoleManager {
public:
    void mostrarMensaje(const std::string& mensaje) {
        std::cout << mensaje << std::endl;
    }

    int leerEntero() {
        int valor;
        while (!(std::cin >> valor)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor, ingrese un número entero: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return valor;
    }

    float leerFlotante() {
        float valor;
        while (!(std::cin >> valor)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor, ingrese un número decimal: ";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return valor;
    }

    void pausa() {
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};

int main() {
    ConsoleManager manager;
    int jugadores;
    float energia;

    manager.mostrarMensaje("Ingrese la cantidad de jugadores");
    jugadores = manager.leerEntero();

    manager.mostrarMensaje("Ingrese la cantidad de energía");
    energia = manager.leerFlotante();

    manager.mostrarMensaje("Esperamos que haya disfrutado perder su tiempo. Le agradecemos interactuar con nosotros.");
    manager.pausa();

    return 0;
}
